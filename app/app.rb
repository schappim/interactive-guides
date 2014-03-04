#!/usr/bin/env ruby

require 'rubygems'
require 'sinatra'

get '/' do
  "Hello World"
end

get "/:language/0-main-menu" do
	"0-main-menu"
end

get "/:language/01-blinking-led" do
	"01-blinking-led"
end

get "/:language/02-potentiometer" do
	"02-potentiometer"
end

get "/:language/03-rgb-led" do
	"03-rgb-led"
end

get "/:language/04-push-buttons" do
	"04-push-buttons"
end

get "/:language/05-photo-resistor" do
	"05-photo-resistor"
end

get "/:language/06-temperature-sensor" do
	"06-temperature-sensor"
end

get "/:language/07-servo" do
	"07-servo"
end

get "/:language/08-piezo-element" do
	"08-piezo-element"
end

get "/:language/09-motors" do
	"09-motors"
end

get "/:language/10-relays" do
	"10-relays"
end
