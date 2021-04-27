#ifndef PONY_HPP
# define PONY_HPP

class Pony {
private:
    const char	*color;
    int			weight;

public:
    void		setColor(const char *c);
	const char	*getColor();
    void		setWeight(int w);
    int			getWeight();
};
#endif