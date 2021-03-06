class Solution {
public:
	bool judgeCircle(string moves) {
		int x=0, y=0;
		for (auto c : moves) {
			if (c == 'U')
				y++;
			else if (c == 'D')
				y--;
			else if (c == 'R')
				x++;
			else
				x--;
		}
		if (x == 0 && y == 0)
			return true;
		else
		{
			return false;
		}
	}
};