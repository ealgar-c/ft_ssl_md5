#pragma once

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdbool.h>


typedef struct s_flags {
	bool flag_p;
	bool flag_q;
	bool flag_r;
	bool flag_s;
} t_flags;

typedef enum e_cryto_type {
	md5,
	ssl
} t_crypto_type;

typedef struct s_ssl_md5 {
	t_flags			flags;
	t_crypto_type	crypto_type;
	bool			isfile;
	
} t_ssl_md5;