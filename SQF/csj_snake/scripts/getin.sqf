_snake = _this select 0;
_driver = driver vehicle _snake;
if (_driver ==player) then  {(driver _snake) action ["eject", _snake]};
hint "non AI or player vehicle";
