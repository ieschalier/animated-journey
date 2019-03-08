const emModule = require('./api')

// Quick hack to wait initialisation of module
setTimeout(() => {
  emModule.ccall('myFunction')
}, 0)
