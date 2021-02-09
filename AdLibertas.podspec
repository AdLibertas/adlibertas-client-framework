Pod::Spec.new do |spec|
  spec.name                = 'AdLibertas'
  spec.version             = '0.0.1'
  spec.license             = { :type => 'Apache-2.0', :file => 'LICENSE.txt' }
  spec.homepage            = 'https://www.adlibertas.com/'
  spec.authors             = 'AdLibertas, Inc.'
  spec.summary             = 'AdLibertas is a simple to use, drop-in SDK for accurate User LTV reporting'
  spec.source              = { :git => 'https://github.com/AdLibertas/adlibertas-client-framework', :tag => 'v0.0.1' }
  spec.platform            = :ios, "9.0"
  spec.vendored_frameworks = 'bin/AdLibertas.framework'
  spec.module_name         = "#{spec.name}_umbrella"
end
