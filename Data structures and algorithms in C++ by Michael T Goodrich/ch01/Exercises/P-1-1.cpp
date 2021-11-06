/*  P-1.1
    A common punishment for school children is to write out the same sentence 
    multiple times. Write a C++ stand-alone program that will write out the 
    following sentence one hundred times: “I will always use object-oriented 
    design.” Your program should number each of the sentences and it should 
    “accidentally” make eight different random-looking typos at various points
    in the listing, so that it looks like a human typed it all by hand.
 */

#include <iostream>
using std::cout;
using std::endl;
using std::string;

#include <random>
using std::mt19937;
using std::random_device;
using std::uniform_int_distribution;

#include <set>
using std::set;

/*  My approach:
    Generate unique random numbers which are positions at which there will be 
    a typo. Then generate two unique random numbers which will be the indices to
    swap in the sentence, creating some misspelled words/
 */
int main()
{
    string sentence = "I will always use object-oriented design.";
    int timesToRepeat = 100;
    int numOfTypos = 8;

    /* https://stackoverflow.com/questions/7560114/random-number-c-in-some-range/7560564#7560564 */
    random_device rd;
    mt19937 generator(rd());
    uniform_int_distribution<int> distribution(1, timesToRepeat);

    /*  I could'nt figure out how to get n unique random numbers in a given range
        so I used set.
     */
    set<int> randomNumbers;
    while (randomNumbers.size() != numOfTypos)
    {
        randomNumbers.insert(distribution(generator));
    }

    set<int>::iterator iter = randomNumbers.begin();
    for (int i = 1; i <= timesToRepeat; i++)
    {
        int randomIdx = *iter;
        if (randomIdx == i)
        {
            uniform_int_distribution<> twoDistribution(0, sentence.length());

            /*  Generates two unique random numbers for indices to swap from 
                sentence.
             */
            set<int> twoRandomNumbers;
            while (twoRandomNumbers.size() != 2)
            {
                twoRandomNumbers.insert(twoDistribution(generator));
            }
            int idx1 = *twoRandomNumbers.begin();
            int idx2 = *twoRandomNumbers.end();

            string modifiedSentence = sentence.substr();
            char temp = modifiedSentence[idx1];
            modifiedSentence[idx1] = modifiedSentence[idx2];
            modifiedSentence[idx2] = temp;

            printf("%3d. ", i);
            cout << modifiedSentence << endl;
            iter++;
            continue;
        }
        printf("%3d. ", i);
        cout << sentence << endl;
    }
}