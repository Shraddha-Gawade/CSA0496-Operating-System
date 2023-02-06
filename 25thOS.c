#include <stdio.h> 

#define BLOCK_SIZE 8192 
#define NUM_BLOCKS 100 

int contiguous(int block_num) 
{ 
    return 1; 
} 

int linked(int block_num) 
{ 
    return 2; 
} 

int indexed(int block_num) 
{ 
    return 1; 
} 

int main() 
{ 
    int block_num; 
  
    printf("Enter block number: "); 
    scanf("%d", &block_num); 
  
    printf("Contiguous: %d disk I/O operations\n", contiguous(block_num)); 
    printf("Linked: %d disk I/O operations\n", linked(block_num)); 
    printf("Indexed: %d disk I/O operations\n", indexed(block_num)); 
  
    return 0; 
}
