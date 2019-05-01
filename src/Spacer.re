open ReactNative;
open Belt;

[@react.component]
let make = (~width: option(float)=?, ~height: option(float)=?) => {
  let width = width->Option.getWithDefault(0.)->Size.pt;
  let height = height->Option.getWithDefault(0.)->Size.pt;

  <View style={Style.style(~width, ~height, ())} />;
};