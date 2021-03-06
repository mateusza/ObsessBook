#ifndef __USER_H__
#define __USER_H__ 1

typedef struct user_struct user;

struct user_struct {
    int     user_ID;
    char*   name;
    char*   account_handle;
    int     number_of_BFFs;
    user**  BFF_list;
    int     scratch;
};

void user_show( user * );

#endif
