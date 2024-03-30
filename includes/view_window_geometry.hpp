#ifndef VIEW_WINDOW_GEOMETRY_HPP
#define VIEW_WINDOW_GEOMETRY_HPP

namespace View
{
    class WindowGeometry
    {
    private:
        int m_width{};
        int m_height{};
        int m_beginX{};
        int m_beginY{};
    public:
        WindowGeometry(int width = 0, int height = 0, int beginX = 0, int beginY = 0);
        int getX() const;
        int getY() const;
        int getWidth() const;
        int getHeight() const; 

        void setX(int x);
        void setY(int y);
        void setWidth(int width);
        void setHeight(int height);
    };
}

#endif