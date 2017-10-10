#include <iostream>
#include <vector>

using namespace std;

int rowSize = 13;
int colSize = 13;

int main()
{
    vector < vector <int> > table;

    table.resize(rowSize);

    for(int r = 0; r < table.size(); r++)
    {
        table[r].resize(colSize);
    }

    for(int i = 0; i < table.size(); i++)
    {
        table[i][0] = i;
        
    }

    for(int j = 0; j < table[0].size(); j++)
    {
        table[0][j] = j;
    
    }

    for(int r = 1; r < table.size(); r++)
    {
        
        for(int c = 1; c < table[r].size(); c++)
        {
            table[r][c] = table[0][c] * table[r][0];
            //cout << "|" << table[r][c] << "|";
        }

        //cout << endl;
    }
   
    for(int l = 0; l < table.size(); l++)
    {
        for(int k = 0; k < table[l].size() - (table.size() - (l + 1)); k++)
        {
            if(table[l][k] < 10)
            {
                cout << "|  " << table[l][k] << "|";
            }
            else if(table[l][k] < 100)
            {
                cout << "| " << table[l][k] << "|";

            }
            else
            {
                cout << "|" << table[l][k] << "|";
            }
            
        }
        cout << endl;
        
    }
    

    return 0;    


}
