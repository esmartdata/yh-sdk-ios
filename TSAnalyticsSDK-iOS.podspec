Pod::Spec.new do |s|
  s.name         = "TSAnalyticsSDK-iOS"
  s.version      = "0.0.3"
  s.summary      = "Analytics framework to CocoaPods"
  s.description  = <<-DESC
                       this is Analytics framework, now upload it to cocoapod
                   DESC
  s.homepage     = "https://github.com/esmartdata/yh-sdk-ios"
  s.license      = "MIT"
  # s.license      = { :type => "MIT", :file => "FILE_LICENSE" }
  s.author             = "ryan"
  # s.platform     = :ios
  s.platform     = :ios, "9.0"

  s.source       = { :git => "https://github.com/esmartdata/yh-sdk-ios.git", :tag => "#{s.version}" }

  # the framework upload to Cocoa Pods
  s.vendored_frameworks = "AnalyticsSDK.framework"
  s.frameworks = "Foundation"
  s.pod_target_xcconfig = { 'VALID_ARCHS' => 'x86_64 armv7 arm64' }

end
