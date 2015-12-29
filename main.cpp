
#include <cstdio>
#include "mixer.hpp"
#include "lexer.hpp"

apm_mix::mixer_t* fn_mix();

int main()
{
   printf("mixer demo\nInput the mixer...\n\n");
   apm_mix::mixer_init();
   if ( apm_lexer::open_file("input.txt")){
      if (fn_mix()){
        apm_mix::eval_mixer_outputs();
      }
      apm_lexer::close_file();
   }else{
      printf("open file failed\n");
   }
}





