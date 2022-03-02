
 int numStudents;
 char **studentID;

 int numCourses;
 char **courses;

int** studentsTable;


void init_stuTable();
void freeAll();
void init_courseTable();
void init_regTable();
void print_Menu();
void print_regisTable();
void registerStudent(void);
void registerCourse();
void dropStudent();
void findandDrop();