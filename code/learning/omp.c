# include <stdio.h>
# include <omp.h>

int main(int argc, char const *argv[])
{
	/* code */
	// printf("Hello parallel world from thread:\n");
	// //omp_set_num_threads(2);
	// # pragma omp parallel 
	// {
 //   		printf("%d\n", omp_get_thread_num());
 // 	}
 // 	{
 //  		printf("Back to the sequential world\n");  
 //    }  
omp_set_num_threads(2);	
 	#pragma omp parallel for schedule(static, 2)
    for(int i = 0; i < 10; i++ )
    {
         printf("i=%d, thread_id=%d\n", i, omp_get_thread_num());
}
	//return 0;
}