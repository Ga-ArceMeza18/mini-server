# include "../includes/net_util.h"

#define DEFAULT_PORT 8080
#define LISTEN_BACKLOG 64
#define DRAIN_SECONDS 1

typedef struct {
    int file_descriptor;
    unsigned long connection_id;
} connection_t;


