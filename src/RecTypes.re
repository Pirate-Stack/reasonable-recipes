type ingredient = {
  name: string,
  qty: float,
  measurement: string
};

type recipe = {
  id: int,
  name: string,
  image: string,
  ingredients: array(ingredient),
  directions: array(string)
};