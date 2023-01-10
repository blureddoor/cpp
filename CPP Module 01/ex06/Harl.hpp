#ifndef HARL_H
# define HARL_H

# include <iostream>
# include <string>
# include <stdlib.h>


class Harl{
	public:
		Harl(void);
		void complain(std::string level);
		void etc(void);

	private:
		typedef struct s_status
		{
					std::string m_name;
					void(Harl::*ptr)(void);
		}			t_status;
		t_status	m_status[4];
//		std::string	m_name;

		void		debug(void);
		void		info(void);
		void		warning(void);
		void		error(void);

		void		init(void);
};

#endif