#!/usr/bin/lua
package.cpath = package.cpath .. ';../build/lib/?.so'

local QtCore = require'qtcore'

qa = QtCore.QCoreApplication.new(1, {'test_class'})

local Class = QtCore.QObject()

function Class:__static_init()
	print('__static_init', self)
	self.className = 'TestObject'
end

function Class:__init(name)
	print('__init', self)
	if name then
		self.className = name
	end
end

function Class:dump()
	print('ClassName:', self, self.className)
end

Class = Class:class()

local function main()
	local obj = Class()
	obj:dump()

	-- will delete in gc
	local obj1 = Class({}, 'TestObject 1')
	obj1:dump()

	-- wont delete in gc
	local obj2 = Class.new({}, 'TestObject 2')
	obj2:dump()
end
main()

print('start gc')
collectgarbage()
print('end gc')
