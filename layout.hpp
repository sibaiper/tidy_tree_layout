#ifndef LAYOUT_HPP
#define LAYOUT_HPP
#include "node.hpp"
#include "IYL.hpp"
#include <memory>

void layout(Node* t);
void firstwalk(Node* t);
void secondwalk(Node* t, double modsum);
void set_extremes(Node* t);
static std::unique_ptr<IYL> updateIYL(double miny, int i, std::unique_ptr<IYL> ih);
double bottom(Node* t);
void separate(Node* t, int i, std::unique_ptr<IYL>& ih);
void move_subtree(Node* t, int i, int si, double dist);
Node* next_right_contour(Node* t);
Node* next_left_contour(Node* t);
void set_left_thread(Node* t, int i, Node* cl, double modsumcl);
void set_right_thread(Node* t, int i, Node* cl, double modsumsr);
void distribute_extra(Node* t, int i, int si, double dist);
void position_root(Node* t);
void add_child_spacing(Node* t);


#endif // LAYOUT_HPP
