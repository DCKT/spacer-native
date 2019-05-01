# Spacer-native

An utility component for pushing other elements and avoid `padding`, `margin` everywhere.

## Usage

Install :

```console
yarn add @dck/spacer-native
```

### Web

```js
import { Text } from 'react-native'
import Spacer from '@dck/spacer-native

const App = () => {
  <>
    <Text>Hello</Text>
    <Spacer height={10} />
    <Text>world</Text>
  </>
}
```

### ReasonML

Add the module to your `bsconfig.json` file :

```
"bs-dependencies": [
  ...,
  "@dck/spacer-native"
]
```

Use it in your app code :

```ocaml
[@react.component]
let make = () => {  
  <>
    <Text>{"Hello" |> React.string}</Text>
    <Spacer height=10. />
    <Text>{"World" |> React.string}</Text>
  </>
};
```
