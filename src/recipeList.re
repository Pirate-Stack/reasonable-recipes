[%bs.raw {|require('./recipeList.css')|}];

let component = ReasonReact.statelessComponent("RecipeList");

let make = (~recipe:RecTypes.recipe, _children) => {
  ...component,
  render: (_self) =>
    <div className="container">
      <p className="App-intro">
        (ReasonReact.stringToElement(recipe.name))
      </p>
      <img src=recipe.image className="recipe-img" />
      <h4>(ReasonReact.stringToElement("Directions"))</h4>
      <ol>
        (
          recipe.directions
            |> Array.map(d => <li key=d>(ReasonReact.stringToElement(d))</li>)
            |> ReasonReact.arrayToElement
        )
      </ol>
    </div>
};
