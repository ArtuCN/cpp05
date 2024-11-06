File Edit Options Buffers Tools Makefile Help                                   
NAME = Burea
SRC = Bureaucrat.cpp main.cpp
OBJ_DIR = obj
OBJ = $(SRC:%.cpp=$(OBJ_DIR)/%.o)
CPP = c++
FLAGS = -Wall -Wextra -Werror -std=c++98

$(OBJ_DIR)/%.o : %.cpp
                @mkdir -p $(OBJ_DIR)
                @$(CPP) $(FLAGS) -c $< -o $@


%.o     : %.cpp
                @$(CPP) $(FLAGS) -c $< -o $@

FUCHSIA = '\033[0;95m'
CYAN = '\033[0;36m'
NONE = '\033[0m'


$(NAME) : $(OBJ)
-UU-:----F1  Makefile       Top L1    Git-master  (GNUmakefile) ----------------
For information about GNU Emacs and the GNU system, type C-h C-a.
