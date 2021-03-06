static const char *lqtL_getQEventMetaType(const QEvent* event) {

    switch(event->type()) {
        case QEvent::None:  //Not an event.
            return "QEvent*";
        case QEvent::ActionAdded:   //A new action has been added (QActionEvent).
            return "QActionEvent*";
        case QEvent::ActionChanged: //An action has been changed (QActionEvent).
            return "QActionEvent*";
        case QEvent::ActionRemoved: //An action has been removed (QActionEvent).
            return "QActionEvent*";
        case QEvent::ActivationChange:  //A widget's top-level window activation state has changed.
            return "QEvent*";
        // case QEvent::ApplicationActivate:   //This enum has been deprecated. Use ApplicationStateChange instead.
        //     return "QEvent*";
        case QEvent::ApplicationActivated:  //This enum has been deprecated. Use ApplicationStateChange instead.
            return "QEvent*";
        case QEvent::ApplicationDeactivate: //This enum has been deprecated. Use ApplicationStateChange instead.
            return "QEvent*";
        case QEvent::ApplicationFontChange: //The default application font has changed.
            return "QEvent*";
        case QEvent::ApplicationLayoutDirectionChange:  //The default application layout direction has changed.
            return "QEvent*";
        case QEvent::ApplicationPaletteChange:  //The default application palette has changed.
            return "QEvent*";
        case QEvent::ApplicationStateChange:    //The state of the application has changed.
            return "QApplicationStateChangeEvent*";
        case QEvent::ApplicationWindowIconChange:   //The application's icon has changed.
            return "QEvent*";
        case QEvent::ChildAdded:    //An object gets a child (QChildEvent).
            return "QChildEvent*";
        case QEvent::ChildPolished: //A widget child gets polished (QChildEvent).
            return "QChildEvent*";
        case QEvent::ChildRemoved:  //An object loses a child (QChildEvent).
            return "QChildEvent*";
        case QEvent::Clipboard: //The clipboard contents have changed.
            return "QEvent*";
        case QEvent::Close: //Widget was closed (QCloseEvent).
            return "QCloseEvent*";
        case QEvent::CloseSoftwareInputPanel:   //A widget wants to close the software input panel (SIP).
            return "QEvent*";
        case QEvent::ContentsRectChange:    //The margins of the widget's content rect changed.
            return "QEvent*";
        case QEvent::ContextMenu:   //Context popup menu (QContextMenuEvent).
            return "QContextMenuEvent*";
        case QEvent::CursorChange:  //The widget's cursor has changed.
            return "QEvent*";
        case QEvent::DeferredDelete:    //The object will be deleted after it has cleaned up (QDeferredDeleteEvent)
            return "QDeferredDeleteEvent*";
        case QEvent::DragEnter: //The cursor enters a widget during a drag and drop operation (QDragEnterEvent).
            return "QDragEnterEvent*";
        case QEvent::DragLeave: //The cursor leaves a widget during a drag and drop operation (QDragLeaveEvent).
            return "QDragLeaveEvent*";
        case QEvent::DragMove:  //A drag and drop operation is in progress (QDragMoveEvent).
            return "QDragMoveEvent*";
        case QEvent::Drop:  //A drag and drop operation is completed (QDropEvent).
            return "QDropEvent*";
        case QEvent::DynamicPropertyChange: //A dynamic property was added, changed, or removed from the object.
            return "QEvent*";
        case QEvent::EnabledChange: //Widget's enabled state has changed.
            return "QEvent*";
        case QEvent::Enter: //Mouse enters widget's boundaries (QEnterEvent).
            return "QEnterEvent*";
        // case QEvent::EnterEditFocus:    //An editor widget gains focus for editing. QT_KEYPAD_NAVIGATION must be defined.
        //     return "QEvent*";
        case QEvent::EnterWhatsThisMode:    //Send to toplevel widgets when the application enters "What's This?" mode.
            return "QEvent*";
        case QEvent::Expose:    //Sent to a window when its on-screen contents are invalidated and need to be flushed from the backing store.
            return "QEvent*";
        case QEvent::FileOpen:  //File open request (QFileOpenEvent).
            return "QFileOpenEvent*";
        case QEvent::FocusIn:   //Widget or Window gains keyboard focus (QFocusEvent).
            return "QFocusEvent*";
        case QEvent::FocusOut:  //Widget or Window loses keyboard focus (QFocusEvent).
            return "QFocusEvent*";
        case QEvent::FocusAboutToChange:    //Widget or Window focus is about to change (QFocusEvent)
            return "QFocusEvent*";
        case QEvent::FontChange:    //Widget's font has changed.
            return "QEvent*";
        case QEvent::Gesture:   //A gesture was triggered (QGestureEvent).
            return "QGestureEvent*";
        case QEvent::GestureOverride:   //A gesture override was triggered (QGestureEvent).
            return "QGestureEvent*";
        case QEvent::GrabKeyboard:  //Item gains keyboard grab (QGraphicsItem only).
            return "QGraphicsItem*";
        case QEvent::GrabMouse: //Item gains mouse grab (QGraphicsItem only).
            return "QGraphicsItem*";
        case QEvent::GraphicsSceneContextMenu:  //Context popup menu over a graphics scene (QGraphicsSceneContextMenuEvent).
            return "QGraphicsSceneContextMenuEvent*";
        case QEvent::GraphicsSceneDragEnter:    //The cursor enters a graphics scene during a drag and drop operation (QGraphicsSceneDragDropEvent).
            return "QGraphicsSceneDragDropEvent*";
        case QEvent::GraphicsSceneDragLeave:    //The cursor leaves a graphics scene during a drag and drop operation (QGraphicsSceneDragDropEvent).
            return "QGraphicsSceneDragDropEvent*";
        case QEvent::GraphicsSceneDragMove: //A drag and drop operation is in progress over a scene (QGraphicsSceneDragDropEvent).
            return "QGraphicsSceneDragDropEvent*";
        case QEvent::GraphicsSceneDrop: //A drag and drop operation is completed over a scene (QGraphicsSceneDragDropEvent).
            return "QGraphicsSceneDragDropEvent*";
        case QEvent::GraphicsSceneHelp: //The user requests help for a graphics scene (QHelpEvent).
            return "QHelpEvent*";
        case QEvent::GraphicsSceneHoverEnter:   //The mouse cursor enters a hover item in a graphics scene (QGraphicsSceneHoverEvent).
            return "QGraphicsSceneHoverEvent*";
        case QEvent::GraphicsSceneHoverLeave:   //The mouse cursor leaves a hover item in a graphics scene (QGraphicsSceneHoverEvent).
            return "QGraphicsSceneHoverEvent*";
        case QEvent::GraphicsSceneHoverMove:    //The mouse cursor moves inside a hover item in a graphics scene (QGraphicsSceneHoverEvent).
            return "QGraphicsSceneHoverEvent*";
        case QEvent::GraphicsSceneMouseDoubleClick: //Mouse press again (double click) in a graphics scene (QGraphicsSceneMouseEvent).
            return "QGraphicsSceneMouseEvent*";
        case QEvent::GraphicsSceneMouseMove:    //Move mouse in a graphics scene (QGraphicsSceneMouseEvent).
            return "QGraphicsSceneMouseEvent*";
        case QEvent::GraphicsSceneMousePress:   //Mouse press in a graphics scene (QGraphicsSceneMouseEvent).
            return "QGraphicsSceneMouseEvent*";
        case QEvent::GraphicsSceneMouseRelease: //Mouse release in a graphics scene (QGraphicsSceneMouseEvent).
            return "QGraphicsSceneMouseEvent*";
        case QEvent::GraphicsSceneMove: //Widget was moved (QGraphicsSceneMoveEvent).
            return "QGraphicsSceneMoveEvent*";
        case QEvent::GraphicsSceneResize:   //Widget was resized (QGraphicsSceneResizeEvent).
            return "QGraphicsSceneResizeEvent*";
        case QEvent::GraphicsSceneWheel:    //Mouse wheel rolled in a graphics scene (QGraphicsSceneWheelEvent).
            return "QGraphicsSceneWheelEvent*";
        case QEvent::Hide:  //Widget was hidden (QHideEvent).
            return "QHideEvent*";
        case QEvent::HideToParent:  //A child widget has been hidden.
            return "QEvent*";
        case QEvent::HoverEnter:    //The mouse cursor enters a hover widget (QHoverEvent).
            return "QHoverEvent*";
        case QEvent::HoverLeave:    //The mouse cursor leaves a hover widget (QHoverEvent).
            return "QHoverEvent*";
        case QEvent::HoverMove: //The mouse cursor moves inside a hover widget (QHoverEvent).
            return "QHoverEvent*";
        case QEvent::IconDrag:  //The main icon of a window has been dragged away (QIconDragEvent).
            return "QIconDragEvent*";
        case QEvent::IconTextChange:    //Widget's icon text has been changed. (Deprecated)
            return "QEvent*";
        case QEvent::InputMethod:   //An input method is being used (QInputMethodEvent).
            return "QInputMethodEvent*";
        case QEvent::InputMethodQuery:  //A input method query event (QInputMethodQueryEvent)
            return "QInputMethodQueryEvent*";
        case QEvent::KeyboardLayoutChange:  //The keyboard layout has changed.
            return "QEvent*";
        case QEvent::KeyPress:  //Key press (QKeyEvent).
            return "QKeyEvent*";
        case QEvent::KeyRelease:    //Key release (QKeyEvent).
            return "QKeyEvent*";
        case QEvent::LanguageChange:    //The application translation changed.
            return "QEvent*";
        case QEvent::LayoutDirectionChange: //The direction of layouts changed.
            return "QEvent*";
        case QEvent::LayoutRequest: //Widget layout needs to be redone.
            return "QEvent*";
        case QEvent::Leave: //Mouse leaves widget's boundaries.
            return "QEvent*";
        // case QEvent::LeaveEditFocus:    //An editor widget loses focus for editing. QT_KEYPAD_NAVIGATION must be defined.
        //     return "QEvent*";
        case QEvent::LeaveWhatsThisMode:    //Send to toplevel widgets when the application leaves "What's This?" mode.
            return "QEvent*";
        case QEvent::LocaleChange:  //The system locale has changed.
            return "QEvent*";
        case QEvent::NonClientAreaMouseButtonDblClick:  //A mouse double click occurred outside the client area (QMouseEvent).
            return "QMouseEvent*";
        case QEvent::NonClientAreaMouseButtonPress: //A mouse button press occurred outside the client area (QMouseEvent).
            return "QMouseEvent*";
        case QEvent::NonClientAreaMouseButtonRelease:   //A mouse button release occurred outside the client area (QMouseEvent).
            return "QMouseEvent*";
        case QEvent::NonClientAreaMouseMove:    //A mouse move occurred outside the client area (QMouseEvent).
            return "QMouseEvent*";
        case QEvent::MacSizeChange: //The user changed his widget sizes (macOS only).
            return "QEvent*";
        case QEvent::MetaCall:  //An asynchronous method invocation via QMetaObject::invokeMethod().
            return "QEvent*";
        case QEvent::ModifiedChange:    //Widgets modification state has been changed.
            return "QEvent*";
        case QEvent::MouseButtonDblClick:   //Mouse press again (QMouseEvent).
            return "QMouseEvent*";
        case QEvent::MouseButtonPress:  //Mouse press (QMouseEvent).
            return "QMouseEvent*";
        case QEvent::MouseButtonRelease:    //Mouse release (QMouseEvent).
            return "QMouseEvent*";
        case QEvent::MouseMove: //Mouse move (QMouseEvent).
            return "QMouseEvent*";
        case QEvent::MouseTrackingChange:   //The mouse tracking state has changed.
            return "QEvent*";
        case QEvent::Move:  //Widget's position changed (QMoveEvent).
            return "QMoveEvent*";
        case QEvent::NativeGesture: //The system has detected a gesture (QNativeGestureEvent).
            return "QNativeGestureEvent*";
        case QEvent::OrientationChange: //The screens orientation has changes (QScreenOrientationChangeEvent).
            return "QScreenOrientationChangeEvent*";
        case QEvent::Paint: //Screen update necessary (QPaintEvent).
            return "QPaintEvent*";
        case QEvent::PaletteChange: //Palette of the widget changed.
            return "QEvent*";
        case QEvent::ParentAboutToChange:   //The widget parent is about to change.
            return "QEvent*";
        case QEvent::ParentChange:  //The widget parent has changed.
            return "QEvent*";
        case QEvent::PlatformPanel: //A platform specific panel has been requested.
            return "QEvent*";
        case QEvent::PlatformSurface:   //A native platform surface has been created or is about to be destroyed (QPlatformSurfaceEvent).
            return "QPlatformSurfaceEvent*";
        case QEvent::Polish:    //The widget is polished.
            return "QEvent*";
        case QEvent::PolishRequest: //The widget should be polished.
            return "QEvent*";
        case QEvent::QueryWhatsThis:    //The widget should accept the event if it has "What's This?" help (QHelpEvent).
            return "QHelpEvent*";
        case QEvent::ReadOnlyChange:    //Widget's read-only state has changed (since Qt 5.4).
            return "QEvent*";
        case QEvent::RequestSoftwareInputPanel: //A widget wants to open a software input panel (SIP).
            return "QEvent*";
        case QEvent::Resize:    //Widget's size changed (QResizeEvent).
            return "QResizeEvent*";
        case QEvent::ScrollPrepare: //The object needs to fill in its geometry information (QScrollPrepareEvent).
            return "QScrollPrepareEvent*";
        case QEvent::Scroll:    //The object needs to scroll to the supplied position (QScrollEvent).
            return "QScrollEvent*";
        case QEvent::Shortcut:  //Key press in child for shortcut key handling (QShortcutEvent).
            return "QShortcutEvent*";
        case QEvent::ShortcutOverride:  //Key press in child, for overriding shortcut key handling (QKeyEvent). When a shortcut is about to trigger, ShortcutOverride is sent to the active window. This allows clients (e.g. widgets) to signal that they will handle the shortcut themselves, by accepting the event. If the shortcut override is accepted, the event is delivered as a normal key press to the focus widget. Otherwise, it triggers the shortcut action, if one exists.
            return "QKeyEvent*";
        case QEvent::Show:  //Widget was shown on screen (QShowEvent).
            return "QShowEvent*";
        case QEvent::ShowToParent:  //A child widget has been shown.
            return "QEvent*";
        case QEvent::SockAct:   //Socket activated, used to implement QSocketNotifier.
            return "QEvent*";
        case QEvent::StateMachineSignal:    //A signal delivered to a state machine (QStateMachine::SignalEvent).
            return "QStateMachine_LQT_SignalEvent*";
        case QEvent::StateMachineWrapped:   //The event is a wrapper for, i.e., contains, another event (QStateMachine::WrappedEvent).
            return "QStateMachine_LQT_WrappedEvent*";
        case QEvent::StatusTip: //A status tip is requested (QStatusTipEvent).
            return "QStatusTipEvent*";
        case QEvent::StyleChange:   //Widget's style has been changed.
            return "QEvent*";
        case QEvent::TabletMove:    //Wacom tablet move (QTabletEvent).
            return "QTabletEvent*";
        case QEvent::TabletPress:   //Wacom tablet press (QTabletEvent).
            return "QTabletEvent*";
        case QEvent::TabletRelease: //Wacom tablet release (QTabletEvent).
            return "QTabletEvent*";
        case QEvent::TabletEnterProximity:  //Wacom tablet enter proximity event (QTabletEvent), sent to QApplication.
            return "QTabletEvent*";
        case QEvent::TabletLeaveProximity:  //Wacom tablet leave proximity event (QTabletEvent), sent to QApplication.
            return "QTabletEvent*";
        case QEvent::TabletTrackingChange:  //The Wacom tablet tracking state has changed (since Qt 5.9).
            return "QTabletEvent*";
        case QEvent::ThreadChange:  //The object is moved to another thread. This is the last event sent to this object in the previous thread. See QObject::moveToThread().
            return "QEvent*";
        case QEvent::Timer: //Regular timer events (QTimerEvent).
            return "QTimerEvent*";
        case QEvent::ToolBarChange: //The toolbar button is toggled on macOS.
            return "QEvent*";
        case QEvent::ToolTip:   //A tooltip was requested (QHelpEvent).
            return "QHelpEvent*";
        case QEvent::ToolTipChange: //The widget's tooltip has changed.
            return "QEvent*";
        case QEvent::TouchBegin:    //Beginning of a sequence of touch-screen or track-pad events (QTouchEvent).
            return "QTouchEvent*";
        case QEvent::TouchCancel:   //Cancellation of touch-event sequence (QTouchEvent).
            return "QTouchEvent*";
        case QEvent::TouchEnd:  //End of touch-event sequence (QTouchEvent).
            return "QTouchEvent*";
        case QEvent::TouchUpdate:   //Touch-screen event (QTouchEvent).
            return "QTouchEvent*";
        case QEvent::UngrabKeyboard:    //Item loses keyboard grab (QGraphicsItem only).
            return "QEvent*";
        case QEvent::UngrabMouse:   //Item loses mouse grab (QGraphicsItem, QQuickItem).
            return "QEvent*";
        case QEvent::UpdateLater:   //The widget should be queued to be repainted at a later time.
            return "QEvent*";
        case QEvent::UpdateRequest: //The widget should be repainted.
            return "QEvent*";
        case QEvent::WhatsThis: //The widget should reveal "What's This?" help (QHelpEvent).
            return "QHelpEvent*";
        case QEvent::WhatsThisClicked:  //A link in a widget's "What's This?" help was clicked.
            return "QEvent*";
        case QEvent::Wheel: //Mouse wheel rolled (QWheelEvent).
            return "QWheelEvent*";
        case QEvent::WinEventAct:   //A Windows-specific activation event has occurred.
            return "QEvent*";
        case QEvent::WindowActivate:    //Window was activated.
            return "QEvent*";
        case QEvent::WindowBlocked: //The window is blocked by a modal dialog.
            return "QEvent*";
        case QEvent::WindowDeactivate:  //Window was deactivated.
            return "QEvent*";
        case QEvent::WindowIconChange:  //The window's icon has changed.
            return "QEvent*";
        case QEvent::WindowStateChange: //The window's state (minimized, maximized or full-screen) has changed (QWindowStateChangeEvent).
            return "QWindowStateChangeEvent*";
        case QEvent::WindowTitleChange: //The window title has changed.
            return "QEvent*";
        case QEvent::WindowUnblocked:   //The window is unblocked after a modal dialog exited.
            return "QEvent*";
        case QEvent::WinIdChange:   //The window system identifer for this native widget has changed.
            return "QEvent*";
        case QEvent::ZOrderChange:  //The widget's z-order has changed. This event is never sent to top level windows.
            return "QEvent*";
        default:
            return "QEvent*";
    }
}
