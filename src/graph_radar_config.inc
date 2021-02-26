  theme: {
    mode: theme_mode,
  },
  chart: {
    type: 'radar',
    height: 300,
    zoom: {
      type: 'x',
      enabled: true,
      autoScaleYaxis: true
    },
    toolbar: {
      autoSelected: 'zoom'
    },
  },
  dataLabels: {
    enabled: false
  },
  markers: {
    size: 0,
  },
  fill: {
    opacity: 0.1
  },
  stroke: {
    width: 2
  },
  xaxis: {
    categories: ['N', 'NE', 'E', 'SE', 'S', 'SW', 'W', 'NW']
  },
  tooltip: {
    x: {
        formatter: function(value, { series, seriesIndex, dataPointIndex, w }) {
            return value
        }
    }
  },