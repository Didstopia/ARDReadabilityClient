Pod::Spec.new do |s|
  s.name         = "DDARDReadabilityClient"
  s.version      = "0.3"
  s.summary      = "An iOS library for Readability.com."
  s.homepage     = "https://github.com/didstopia/DDARDReadabilityClient"

  s.license      = { :type => 'MIT', :file => 'LICENSE' }
  s.author       = { "Andrew Slabko" => "andrew@slabko.com" }
  s.source       = { 
    :git => "https://github.com/Didstopia/DDARDReadabilityClient.git", 
    :tag => "0.3"
  }

  s.ios.deployment_target = "7.0"
  s.osx.deployment_target = "10.10"
  
  s.source_files = 'ARDReadabilityClient/*'
  s.requires_arc = true
  s.dependency 'AFNetworking', '>= 2.5.1'
end
