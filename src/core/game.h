#ifndef BEJEWELED_CORE_GAME_H_
#define BEJEWELED_CORE_GAME_H_

namespace bejeweled {

class Game {
public:
  void loop();

private:
  void onClick(int x, int y);
};

} // namespace bejeweled

#endif //BEJEWELED_CORE_GAME_H_
