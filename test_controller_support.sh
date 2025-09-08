#!/bin/bash

# Controller Support Testing Script for SystemBreach
# This script helps verify that controller support is properly implemented

echo "=== SystemBreach Controller Support Test ==="
echo ""

# Check if project files exist
echo "Checking project configuration..."

if [ -f "SystemBreach.uproject" ]; then
    echo "✅ Project file found"
else
    echo "❌ SystemBreach.uproject not found"
    exit 1
fi

if [ -f "Config/DefaultInput.ini" ]; then
    echo "✅ Input configuration found"
else
    echo "❌ Config/DefaultInput.ini not found"
    exit 1
fi

# Check Enhanced Input configuration
echo ""
echo "Checking Enhanced Input configuration..."

if grep -q "EnhancedInput" SystemBreach.uproject; then
    echo "✅ Enhanced Input plugin enabled"
else
    echo "⚠️  Enhanced Input plugin may not be enabled"
fi

if grep -q "DefaultPlayerInputClass=/Script/EnhancedInput.EnhancedPlayerInput" Config/DefaultInput.ini; then
    echo "✅ Enhanced Player Input class configured"
else
    echo "❌ Enhanced Player Input class not configured"
fi

# Check gamepad axis configurations
echo ""
echo "Checking gamepad axis configurations..."

gamepad_axes=("Gamepad_LeftX" "Gamepad_LeftY" "Gamepad_RightX" "Gamepad_RightY" "Gamepad_RightTriggerAxis")

for axis in "${gamepad_axes[@]}"; do
    if grep -q "$axis" Config/DefaultInput.ini; then
        echo "✅ $axis configured"
    else
        echo "❌ $axis not found"
    fi
done

# Check gamepad button configurations
echo ""
echo "Checking gamepad button configurations..."

gamepad_buttons=("Gamepad_FaceButton_Bottom" "Gamepad_FaceButton_Right" "Gamepad_FaceButton_Left" "Gamepad_FaceButton_Top")

for button in "${gamepad_buttons[@]}"; do
    if grep -q "$button" Config/DefaultInput.ini; then
        echo "✅ $button configured"
    else
        echo "⚠️  $button not found in input config"
    fi
done

# Check Input Mapping Contexts
echo ""
echo "Checking Input Mapping Contexts..."

if [ -f "Content/FirstPerson/Input/IMC_Default.uasset" ]; then
    echo "✅ IMC_Default found"
else
    echo "❌ IMC_Default.uasset not found"
fi

if [ -f "Content/FirstPerson/Input/IMC_Weapons.uasset" ]; then
    echo "✅ IMC_Weapons found"
else
    echo "❌ IMC_Weapons.uasset not found"
fi

# Check Input Actions
echo ""
echo "Checking Input Actions..."

input_actions=("IA_Move" "IA_Look" "IA_Jump" "IA_Shoot")

for action in "${input_actions[@]}"; do
    if [ -f "Content/FirstPerson/Input/Actions/${action}.uasset" ]; then
        echo "✅ $action found"
    else
        echo "❌ $action.uasset not found"
    fi
done

echo ""
echo "=== Test Summary ==="
echo ""
echo "📋 Manual Testing Required:"
echo "1. Open project in Unreal Engine Editor"
echo "2. Connect a gamepad controller"
echo "3. Play the game (PIE - Play In Editor)"
echo "4. Test the following controls:"
echo "   - Left stick: Character movement"
echo "   - Right stick: Camera look (Y should be inverted)"
echo "   - A button (Xbox) / X button (PS): Jump"
echo "   - Right trigger: Shoot weapon"
echo "   - D-pad: UI navigation (if UI present)"
echo ""
echo "📝 Next Steps:"
echo "1. Review INPUT_MAPPING_TEMPLATE.md for detailed configuration"
echo "2. Update Input Mapping Contexts in Unreal Editor"
echo "3. Test with multiple controller types"
echo "4. Implement UI controller navigation if needed"
echo ""

# Show configuration files that were modified
if [ -f "CONTROLLER_SUPPORT_IMPLEMENTATION.md" ]; then
    echo "📄 Documentation: CONTROLLER_SUPPORT_IMPLEMENTATION.md"
fi

if [ -f "INPUT_MAPPING_TEMPLATE.md" ]; then
    echo "📄 Configuration Guide: INPUT_MAPPING_TEMPLATE.md"
fi

echo ""
echo "Controller support setup complete! 🎮"