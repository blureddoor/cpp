#ifndef KAREN_H
# define KAREN_H

# include <iostream>
# include <map>
# include <string>


class Karen{
	public:
		void complain(std::string level);
		Karen(void);

	private:
		typedef struct	s_status
		{
					std::string	m_name;
					void(Karen::*ptr)(void);
		}			t_status;
		t_status	status[4];
		void		debug(void);
		void 		info(void);
		void 		warning(void);
		void		error(void);

		void		init(void);
};

#endif