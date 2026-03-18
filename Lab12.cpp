#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;

struct Movie 
{
  string sayThis;
  Movie* yes;
  Movie* no;
};

int main()
{
  // all of the diagnoses
  Movie a = {"It's Atlantis!"};
  Movie b = {"It's Demon Slayer!"};
  Movie c = {"It's Marley and Me!"};
  Movie d = {"It's Princess Diary!"};
  Movie e = {"It's Elysium!"};
  Movie f = {"It's 50 Shades of Grey!"};
  Movie g = {"It's Star Wars!"};
  Movie h = {"It's Pirates of the Caribbean!"};
  // all of the questions
  
  Movie i = {"Is it a Disney production?", &a, &b};
  Movie j = {"Are animals involved?", &c, &d};
  Movie k = {"Are there guns used?", &e, &f};
  Movie l = {"Is it in space?", &g, &h};
  Movie m = {"Is it animated?", &i, &j};
  Movie n = {"Is it rated R?", &k, &l};
  Movie o = {"Are children under 13 able to watch it?", &m, &n};
 
  Movie* top = &o; // the full tree
  string buf;
 
  // the "challenge" to the user
  cout << "\nTell me about the movie you are watching and I'll identify it.\n\n";
 
  Movie* p = top; // move p through the tree
  while (true) // the p-loop
  {
    cout << p->sayThis; // could be the answer or could be another question
    if (p->yes == 0 && p->no == 0) break; // it was the answer -- we're done!
    cout << " [yes/no] ";

    getline(cin, buf);
    if (buf == "yes") p = p->yes;
    else if (buf == "no") p = p->no;
  }
}