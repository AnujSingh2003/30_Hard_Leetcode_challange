class Solution
{
 public:
string func(string s)
{
	string new_s;
	int n = s.length();
	stack<char> st;
	for (int i = 0; i < n; i++)
	{

		if (s[i] == '#' && !st.empty())
		{
			st.pop();
		}
		else if (s[i] != '#')
			st.push(s[i]);
	}

	while (!st.empty())
	{
		new_s = st.top() + new_s;
		st.pop();
	}
	return new_s;
}
bool backspaceCompare(string s, string t)
{
	string new_s = func(s);
	string new_t = func(t);

	if (new_s == new_t)
		return true;

	return false;
}
 };