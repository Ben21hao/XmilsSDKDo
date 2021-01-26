#
# Be sure to run `pod lib lint XmilsSDKDo.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'XmilsSDKDo'
  s.version          = '0.5.0'
  s.summary          = 'A short description of XmilsSDKDo.'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
TODO: Add long description of the pod here.
                       DESC

  s.homepage         = 'https://github.com/Ben21hao/XmilsSDKDo'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'Ben21hao' => '794769807@qq.com' }
  s.source           = { :git => 'https://github.com/Ben21hao/XmilsSDKDo.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '9.0'

#  s.source_files = 'XmilsSDKDo/Classes/**/*'
  s.vendored_frameworks = "XmilsSDKDo/Classes/*.framework"
  
  # s.resource_bundles = {
  #   'XmilsSDKDo' => ['XmilsSDKDo/Assets/*.png']
  # }
  s.resource         = "XmilsSDKDo/Assets/*.bundle"
  
  s.pod_target_xcconfig = { 'VALID_ARCHS[sdk=iphonesimulator*]' => '' }

  # s.public_header_files = 'Pod/Classes/**/*.h'
  # s.frameworks = 'UIKit', 'MapKit'
  # s.dependency 'AFNetworking', '~> 2.3'
  
  s.dependency 'AFNetworking', '~>4.0.1'
  s.dependency 'Masonry'
  s.dependency 'UICountingLabel'
  s.dependency 'SVProgressHUD'
  s.dependency 'MJRefresh'
  s.dependency 'XBExpandViews'
  s.dependency 'SDWebImage'
  s.dependency 'MJExtension', '~>3.1.0'
  
  s.dependency 'WechatOpenSDK', '1.8.7.1'
  s.dependency 'Bytedance-UnionAD', '3.3.6.1'  # 穿山甲广告
  s.dependency 'GDTMobSDK', '4.12.3'  # 广点通广告
  
  
end
