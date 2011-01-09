/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class MKMapViewInternal;



@interface MKMapView : UIView <NSCoding>
{
    MKMapViewInternal *_internal;
}

@property(readonly) NSArray *overlays;
@property(getter=isHeadingEnabled) BOOL headingEnabled;
@property(retain) CLLocation *predictedUserLocation;
@property NSInteger userLocationSource;
@property(retain) CLLocation *fixedUserLocation;
@property BOOL ignoreLocationUpdates;
@property BOOL liveTrackingAutoSelectZoomLevel;
@property(getter=isUserLocationChangeDone,readonly) BOOL userLocationChangeDone;
@property(retain) MKMapViewPositioningChange *positioningChange;
@property(retain) MKUserLocationView *userLocationView;
@property <MKMapViewDelegate> *delegate;
@property NSUInteger mapType;
@property ? region;
@property ? centerCoordinate;
@property ? visibleMapRect;
@property(getter=isZoomEnabled) BOOL zoomEnabled;
@property(getter=isScrollEnabled) BOOL scrollEnabled;
@property BOOL showsUserLocation;
@property(getter=isUserLocationVisible,readonly) BOOL userLocationVisible;
@property(readonly) NSArray *annotations;
@property(copy) NSArray *selectedAnnotations;
@property(readonly) CGRect annotationVisibleRect;
@property(readonly) MKUserLocation *userLocation;

+ (NSUInteger)minZoomLevel;
+ (void)_handleMemoryWarning:(id)arg1;
+ (double)userLocationCacheDuration;
+ (void)setUserLocationCacheDuration:(double)arg1;
+ (void)initialize;
+ (void)_initializeSafeCategory;

- (id)createViewForOverlay:(id)arg1;
- (void)overlayContainerAddedViews:(id)arg1;
- (void)addOverlay:(id)arg1;
- (void)addOverlays:(id)arg1;
- (void)removeOverlays:(id)arg1;
- (void)insertOverlay:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)exchangeOverlayAtIndex:(NSUInteger)arg1 withOverlayAtIndex:(NSUInteger)arg2;
- (void)insertOverlay:(id)arg1 aboveOverlay:(id)arg2;
- (void)insertOverlay:(id)arg1 belowOverlay:(id)arg2;
- (id)viewForOverlay:(id)arg1;
- (id)overlays;
- (struct CGPoint { float x1; float x2; })centerLongLat;
- (struct { double x1; double x2; })longLatSpan;
- (void)mapTileViewDidStartRendering:(id)arg1;
- (void)mapTileViewDidFinishLoading:(id)arg1;
- (void)_userLocationViewWillDisappear:(id)arg1;
- (void)setMapType:(NSUInteger)arg1;
- (void)_clearEventMode:(NSInteger)arg1;
- (void)set_rotationState:(NSInteger)arg1;
- (void)_notifyMapRotationChange:(id)arg1;
- (BOOL)canRotateForHeading;
- (BOOL)isHeadingEnabled;
- (BOOL)isHeadingSupported;
- (void)setHeadingSupported:(BOOL)arg1;
- (void)setShouldRotateForHeading:(BOOL)arg1;
- (void)pauseUserHeadingUpdates;
- (void)resumeUserHeadingUpdates;
- (void)_setContentAnchorPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)_resetMapAnchorPoint:(BOOL)arg1;
- (struct CGPoint { float x1; float x2; })_anchorWithContentPoint:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })userLocationAnchorPoint;
- (struct CGPoint { float x1; float x2; })visualAnchorPoint;
- (void)_updateMapAnchorPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)_updateMapAnchorCoordinate:(struct { double x1; double x2; })arg1;
- (void)_updateMapAnchorPoint;
- (void)setHeadingTrackingEnabled:(BOOL)arg1;
- (void)disableMapRotation:(BOOL)arg1;
- (void)_startTrackingHeading;
- (void)_stopTrackingHeading;
- (void)_finalizeChange:(id)arg1 rotation:(float)arg2 layer:(id)arg3 type:(NSInteger)arg4;
- (void)_applyHeadingChange:(id)arg1 layer:(id)arg2 annotationViews:(id)arg3 cc:(BOOL)arg4 delegate:(BOOL)arg5 rotationType:(NSInteger)arg6;
- (void)_stopRotationLayer:(id)arg1 annotationViews:(id)arg2;
- (void)_updateAngularVelocityWithAnimation:(id)arg1;
- (void)_updateRotationType:(NSInteger)arg1 change:(id)arg2;
- (void)_resetAnnotationContainerPerspective;
- (void)_updateHeading:(id)arg1 rotationType:(NSInteger)arg2 animated:(BOOL)arg3;
- (void)locationManagerUpdatedHeading:(id)arg1;
- (id)mapInfo;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visibleCenteringRectInView:(id)arg1;
- (struct CGPoint { float x1; float x2; })annotationContainerCenterLongLat:(id)arg1;
- (struct { double x1; double x2; })annotationContainerLongLatSpan:(id)arg1;
- (void)annotationContainer:(id)arg1 annotationView:(id)arg2 calloutAccessoryControlTapped:(id)arg3;
- (void)annotationContainer:(id)arg1 didDeselectAnnotationView:(id)arg2;
- (void)annotationContainerDidAnimateBubble:(id)arg1;
- (void)annotationContainerDidDropPins:(id)arg1;
- (id)userLocation;
- (void)disableHeadingTracking:(BOOL)arg1;
- (float)_zoomLevel;
- (BOOL)_wasScrolling;
- (void)_clearFixedUserLocation;
- (void)enableMapRotationIfNeeded;
- (BOOL)effectsEnabled;
- (void)stopUpdatingUserLocation;
- (BOOL)ignoreLocationUpdates;
- (void)setLiveTrackingEnabled:(BOOL)arg1 shouldZoom:(BOOL)arg2;
- (BOOL)liveTrackingAutoSelectZoomLevel;
- (BOOL)hasUserSpecifiedZoomLevel;
- (void)setPositioningChange:(id)arg1;
- (void)enableLocationConsole;
- (id)descriptionForLocation:(id)arg1 compact:(BOOL)arg2;
- (void)_updateLocationConsole;
- (void)_userLocationViewDidAppear:(id)arg1;
- (void)_ensureLiveTrackingResourcesInitialized;
- (BOOL)_isUserLocationInView:(BOOL)arg1;
- (BOOL)_isLocationCoordinatesInView:(id)arg1;
- (BOOL)_isUserLocationCoordinateInView;
- (BOOL)isBoundedByUserLocation;
- (BOOL)isUserLocationBounded;
- (BOOL)isUserLocationViewCentered;
- (BOOL)isUserPresentationVisible;
- (BOOL)isTrackingUserLocation;
- (id)predictedUserLocation;
- (void)setPredictedUserLocation:(id)arg1;
- (NSInteger)userLocationSource;
- (void)setUserLocationSource:(NSInteger)arg1;
- (struct CGPoint { float x1; float x2; })userPosition;
- (id)fixedUserLocation;
- (void)setFixedUserLocation:(id)arg1;
- (void)_resetPositioningChange;
- (void)resetUserLocation;
- (BOOL)isUserLocationStale;
- (float)_zoomLevelForLocation:(id)arg1 previousLocation:(id)arg2;
- (BOOL)_shouldZoomOnLiveTracking;
- (void)_goToUserLocation:(BOOL)arg1 shouldZoom:(BOOL)arg2;
- (void)goToUserLocation;
- (void)removeUserLocation;
- (void)_scheduleScrollToReCenterUser;
- (void)_cancelScrollToReCenterUser;
- (void)_runPositioningChangeIfNeeded;
- (BOOL)isScrollToUserCenterPending;
- (id)_scrollToReCenterUserTimer;
- (id)_positioningChangeTimer;
- (BOOL)_isUserLocationNearPoint:(struct CGPoint { float x1; float x2; })arg1 hitSize:(float)arg2;
- (void)_goToCurrentLocationOnTransitionEnd;
- (void)userLocationViewAccuracyDidUpdate:(id)arg1;
- (void)userLocationViewDidQuiesce:(id)arg1;
- (float)_zoomLevelForUserLocation:(id)arg1 distanceHysteresis:(BOOL)arg2 positionViewHysteresis:(BOOL)arg3;
- (void)_updatePositioningChangeMetadata:(id)arg1;
- (BOOL)_shouldChangeZoomLevel:(float*)arg1 withChange:(id)arg2;
- (BOOL)_isHovering;
- (BOOL)_isHoverScheduled;
- (BOOL)_isOrWillHover;
- (void)_stopHover;
- (BOOL)_hasHovered;
- (id)_positioningChange:(BOOL)arg1;
- (id)_positioningChangeWithLocation:(id)arg1 source:(NSInteger)arg2 hasFocus:(BOOL)arg3 isUpdated:(BOOL)arg4;
- (void)_startPositioningChange:(id)arg1;
- (BOOL)annotationContainerIsUserLocationChangeDone:(id)arg1;
- (BOOL)_isReadyToRunPositioningChange;
- (BOOL)_haveNewPendingLocation;
- (void)setIgnoreLocationUpdates:(BOOL)arg1;
- (void)_startHoverExpirationTimerWithDuration:(double)arg1 change:(id)arg2;
- (id)_hoverExpirationTimer;
- (void)onMapAddView:(id)arg1 change:(id)arg2;
- (void)_runPositioningChange;
- (void)_updatePositioningChangeMetrics:(id)arg1;
- (BOOL)_deviceIsPluggedIn;
- (void)locationManagerUpdatedLocation:(id)arg1;
- (void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2;
- (void)setRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)set_hoverExpirationTimer:(id)arg1;
- (void)set_positioningChangeTimer:(id)arg1;
- (void)set_scrollToReCenterUserTimer:(id)arg1;
- (void)startUpdatingUserLocation;
- (void)_scheduleRunPositioningChange;
- (void)setLiveTrackingEnabled:(BOOL)arg1;
- (id)userLocationView;
- (BOOL)isCachedUserLocation;
- (BOOL)isRunningPositioningChange;
- (void)_pauseUserLocationUpdates;
- (void)_resumeUserLocationUpdates:(BOOL)arg1;
- (BOOL)isUserLocationChangeDone;
- (void)_cancelRunPositioningChange;
- (void)_scheduleRunPositioningChange:(id)arg1 delay:(double)arg2;
- (void)removeOverlay:(id)arg1;
- (BOOL)shouldRotateForHeading;
- (BOOL)hasUserLocation;
- (BOOL)isHeadingTrackingEnabled;
- (BOOL)isUserLocationVisible;
- (void)disableLiveTracking;
- (void)setHasUserSpecifiedZoomLevel:(BOOL)arg1;
- (void)setLiveTrackingAutoSelectZoomLevel:(BOOL)arg1;
- (BOOL)_isUserLocationNearEventPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)_scheduleScrollToReCenterUserIfNeeded;
- (BOOL)_updateRotationSupported;
- (BOOL)isLiveTrackingEnabled;
- (void)_updateAnnotationContainerPerspective;
- (void)_stopHoverWithChange:(id)arg1;
- (void)_scrollToUserLocation;
- (void)_runPositioningChangeIfNeeded:(id)arg1;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })visibleMapRect;
- (struct { double x1; double x2; })centerCoordinate;
- (id)_initAndEnableLoading:(BOOL)arg1 startGMMSession:(BOOL)arg2;
- (id)initFromIBWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)_annotationViewsAreAddedImmediately;
- (void)set_annotationViewsAreAddedImmediately:(BOOL)arg1;
- (void)_setCalloutViewClass:(Class)arg1;
- (Class)_calloutViewClass;
- (id)_annotationTimer;
- (void)set_annotationTimer:(id)arg1;
- (id)_defaultLocationTimer;
- (void)set_defaultLocationTimer:(id)arg1;
- (id)_hasTrafficRequester;
- (void)set_hasTrafficRequester:(id)arg1;
- (NSInteger)_interfaceOrientation;
- (BOOL)_useGridBackground;
- (void)_updateGridBackground;
- (void)_updateGridBackground:(BOOL)arg1;
- (BOOL)_drawGridBackground;
- (void)set_drawGridBackground:(BOOL)arg1;
- (void)_updateBackgroundFillColor;
- (void)set_drawGridBackground:(BOOL)arg1 force:(BOOL)arg2;
- (BOOL)showsBadge;
- (void)setShowsBadge:(BOOL)arg1;
- (BOOL)pansAndZoomsToRouteOverview;
- (void)setPansAndZoomsToRouteOverview:(BOOL)arg1;
- (BOOL)routeStartStepIsActive;
- (void)setRouteStartStepIsActive:(BOOL)arg1;
- (BOOL)showsPinAtRouteStart;
- (void)setShowsPinAtRouteStart:(BOOL)arg1;
- (BOOL)showsPinAtRouteEnd;
- (void)setShowsPinAtRouteEnd:(BOOL)arg1;
- (BOOL)_canDrawOnMainThread;
- (void)set_canDrawOnMainThread:(BOOL)arg1;
- (void)_setMapType:(NSUInteger)arg1 onInit:(BOOL)arg2;
- (BOOL)isShowingTraffic;
- (void)setShowingTraffic:(BOOL)arg1;
- (BOOL)checksForTraffic;
- (void)setChecksForTraffic:(BOOL)arg1;
- (void)_setAnimationType:(NSInteger)arg1;
- (BOOL)isRouteAnimating;
- (struct CGPoint { float x1; float x2; })_routePositionCenter;
- (BOOL)_needsToPanRoutePositionView;
- (void)setTrafficStatus:(NSInteger)arg1;
- (id)_startIdleTimer;
- (void)set_startIdleTimer:(id)arg1;
- (id)_displayPromiseTimer;
- (void)set_displayPromiseTimer:(id)arg1;
- (BOOL)isLoadingEnabled;
- (void)setLoadingEnabled:(BOOL)arg1;
- (void)_setEventMode:(NSInteger)arg1;
- (BOOL)isRegionChanging;
- (BOOL)_isVisible;
- (BOOL)_isMapRendering;
- (BOOL)_isScrollingAnimation;
- (void)_setScrolling:(BOOL)arg1;
- (void)_setScrolling:(BOOL)arg1 animated:(BOOL)arg2;
- (id)visibleView;
- (struct CGPoint { float x1; float x2; })_centerPoint;
- (struct CGPoint { float x1; float x2; })_centerPointOffset;
- (float)maxZoomLevel;
- (float)_maxZoomLevelForCurrentPosition;
- (NSInteger)_roundedZoomLevel;
- (id)_mapTileView;
- (BOOL)_isHandlingUserEvent;
- (BOOL)_isTrafficVisible;
- (NSInteger)_rotationState;
- (void)set_zoomScale:(float)arg1;
- (void)_setZoomLevel:(float)arg1 duration:(double)arg2;
- (void)_setShowingRoute:(BOOL)arg1 animate:(BOOL)arg2;
- (void)setShowingRoute:(BOOL)arg1 animate:(BOOL)arg2 includingPins:(BOOL)arg3;
- (void)setSearchMode:(NSInteger)arg1;
- (struct { double x1; double x2; })pinDroppingLongLat;
- (BOOL)pansAndZoomsToRouteStep;
- (void)setPansAndZoomsToRouteStep:(BOOL)arg1;
- (void)setCenteringRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)showsUserLocation;
- (void)setShowsUserLocation:(BOOL)arg1;
- (id)_trafficAvailabilityTimer;
- (void)set_trafficAvailabilityTimer:(id)arg1;
- (id)_touchRecepientAnnotationView;
- (void)set_touchRecepientAnnotationView:(id)arg1;
- (id)_savedTouchBegan;
- (void)set_savedTouchBegan:(id)arg1;
- (id)_savedEventBegan;
- (void)set_savedEventBegan:(id)arg1;
- (void)_configureGestureRecognizers;
- (void)_handleLongPressDidEnd;
- (void)handleLongPress:(id)arg1;
- (BOOL)calloutViewContainsPoint:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)calloutViewIsExpanded;
- (void)handleTap:(id)arg1;
- (void)handleDoubleTap:(id)arg1;
- (void)handleTwoFingerTap:(id)arg1;
- (BOOL)_shouldHandleTouchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)_scrollViewTouchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)_scrollViewTouchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)_scrollViewTouchesEnded:(id)arg1 withEvent:(id)arg2 cancelled:(BOOL)arg3;
- (void)_scrollViewTouchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_scrollViewTouchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)_willChangeRegionAnimated:(BOOL)arg1 userInitiated:(BOOL)arg2;
- (void)_didChangeRegionMidstream:(BOOL)arg1 centerPoint:(struct { double x1; double x2; })arg2;
- (void)_didChangeRegionMidstream:(BOOL)arg1;
- (void)_willStartZoom:(BOOL)arg1;
- (void)_didEndZoom;
- (void)_willStartScroll:(BOOL)arg1;
- (void)_didEndScroll;
- (void)_willStartUserInteraction;
- (void)_didEndUserInteraction;
- (void)_handleThermalCondition;
- (void)_startThermalHandling;
- (void)_stopThermalHandling;
- (float)_maxZoomLevelForCoordinate:(struct { double x1; double x2; })arg1;
- (float)_boundedZoomLevel:(float)arg1;
- (float)_boundedZoomLevel:(float)arg1 longLat:(struct CGPoint { float x1; float x2; })arg2;
- (float)_boundedZoomLevel:(float)arg1 coordinate:(struct { double x1; double x2; })arg2;
- (float)_boundedZoomLevelUsingCurrentPosition:(float)arg1;
- (void)_updateTraffic;
- (void)_resetRouteLoader;
- (void)_updateTrafficAvailable;
- (void)_scheduleCheckTrafficAvailable;
- (void)_updateScrollingAndGestures;
- (BOOL)_animationTypeIgnoresEvents:(NSInteger)arg1;
- (void)_switchToAnimationType:(NSInteger)arg1;
- (void)_updateRouteView;
- (void)_updateRoutePositionView;
- (void)_updateRoutePosition;
- (void)_updateAccessories;
- (void)_updateAnnotationContainerView;
- (void)_updateTrafficDisplay;
- (void)_updateShouldDisplayEffects;
- (void)_adjustPositionViewWithPreviousScrollerOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)_scheduleStartIdle;
- (void)_cancelStartIdle;
- (void)_startIdle;
- (void)_stopIdle;
- (void)_updateIdle;
- (struct CGPoint { float x1; float x2; })_scrollViewOffsetForOffset:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })_scrollViewOffsetForPoint:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })_scrollViewCenterForCenterPoint:(struct CGPoint { float x1; float x2; })arg1 zoomScale:(float)arg2;
- (struct CGPoint { float x1; float x2; })_scrollViewCenterForCenterMapPoint:(struct { double x1; double x2; })arg1 zoomScale:(float)arg2;
- (struct CGPoint { float x1; float x2; })_scrollViewOffsetForCenterPoint:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })_scrollViewOffsetForCenterCoordinate:(struct { double x1; double x2; })arg1;
- (struct CGPoint { float x1; float x2; })_scrollViewOffsetForCenterMapPoint:(struct { double x1; double x2; })arg1;
- (void)_setScrollViewOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)_setScrollViewCenterMapPoint:(struct { double x1; double x2; })arg1;
- (void)_processDisplayPromise;
- (void)_removeDisplayPromises;
- (void)_scheduleDisplayPromise:(id)arg1;
- (void)_setZoomScale:(float)arg1 centerCoordinate:(struct { double x1; double x2; })arg2 duration:(double)arg3 animationType:(NSInteger)arg4;
- (void)_setZoomScale:(float)arg1 centerMapPoint:(struct { double x1; double x2; })arg2 duration:(double)arg3 animationType:(NSInteger)arg4;
- (BOOL)annotationContainerEffectsEnabled:(id)arg1;
- (BOOL)annotationContainerIsRotated:(id)arg1;
- (void)startEffects;
- (void)stopEffects;
- (void)stopIdle:(BOOL)arg1;
- (void)stopIdle;
- (void)_cancelAccessories;
- (void)_cancelDoubleTap;
- (void)_cancelAccessoriesAndDoubleTap;
- (id)_stringWithEventMode:(NSInteger)arg1;
- (void)_didDisplayMapAtCoordinate:(struct { double x1; double x2; })arg1 zoomLevel:(NSUInteger)arg2 size:(struct CGSize { float x1; float x2; })arg3;
- (void)_didLoadOrMoveMap;
- (BOOL)callsDelegateForAllRegionChanges;
- (void)setCallsDelegateForAllRegionChanges:(BOOL)arg1;
- (BOOL)_animateScrollToOffset:(struct CGPoint { float x1; float x2; })arg1 duration:(double)arg2 type:(NSInteger)arg3;
- (BOOL)_shouldConservePowerAnimationType:(NSInteger)arg1;
- (BOOL)_animateScrollToOffset:(struct CGPoint { float x1; float x2; })arg1 duration:(double)arg2 type:(NSInteger)arg3 context:(id)arg4;
- (void)_fixUserLocationFromPresentationValue;
- (void)_synchronizeScrollingAnimation:(BOOL)arg1 includePositionView:(BOOL)arg2;
- (void)_freezeScrollingAnimation;
- (void)_removeScrollingAnimation;
- (void)_cancelScrollingAnimation;
- (void)scrollWithOffset:(struct CGPoint { float x1; float x2; })arg1 andAnimationType:(NSInteger)arg2;
- (float)pointDistanceFromCoordinate:(struct { double x1; double x2; })arg1 toCoordinate:(struct { double x1; double x2; })arg2;
- (void)_freezeUserLocationView;
- (void)_updateBadge;
- (NSInteger)_viewIndexForSubview:(id)arg1;
- (void)_insertSubview:(id)arg1;
- (void)_goToDefaultLocation;
- (void)_updateContentBounds;
- (NSInteger)_zoomLevelsForMapType:(NSUInteger)arg1;
- (NSInteger)_minZoomLevelForMapType:(NSUInteger)arg1;
- (NSInteger)_maxZoomLevelForMapType:(NSUInteger)arg1;
- (double)_panDurationFromPoint:(struct CGPoint { float x1; float x2; })arg1 toPoint:(struct CGPoint { float x1; float x2; })arg2 forRoute:(BOOL)arg3;
- (float)_zoomLevelForCenterCoordinate:(struct { double x1; double x2; })arg1 topLeftCoordinate:(struct { double x1; double x2; })arg2 bottomRightCoordinate:(struct { double x1; double x2; })arg3 includeAccessoryPadding:(BOOL)arg4;
- (float)_zoomLevelForRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 includeAccessoryPadding:(BOOL)arg2;
- (BOOL)goToCenterCoordinate:(struct { double x1; double x2; })arg1 zoomLevel:(float)arg2 animationType:(NSInteger)arg3;
- (BOOL)goToCenterCoordinate:(struct { double x1; double x2; })arg1 longLatSpan:(struct CGSize { float x1; float x2; })arg2 animationType:(NSInteger)arg3;
- (double)_goToCenterCoordinate:(struct { double x1; double x2; })arg1 zoomLevel:(float)arg2 animationType:(NSInteger)arg3;
- (void)_resumeSearchResultProcessingAndPinDropAnimations;
- (void)_suspendSearchResultsProcessingAndPinDropAnimations;
- (struct { double x1; double x2; })_zoomCenterPointWithAnchor:(NSInteger)arg1 point:(struct CGPoint { float x1; float x2; })arg2 zoomScale:(float)arg3;
- (void)pauseUserLocationUpdates;
- (void)resumeUserLocationUpdates;
- (void)_notifyWillPanRoutePositionWithDuration:(double)arg1;
- (void)_animateRoutePositionViewPan;
- (void)_cleanupAfterRVBAnimation:(BOOL)arg1;
- (void)_selectUserLocationTypeWithDeltaZoomLevel:(float)arg1;
- (void)_zoomToNextLevel:(NSInteger)arg1 tapCentroid:(struct CGPoint { float x1; float x2; })arg2;
- (void)_userScrollingEnded;
- (void)_updateCenteredAttributesWithCoordinate:(struct { double x1; double x2; })arg1;
- (void)_updateMaximumZoomScale;
- (void)_updateRotationAttributes:(struct { double x1; double x2; })arg1;
- (void)_sizeWillChange;
- (void)_sizeDidChangeWithCenterCoordinate:(struct { double x1; double x2; })arg1;
- (void)_willShowRoute;
- (void)_didShowRoute;
- (void)_willHideRoute;
- (void)_didHideRoute;
- (void)updateBubblePinInVisibleRect;
- (void)_showAddedAnnotationsAndRouteAnimated:(BOOL)arg1;
- (void)_showAddedAnnotationsAnimated:(BOOL)arg1;
- (void)dropPinsForSearchResults:(id)arg1 animate:(BOOL)arg2;
- (void)dropPinsForSearchResults:(id)arg1 selectedSearchResult:(id)arg2 animate:(BOOL)arg3;
- (void)dropCustomPinForSearchResult:(id)arg1 animate:(BOOL)arg2;
- (void)goToBookmark:(id)arg1;
- (NSUInteger)_visibleSearchResultsCount:(id)arg1 forZoomLevel:(NSInteger)arg2 returnVisibleSearchResults:(id)arg3;
- (void)dropPinsForRouteFromSearchResult:(id)arg1 toSearchResult:(id)arg2 animate:(BOOL)arg3;
- (struct { NSInteger x1; struct { double x_2_1_1; double x_2_1_2; } x2; })_zoomRegionForStep:(id)arg1 inRoute:(id)arg2;
- (void)goToRouteStepAnimated:(BOOL)arg1;
- (void)updateTiling;
- (void)centerSelectedPinInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (NSInteger)goToSearchResults:(id)arg1 centerLongLat:(struct CGPoint { float x1; float x2; })arg2 longLatSpan:(struct CGSize { float x1; float x2; })arg3;
- (void)dropPinsForSearchResults:(id)arg1 centerLongLat:(struct CGPoint { float x1; float x2; })arg2 longLatSpan:(struct CGSize { float x1; float x2; })arg3 selectedSearchResult:(id)arg4 selectedSearchResultReturn:(id*)arg5 animate:(BOOL)arg6;
- (void)mapTileViewDidChangeZoomScale:(id)arg1;
- (void)mapTileViewDidFinishRendering:(id)arg1;
- (void)mapTileViewDidStartLoading:(id)arg1;
- (void)mapTileViewDidFailLoading:(id)arg1 withError:(id)arg2;
- (void)routeLoaderDidStartLoading:(id)arg1;
- (void)routeLoaderDidStopLoading:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visibleRectInView:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })annotationVisibleRect;
- (BOOL)annotationContainerDidScrollOrZoom:(id)arg1;
- (void)annotationContainer:(id)arg1 scrollToRevealCalloutWithOffset:(struct CGPoint { float x1; float x2; })arg2;
- (void)annotationContainerWillAnimateBubble:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })annotationContainerVisibleRect:(id)arg1;
- (struct CGPoint { float x1; float x2; })visiblePointForPoint:(struct CGPoint { float x1; float x2; })arg1 inAnnotationContainer:(id)arg2;
- (struct CGPoint { float x1; float x2; })pointInAnnotationContainer:(id)arg1 forVisiblePoint:(struct CGPoint { float x1; float x2; })arg2;
- (void)annotationContainerWillDropPins:(id)arg1;
- (void)annotationContainer:(id)arg1 didSelectSearchResult:(id)arg2 userInitiated:(BOOL)arg3;
- (id)annotationContainer:(id)arg1 viewForAnnotation:(id)arg2;
- (void)annotationContainer:(id)arg1 didAddAnnotationViews:(id)arg2;
- (void)annotationContainer:(id)arg1 didSelectAnnotationView:(id)arg2;
- (void)_layoutScrollViewSubviews:(id)arg1;
- (void)_scrollView:(id)arg1 willHandlePinch:(id)arg2;
- (void)setCenterCoordinate:(struct { double x1; double x2; })arg1 animated:(BOOL)arg2;
- (void)setCenterCoordinate:(struct { double x1; double x2; })arg1;
- (struct { double x1; double x2; })_centerMapPoint;
- (void)setRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 animated:(BOOL)arg2;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })regionThatFits:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (BOOL)goToRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 animationType:(NSInteger)arg2;
- (void)setSelectedAnnotations:(id)arg1;
- (struct { double x1; double x2; })convertPoint:(struct CGPoint { float x1; float x2; })arg1 toCoordinateFromView:(id)arg2;
- (void)selectAnnotation:(id)arg1 animated:(BOOL)arg2;
- (BOOL)recalculatesRouteStepZoomLevels;
- (void)setRecalculatesRouteStepZoomLevels:(BOOL)arg1;
- (struct { NSInteger x1; struct { double x_2_1_1; double x_2_1_2; } x2; })_zoomRegionForMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 edgePadding:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg2 maxZoomLevel:(NSInteger)arg3 minZoomLevel:(NSInteger)arg4;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })mapRectThatFits:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 edgePadding:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg2;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })mapRectThatFits:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setVisibleMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setVisibleMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 animated:(BOOL)arg2;
- (float)minZoomLevel;
- (void)_handleMemoryWarning:(id)arg1;
- (void)startIdle;
- (id)overlayContainer;
- (id)positioningChange;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })centeringRect;
- (NSUInteger)mapType;
- (NSInteger)animationType;
- (NSInteger)trafficStatus;
- (id)annotationContainer;
- (void)locationManagerDidReset:(id)arg1;
- (void)locationManagerFailedToUpdateHeading:(id)arg1 withError:(id)arg2;
- (void)setSuspended:(BOOL)arg1;
- (id)selectedAnnotations;
- (void)deselectAnnotation:(id)arg1 animated:(BOOL)arg2;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })region;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 toRectToView:(id)arg2;
- (id)dequeueReusableAnnotationViewWithIdentifier:(id)arg1;
- (id)viewForAnnotation:(id)arg1;
- (void)setVisibleMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 edgePadding:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg2 animated:(BOOL)arg3;
- (id)annotations;
- (void)addAnnotations:(id)arg1;
- (void)removeAnnotations:(id)arg1;
- (void)removeAnnotation:(id)arg1;
- (struct CGPoint { float x1; float x2; })convertCoordinate:(struct { double x1; double x2; })arg1 toPointToView:(id)arg2;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 toRegionFromView:(id)arg2;
- (void)setHeadingEnabled:(BOOL)arg1;
- (id)awakeAfterUsingCoder:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (BOOL)isZoomEnabled;
- (float)_zoomScale;
- (void)scrollViewDidZoom:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentBounds;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(float)arg3;
- (void)animationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (BOOL)scrollViewShouldScrollToTop:(id)arg1;
- (void)setScrollEnabled:(BOOL)arg1;
- (void)setZoomEnabled:(BOOL)arg1;
- (BOOL)isZooming;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)layoutSubviews;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isScrollEnabled;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)applicationWillTerminate:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (BOOL)isScrolling;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)addAnnotation:(id)arg1;
- (void)_reachabilityChanged:(id)arg1;

@end
