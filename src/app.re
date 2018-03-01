[%bs.raw {|require('./app.css')|}];

[@bs.module] external logo : string = "./logo.svg";

let component = ReasonReact.statelessComponent("App");


let curry : RecTypes.recipe = {
  id: 1,
  name: "Thai Green Curry",
  image: "https://imgur.com/hwP6rg2.jpg",
  ingredients: [|
    {
      name: "canned coconut milk (do not shake)",
      qty: 13.5,
      measurement: "oz"
    },
  |],
  directions: [|
    "Open the can of coconut milk without shaking it. Spoon 6 tablespoons of the coconut cream from the top of the can into a medium saucepan. Pour remaining contents of can into a medium bowl, and mix well. In a medium bowl, combine vegetable stock, soy sauce, and palm or brown sugar. Stir until the sugar is dissolved.        ",
    "Place saucepan of coconut cream over medium-high heat until it begins to bubble. Add curry paste and reduce heat to medium-low. Stir constantly until very fragrant, about 3 minutes; adjust heat as needed to prevent burning. Add onion, red pepper, zucchini, sweet potato, bamboo shoots, green beans, and eggplant. Stir until vegetables are hot, 2-3 minutes. Stir in coconut milk, bring the mixture to a boil, and reduce heat to low. Simmer, uncovered, until the vegetables are tender, about 10 minutes.",
    "Add the soy sauce mixture and a generous squeeze of fresh lime juice to taste; you may use the juice of an entire lime. Stir and mix well. Add up to 1/4 cup water if the curry seems too thick.",
    "To serve, place the curry in a warm serving bowl over jasmine rice."
  |]
};

let pancake : RecTypes.recipe = {
  id: 2,
  name: "Dutch Baby",
  image: "",
  ingredients: [||],
  directions: [||],
};

let make = (_children) => {
  ...component,
  render: (_self) =>
    <div>
      <header>
        <div className="container">
          <img src=logo className="logo" alt="logo" />
        </div>
      </header>
      <div className="container">
      <RecipeList recipe=curry />
      <RecipeList recipe=pancake />
      </div>
    </div>
};
