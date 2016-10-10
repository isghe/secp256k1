#include <stdio.h>
#include "include/secp256k1.h"

int main (){
// clang -I{your path}/secp256k1 src/secp256k1.c src/hello_secp256k1.c -lgmp -DVERIFY -DHAVE_CONFIG_H
// clang -I{your path}/secp256k1 src/tests.c -lgmp -DVERIFY -DHAVE_CONFIG_H -v
	printf ("Hello secp256k1!\n");

	secp256k1_context* aContext = secp256k1_context_create (SECP256K1_CONTEXT_NONE);
	if (NULL != aContext){
		printf ("%s: aContext: %p;\n", __PRETTY_FUNCTION__, aContext);
		secp256k1_context_destroy (aContext);
		aContext = NULL;
	}

	printf ("bye bye…\n");
}
