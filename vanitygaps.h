/* Key binding functions */
static void defaultgaps(const Arg *arg);
static void incrgaps(const Arg *arg);
static void incrigaps(const Arg *arg);
static void incrogaps(const Arg *arg);
static void incrohgaps(const Arg *arg);
static void incrovgaps(const Arg *arg);
static void incrihgaps(const Arg *arg);
static void incrivgaps(const Arg *arg);
static void togglegaps(const Arg *arg);
/* Layouts (delete the ones you do not need) */
static void tile(Monitor *m);
/* Internals */
static void getgaps(Monitor *m, int *oh, int *ov, int *ih, int *iv, unsigned int *nc);
static void getfacts(Monitor *m, int msize, int ssize, float *mf, float *sf, int *mr, int *sr);
static void setgaps(int oh, int ov, int ih, int iv);
