const emModule = require('./api')

const javascriptBench = () => {
  console.time('javascript time')
  const calcul = n => {
    let sum = 0

    for (let i = 0; i < n; i++) if (i % 3 === 0 || i % 5 === 0) sum += i
    return sum
  }

  for (let i = 0; i < 1000; i++) calcul(100000)
  // javascript time: 305.247ms
  console.timeEnd('javascript time')
}

const cBench = () => {
  console.time('cpp time')
  emModule.ccall('cBench')
  // cpp time: 564.653ms
  console.timeEnd('cpp time')
}

const startBench = () => {
  javascriptBench()
  // Quick hack to wait initialisation of module
  setTimeout(cBench, 0)
}

startBench()
