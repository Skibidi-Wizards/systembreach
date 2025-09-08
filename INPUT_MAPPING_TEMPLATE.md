# Enhanced Input Mapping Context Configuration Template

This file provides the configuration details needed to set up controller support in the Enhanced Input Mapping Contexts.

## Input Mapping Context: IMC_Default

### IA_Move (Input Action - 2D Vector)
**Keyboard Mappings:**
- W, A, S, D keys

**Controller Mappings to Add:**
- Gamepad Left Stick (Gamepad_LeftX, Gamepad_LeftY)
  - Input Type: 2D Vector
  - Modifiers: None
  - Triggers: None

### IA_Look (Input Action - 2D Vector)  
**Mouse Mappings:**
- Mouse X, Mouse Y

**Controller Mappings to Add:**
- Gamepad Right Stick (Gamepad_RightX, Gamepad_RightY)
  - Input Type: 2D Vector
  - Modifiers: Scale (X: 1.0, Y: -1.0) - Invert Y for correct look
  - Triggers: None

### IA_Jump (Input Action - Boolean)
**Keyboard Mappings:**
- Space Bar

**Controller Mappings to Add:**
- Gamepad Face Button Bottom (Gamepad_FaceButton_Bottom) - A button on Xbox, X on PlayStation
  - Input Type: Digital (Bool)
  - Modifiers: None
  - Triggers: Pressed

## Input Mapping Context: IMC_Weapons

### IA_Shoot (Input Action - Boolean)
**Mouse Mappings:**
- Left Mouse Button

**Controller Mappings to Add:**
- Gamepad Right Trigger (Gamepad_RightTriggerAxis)
  - Input Type: Digital (Bool)
  - Modifiers: None
  - Triggers: Pressed (Threshold: 0.1)

## Additional Recommended Input Actions

### IA_Reload (New Input Action - Boolean)
**Keyboard Mappings:**
- R key

**Controller Mappings:**
- Gamepad Face Button Left (Gamepad_FaceButton_Left) - X button on Xbox, Square on PlayStation
  - Input Type: Digital (Bool)
  - Modifiers: None
  - Triggers: Pressed

### IA_Sprint (New Input Action - Boolean)
**Keyboard Mappings:**
- Left Shift

**Controller Mappings:**
- Gamepad Face Button Right (Gamepad_FaceButton_Right) - B button on Xbox, Circle on PlayStation
  - Input Type: Digital (Bool)
  - Modifiers: None
  - Triggers: Hold

### IA_Menu (New Input Action - Boolean)
**Keyboard Mappings:**
- Escape key

**Controller Mappings:**
- Gamepad Special Right (Gamepad_Special_Right) - Start/Menu button
  - Input Type: Digital (Bool)
  - Modifiers: None
  - Triggers: Pressed

## UI Navigation (For Menu Screens)

### IA_Navigate_Up (Input Action - Boolean)
**Keyboard Mappings:**
- Up Arrow, W key

**Controller Mappings:**
- Gamepad DPad Up (Gamepad_DPad_Up)
- Gamepad Left Stick Y Positive (Gamepad_LeftY with positive threshold)

### IA_Navigate_Down (Input Action - Boolean)
**Keyboard Mappings:**
- Down Arrow, S key

**Controller Mappings:**
- Gamepad DPad Down (Gamepad_DPad_Down)
- Gamepad Left Stick Y Negative (Gamepad_LeftY with negative threshold)

### IA_Navigate_Left (Input Action - Boolean)
**Keyboard Mappings:**
- Left Arrow, A key

**Controller Mappings:**
- Gamepad DPad Left (Gamepad_DPad_Left)
- Gamepad Left Stick X Negative (Gamepad_LeftX with negative threshold)

### IA_Navigate_Right (Input Action - Boolean)
**Keyboard Mappings:**
- Right Arrow, D key

**Controller Mappings:**
- Gamepad DPad Right (Gamepad_DPad_Right)
- Gamepad Left Stick X Positive (Gamepad_LeftX with positive threshold)

### IA_Accept (Input Action - Boolean)
**Keyboard Mappings:**
- Enter key

**Controller Mappings:**
- Gamepad Face Button Bottom (Gamepad_FaceButton_Bottom) - A button

### IA_Cancel (Input Action - Boolean)
**Keyboard Mappings:**
- Escape key

**Controller Mappings:**
- Gamepad Face Button Right (Gamepad_FaceButton_Right) - B button

## Implementation Steps

1. Open Unreal Engine Editor
2. Navigate to Content/FirstPerson/Input/
3. Open IMC_Default Input Mapping Context
4. Add the controller mappings listed above for IA_Move, IA_Look, and IA_Jump
5. Open IMC_Weapons Input Mapping Context  
6. Add the controller mapping for IA_Shoot
7. Create new Input Actions for additional functionality (IA_Reload, IA_Sprint, IA_Menu, etc.)
8. Create new Input Mapping Context for UI navigation if needed
9. Update Character Blueprint to bind new input actions
10. Test with various controllers (Xbox, PlayStation, generic)

## Testing Checklist

- [ ] Left stick controls movement
- [ ] Right stick controls camera look (with inverted Y)
- [ ] A/X button makes character jump
- [ ] Right trigger shoots weapon
- [ ] DPad navigates UI elements
- [ ] Start button opens pause menu
- [ ] All buttons respond correctly across different controller types
- [ ] Dead zones are appropriate (not too sensitive, not too unresponsive)
- [ ] Input feels responsive without lag

## Controller Support Status

✅ Gamepad axis configurations added to DefaultInput.ini
✅ Enhanced Input plugin enabled in project
✅ Input mapping templates documented
⚠️  Input Mapping Contexts need to be updated in Unreal Editor
⚠️  Character Blueprint may need input binding updates
⚠️  UI navigation needs controller support implementation