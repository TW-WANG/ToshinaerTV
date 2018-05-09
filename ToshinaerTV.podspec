Pod::Spec.new do |s|
  s.name = "ToshinaerTV"
  s.version = "0.0.1"
  s.summary = "ToshinaerTV summary"
  s.license = {"type"=>"MIT", "file"=>"LICENSE"}
  s.authors = {"Sam Wang"=>"samwang@smart-ehome.com"}
  s.homepage = "https://github.com/TW-WANG/ToshinaerTV"
  s.description = "Remote Control Library of Toshinaer Outdoor TV."
  s.requires_arc = true
  s.source       = { :git => 'https://github.com/TW-WANG/ToshinaerTV.git', :tag => "#{s.version}" }

  s.ios.deployment_target    = '8.0'
  s.ios.vendored_framework   = 'ios/ToshinaerTV.framework'
end
