#include<iostream>
#include<string>


//definition of vote summation   
int add_votes(int no_cand,int cand_vote_arr[]) 
{
  int sum = 0;
  for(int i = 0;i < no_cand; i++)
    sum = sum + cand_vote_arr[i];
  return sum;

}

//graph function defined
void graph (std::string  cand_name[], int  cand_vote_arr[],int no_cand)
{
  int votes_sum;
  votes_sum = add_votes(no_cand, cand_vote_arr);
  for (int i=0; i<no_cand; i++)
    {
      double d = (((double)cand_vote_arr[i]/votes_sum)*100);
	  std::cout<<"\t|";
      for(int j = 0;j < (int) d; j++)
        {
          std::cout << "+";
        }
      std::cout << " -> " << cand_name[i] << ": " << cand_vote_arr[i] << " votes " << std::endl<<"\n\n";
    }
}

