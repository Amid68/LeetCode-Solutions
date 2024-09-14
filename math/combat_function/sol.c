int combat(int health, int damage) {
  int remaining_health = health - damage;
  return remaining_health < 0 ? 0 : remaining_health;
}
