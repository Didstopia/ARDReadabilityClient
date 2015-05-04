# Needed for stuff
source 'https://github.com/CocoaPods/Specs.git'

def import_pods
    pod 'AFNetworking', '>= 2.5.1'
end

target :ios do
    platform :ios, '7.0'
    link_with 'ARDReadabilityClient'
    import_pods
end

target :osx do
    platform :osx, '10.10'
    link_with 'ARDReadabilityClient-OSX'
    import_pods
end

