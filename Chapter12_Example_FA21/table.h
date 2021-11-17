// Units are in feet.

class table
{
public:
	table();
	~table();

	void SetHeight(float height_);
	void SetWidth(float width_);
	void SetLength(float length_);

	float GetHeight();
	float GetWidth();
	float GetLength();

private:
	float height;
	float width;
	float length;
};
