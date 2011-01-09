/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class WebThreadCaller, CALayer;



@interface TileHostLayer : CALayer 
{

  /* Error parsing encoded ivar type info: ^{TileCache={RetainPtr<CALayer>="m_ptr"@"CALayer"}@"WAKWindow"{RetainPtr<WebThreadCaller>="m_ptr"@"WebThreadCaller"}ii@"NSString"{IntPoint="m_x"i"m_y"i}{IntSize="m_width"i"m_height"i}BB{HashMap<WebCore::TileCache::TileIndex,WTF::RefPtr<WebCore::TileCache::Tile>,WebCore::TileCache::TileIndexHash,WebCore::TileCache::TileIndexHashTraits,WTF::HashTraits<WTF::RefPtr<WebCore::TileCache::Tile> > >="m_impl"{HashTable<WebCore::TileCache::TileIndex,std::pair<WebCore::TileCache::TileIndex, WTF::RefPtr<WebCore::TileCache::Tile> >,WTF::PairFirstExtractor<std::pair<WebCore::TileCache::TileIndex, WTF::RefPtr<WebCore::TileCache::Tile> > >,WebCore::TileCache::TileIndexHash,WTF::PairHashTraits<WebCore::TileCache::TileIndexHashTraits, WTF::HashTraits<WTF::RefPtr<WebCore::TileCache::Tile> > >,WebCore::TileCache::TileIndexHashTraits>="m_table"^{pair<WebCore::TileCache::TileIndex,WTF::RefPtr<WebCore::TileCache::Tile> >}"m_tableSize"i"m_tableSizeMask"i"m_keyCount"i"m_deletedCount"i}}{Timer<WebCore::TileCache>="_vptr$TimerBase"^^?"m_nextFireTime"d"m_repeatInterval"d"m_heapIndex"i"m_heapInsertionOrder"I"m_object"^{TileCache}"m_function"{?="__pfn"^"__delta"i}}{Vector<WebCore::IntRect,0ul>="m_size"I"m_buffer"{VectorBuffer<WebCore::IntRect,0ul>="m_buffer"^{IntRect}"m_capacity"I}}{Mutex="m_mutex"{_opaque_pthread_mutex_t="__sig"l"__opaque"[40c]}}{Mutex="m_mutex"{_opaque_pthread_mutex_t="__sig"l"__opaque"[40c]}}} */
    struct TileCache { struct RetainPtr<CALayer> { 
            CALayer *m_ptr; 
        } x1; id x2; /* Warning: Unrecognized filer type: '"' using 'void*' */ void*x3; void*x4; void*x5; void*x6; void*x7; NSInteger x8; in double x9; out void*x10; void*x11; struct RetainPtr<WebThreadCaller> { 
            WebThreadCaller *m_ptr; 
        } x12; NSInteger x13; NSInteger x14; id x15; void*x16; inout unsigned short x17; unsigned short x18; void*x19; const NSInteger x20; in void*x21; void*x22; struct IntPoint { 
            NSInteger m_x; 
            NSInteger m_y; 
        } x23; struct IntSize { 
            NSInteger m_width; 
            NSInteger m_height; 
        } x24; void*x25; void*x26; struct HashMap<WebCore::TileCache::TileIndex,WTF::RefPtr<WebCore::TileCache::Tile>,WebCore::TileCache::TileIndexHash,WebCore::TileCache::TileIndexHashTraits,WTF::HashTraits<WTF::RefPtr<WebCore::TileCache::Tile> > > { 
            struct HashTable<WebCore::TileCache::TileIndex,std::pair<WebCore::TileCache::TileIndex, WTF::RefPtr<WebCore::TileCache::Tile> >,WTF::PairFirstExtractor<std::pair<WebCore::TileCache::TileIndex, WTF::RefPtr<WebCore::TileCache::Tile> > >,WebCore::TileCache::TileIndexHash,WTF::PairHashTraits<WebCore::TileCache::TileIndexHashTraits, WTF::HashTraits<WTF::RefPtr<WebCore::TileCache::Tile> > >,WebCore::TileCache::TileIndexHashTraits> { 
                struct pair<WebCore::TileCache::TileIndex,WTF::RefPtr<WebCore::TileCache::Tile> > {} *m_table; 
                NSInteger m_tableSize; 
                NSInteger m_tableSizeMask; 
                NSInteger m_keyCount; 
                NSInteger m_deletedCount; 
            } m_impl; 
        } x27; struct Timer<WebCore::TileCache> { 
            int (**_vptr$TimerBase)(); 
            double m_nextFireTime; 
            double m_repeatInterval; 
            NSInteger m_heapIndex; 
            NSUInteger m_heapInsertionOrder; 
            struct TileCache {} *m_object; 
            struct { 
                void**__pfn; 
            } m_function; 
        } x28; struct Vector<WebCore::IntRect,0ul> { 
            NSUInteger m_size; 
            struct VectorBuffer<WebCore::IntRect,0ul> { 
                struct IntRect {} *m_buffer; 
                NSUInteger m_capacity; 
            } m_buffer; 
        } x29; struct Mutex { 
            struct _opaque_pthread_mutex_t { 
                long __sig; 
                BOOL __opaque[40]; 
            } m_mutex; 
        } x30; struct Mutex { 
            struct _opaque_pthread_mutex_t { 
                long __sig; 
                BOOL __opaque[40]; 
            } m_mutex; 
        } x31; } *_tileCache;

}


- (void)renderInContext:(struct CGContext { }*)arg1;
- (id)actionForKey:(id)arg1;
- (id)initWithTileCache:(struct TileCache { struct RetainPtr<CALayer> { id x_1_1_1; } x1; id x2; struct RetainPtr<WebThreadCaller> { id x_3_1_1; } x3; NSInteger x4; NSInteger x5; id x6; struct IntPoint { NSInteger x_7_1_1; NSInteger x_7_1_2; } x7; struct IntSize { NSInteger x_8_1_1; NSInteger x_8_1_2; } x8; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x9; void*x10; struct HashMap<WebCore::TileCache::TileIndex,WTF::RefPtr<WebCore::TileCache::Tile>,WebCore::TileCache::TileIndexHash,WebCore::TileCache::TileIndexHashTraits,WTF::HashTraits<WTF::RefPtr<WebCore::TileCache::Tile> > > { struct HashTable<WebCore::TileCache::TileIndex,std::pair<WebCore::TileCache::TileIndex, WTF::RefPtr<WebCore::TileCache::Tile> >,WTF::PairFirstExtractor<std::pair<WebCore::TileCache::TileIndex, WTF::RefPtr<WebCore::TileCache::Tile> > >,WebCore::TileCache::TileIndexHash,WTF::PairHashTraits<WebCore::TileCache::TileIndexHashTraits, WTF::HashTraits<WTF::RefPtr<WebCore::TileCache::Tile> > >,WebCore::TileCache::TileIndexHashTraits> { struct pair<WebCore::TileCache::TileIndex,WTF::RefPtr<WebCore::TileCache::Tile> > {} *x_1_2_1; NSInteger x_1_2_2; NSInteger x_1_2_3; NSInteger x_1_2_4; NSInteger x_1_2_5; } x_11_1_1; } x11; struct Timer<WebCore::TileCache> { int (**x_12_1_1)(); double x_12_1_2; double x_12_1_3; NSInteger x_12_1_4; NSUInteger x_12_1_5; struct TileCache {} *x_12_1_6; struct { NSInteger *x_7_2_1; } x_12_1_7; } x12; struct Vector<WebCore::IntRect,0ul> { NSUInteger x_13_1_1; struct VectorBuffer<WebCore::IntRect,0ul> { struct IntRect {} *x_2_2_1; NSUInteger x_2_2_2; } x_13_1_2; } x13; struct Mutex { struct _opaque_pthread_mutex_t { long x_1_2_1; BOOL x_1_2_2[40]; } x_14_1_1; } x14; struct Mutex { struct _opaque_pthread_mutex_t { long x_1_2_1; BOOL x_1_2_2[40]; } x_15_1_1; } x15; }*)arg1;
     /* Encoded args for previous method: @12@0:4^{TileCache={RetainPtr<CALayer>=@}@{RetainPtr<WebThreadCaller>=@}ii@{IntPoint=ii}{IntSize=ii}BB{HashMap<WebCore::TileCache::TileIndex,WTF::RefPtr<WebCore::TileCache::Tile>,WebCore::TileCache::TileIndexHash,WebCore::TileCache::TileIndexHashTraits,WTF::HashTraits<WTF::RefPtr<WebCore::TileCache::Tile> > >={HashTable<WebCore::TileCache::TileIndex,std::pair<WebCore::TileCache::TileIndex, WTF::RefPtr<WebCore::TileCache::Tile> >,WTF::PairFirstExtractor<std::pair<WebCore::TileCache::TileIndex, WTF::RefPtr<WebCore::TileCache::Tile> > >,WebCore::TileCache::TileIndexHash,WTF::PairHashTraits<WebCore::TileCache::TileIndexHashTraits, WTF::HashTraits<WTF::RefPtr<WebCore::TileCache::Tile> > >,WebCore::TileCache::TileIndexHashTraits>=^{pair<WebCore::TileCache::TileIndex,WTF::RefPtr<WebCore::TileCache::Tile> >}iiii}}{Timer<WebCore::TileCache>=^^?ddiI^{TileCache}{?=^i}}{Vector<WebCore::IntRect,0ul>=I{VectorBuffer<WebCore::IntRect,0ul>=^{IntRect}I}}{Mutex={_opaque_pthread_mutex_t=l[40c]}}{Mutex={_opaque_pthread_mutex_t=l[40c]}}}8 */


@end
