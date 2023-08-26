#ifndef GEOMETRY_DEMO_H
#define GEOMETRY_DEMO_H

void geometry_example_setup(void);
void geometry_example_process_input(SDL_Event* event, int delta_time);
void geometry_example_free_resources(void);
void geometry_example_update(int delta_time);
void geometry_example_render(int delta_time);

#endif