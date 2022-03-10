#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Exception System.Linq.Error::ArgumentNull(System.String)
extern void Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E (void);
// 0x00000002 System.Exception System.Linq.Error::ArgumentOutOfRange(System.String)
extern void Error_ArgumentOutOfRange_m2EFB999454161A6B48F8DAC3753FDC190538F0F2 (void);
// 0x00000003 System.Exception System.Linq.Error::MoreThanOneMatch()
extern void Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8 (void);
// 0x00000004 System.Exception System.Linq.Error::NoElements()
extern void Error_NoElements_mB89E91246572F009281D79730950808F17C3F353 (void);
// 0x00000005 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000006 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
// 0x00000007 System.Func`2<TSource,System.Boolean> System.Linq.Enumerable::CombinePredicates(System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,System.Boolean>)
// 0x00000008 System.Func`2<TSource,TResult> System.Linq.Enumerable::CombineSelectors(System.Func`2<TSource,TMiddle>,System.Func`2<TMiddle,TResult>)
// 0x00000009 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectMany(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x0000000A System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectManyIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x0000000B System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Take(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x0000000C System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::TakeIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x0000000D System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000E System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderByDescending(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000F System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::ThenBy(System.Linq.IOrderedEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x00000010 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Distinct(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000011 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::DistinctIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000012 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Union(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000013 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::UnionIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000014 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Intersect(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000015 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::IntersectIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000016 TSource[] System.Linq.Enumerable::ToArray(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000017 System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000018 System.Collections.Generic.Dictionary`2<TKey,TElement> System.Linq.Enumerable::ToDictionary(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>,System.Func`2<TSource,TElement>)
// 0x00000019 System.Collections.Generic.Dictionary`2<TKey,TElement> System.Linq.Enumerable::ToDictionary(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>,System.Func`2<TSource,TElement>,System.Collections.Generic.IEqualityComparer`1<TKey>)
// 0x0000001A System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::OfType(System.Collections.IEnumerable)
// 0x0000001B System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::OfTypeIterator(System.Collections.IEnumerable)
// 0x0000001C System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Cast(System.Collections.IEnumerable)
// 0x0000001D System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::CastIterator(System.Collections.IEnumerable)
// 0x0000001E TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001F TSource System.Linq.Enumerable::FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000020 TSource System.Linq.Enumerable::Last(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000021 TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000022 TSource System.Linq.Enumerable::ElementAt(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x00000023 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Empty()
// 0x00000024 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000025 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000026 System.Boolean System.Linq.Enumerable::All(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000027 System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000028 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
// 0x00000029 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x0000002A TAccumulate System.Linq.Enumerable::Aggregate(System.Collections.Generic.IEnumerable`1<TSource>,TAccumulate,System.Func`3<TAccumulate,TSource,TAccumulate>)
// 0x0000002B System.Int32 System.Linq.Enumerable::Sum(System.Collections.Generic.IEnumerable`1<System.Int32>)
extern void Enumerable_Sum_m6CFC8CEAC70AE3C469A5D1993FAF8EEEC6A06FB5 (void);
// 0x0000002C System.Void System.Linq.Enumerable/Iterator`1::.ctor()
// 0x0000002D TSource System.Linq.Enumerable/Iterator`1::get_Current()
// 0x0000002E System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone()
// 0x0000002F System.Void System.Linq.Enumerable/Iterator`1::Dispose()
// 0x00000030 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator()
// 0x00000031 System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext()
// 0x00000032 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/Iterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000033 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000034 System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current()
// 0x00000035 System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000036 System.Void System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.Reset()
// 0x00000037 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000038 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone()
// 0x00000039 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose()
// 0x0000003A System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext()
// 0x0000003B System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereEnumerableIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000003C System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000003D System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
// 0x0000003E System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone()
// 0x0000003F System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext()
// 0x00000040 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereArrayIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000041 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000042 System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000043 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone()
// 0x00000044 System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext()
// 0x00000045 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereListIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000046 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000047 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000048 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Clone()
// 0x00000049 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Dispose()
// 0x0000004A System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2::MoveNext()
// 0x0000004B System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000004C System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x0000004D System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000004E System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Clone()
// 0x0000004F System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2::MoveNext()
// 0x00000050 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectArrayIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000051 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000052 System.Void System.Linq.Enumerable/WhereSelectListIterator`2::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000053 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Clone()
// 0x00000054 System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2::MoveNext()
// 0x00000055 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectListIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000056 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000057 System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor()
// 0x00000058 System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource)
// 0x00000059 System.Void System.Linq.Enumerable/<>c__DisplayClass7_0`3::.ctor()
// 0x0000005A TResult System.Linq.Enumerable/<>c__DisplayClass7_0`3::<CombineSelectors>b__0(TSource)
// 0x0000005B System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::.ctor(System.Int32)
// 0x0000005C System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.IDisposable.Dispose()
// 0x0000005D System.Boolean System.Linq.Enumerable/<SelectManyIterator>d__17`2::MoveNext()
// 0x0000005E System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally1()
// 0x0000005F System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally2()
// 0x00000060 TResult System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x00000061 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.Reset()
// 0x00000062 System.Object System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.get_Current()
// 0x00000063 System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x00000064 System.Collections.IEnumerator System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerable.GetEnumerator()
// 0x00000065 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::.ctor(System.Int32)
// 0x00000066 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::System.IDisposable.Dispose()
// 0x00000067 System.Boolean System.Linq.Enumerable/<TakeIterator>d__25`1::MoveNext()
// 0x00000068 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::<>m__Finally1()
// 0x00000069 TSource System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x0000006A System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.IEnumerator.Reset()
// 0x0000006B System.Object System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.IEnumerator.get_Current()
// 0x0000006C System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x0000006D System.Collections.IEnumerator System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000006E System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::.ctor(System.Int32)
// 0x0000006F System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.IDisposable.Dispose()
// 0x00000070 System.Boolean System.Linq.Enumerable/<DistinctIterator>d__68`1::MoveNext()
// 0x00000071 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::<>m__Finally1()
// 0x00000072 TSource System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000073 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.Reset()
// 0x00000074 System.Object System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.get_Current()
// 0x00000075 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x00000076 System.Collections.IEnumerator System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000077 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::.ctor(System.Int32)
// 0x00000078 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::System.IDisposable.Dispose()
// 0x00000079 System.Boolean System.Linq.Enumerable/<UnionIterator>d__71`1::MoveNext()
// 0x0000007A System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::<>m__Finally1()
// 0x0000007B System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::<>m__Finally2()
// 0x0000007C TSource System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x0000007D System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.IEnumerator.Reset()
// 0x0000007E System.Object System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.IEnumerator.get_Current()
// 0x0000007F System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x00000080 System.Collections.IEnumerator System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000081 System.Void System.Linq.Enumerable/<IntersectIterator>d__74`1::.ctor(System.Int32)
// 0x00000082 System.Void System.Linq.Enumerable/<IntersectIterator>d__74`1::System.IDisposable.Dispose()
// 0x00000083 System.Boolean System.Linq.Enumerable/<IntersectIterator>d__74`1::MoveNext()
// 0x00000084 System.Void System.Linq.Enumerable/<IntersectIterator>d__74`1::<>m__Finally1()
// 0x00000085 TSource System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000086 System.Void System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.IEnumerator.Reset()
// 0x00000087 System.Object System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.IEnumerator.get_Current()
// 0x00000088 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x00000089 System.Collections.IEnumerator System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000008A System.Void System.Linq.Enumerable/<OfTypeIterator>d__97`1::.ctor(System.Int32)
// 0x0000008B System.Void System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.IDisposable.Dispose()
// 0x0000008C System.Boolean System.Linq.Enumerable/<OfTypeIterator>d__97`1::MoveNext()
// 0x0000008D System.Void System.Linq.Enumerable/<OfTypeIterator>d__97`1::<>m__Finally1()
// 0x0000008E TResult System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x0000008F System.Void System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.IEnumerator.Reset()
// 0x00000090 System.Object System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.IEnumerator.get_Current()
// 0x00000091 System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x00000092 System.Collections.IEnumerator System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000093 System.Void System.Linq.Enumerable/<CastIterator>d__99`1::.ctor(System.Int32)
// 0x00000094 System.Void System.Linq.Enumerable/<CastIterator>d__99`1::System.IDisposable.Dispose()
// 0x00000095 System.Boolean System.Linq.Enumerable/<CastIterator>d__99`1::MoveNext()
// 0x00000096 System.Void System.Linq.Enumerable/<CastIterator>d__99`1::<>m__Finally1()
// 0x00000097 TResult System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x00000098 System.Void System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.IEnumerator.Reset()
// 0x00000099 System.Object System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.IEnumerator.get_Current()
// 0x0000009A System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x0000009B System.Collections.IEnumerator System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000009C System.Void System.Linq.EmptyEnumerable`1::.cctor()
// 0x0000009D System.Linq.IOrderedEnumerable`1<TElement> System.Linq.IOrderedEnumerable`1::CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x0000009E System.Void System.Linq.Set`1::.ctor(System.Collections.Generic.IEqualityComparer`1<TElement>)
// 0x0000009F System.Boolean System.Linq.Set`1::Add(TElement)
// 0x000000A0 System.Boolean System.Linq.Set`1::Remove(TElement)
// 0x000000A1 System.Boolean System.Linq.Set`1::Find(TElement,System.Boolean)
// 0x000000A2 System.Void System.Linq.Set`1::Resize()
// 0x000000A3 System.Int32 System.Linq.Set`1::InternalGetHashCode(TElement)
// 0x000000A4 System.Collections.Generic.IEnumerator`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerator()
// 0x000000A5 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x000000A6 System.Collections.IEnumerator System.Linq.OrderedEnumerable`1::System.Collections.IEnumerable.GetEnumerator()
// 0x000000A7 System.Linq.IOrderedEnumerable`1<TElement> System.Linq.OrderedEnumerable`1::System.Linq.IOrderedEnumerable<TElement>.CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x000000A8 System.Void System.Linq.OrderedEnumerable`1::.ctor()
// 0x000000A9 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::.ctor(System.Int32)
// 0x000000AA System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.IDisposable.Dispose()
// 0x000000AB System.Boolean System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::MoveNext()
// 0x000000AC TElement System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.Generic.IEnumerator<TElement>.get_Current()
// 0x000000AD System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.Reset()
// 0x000000AE System.Object System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.get_Current()
// 0x000000AF System.Void System.Linq.OrderedEnumerable`2::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x000000B0 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`2::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x000000B1 System.Void System.Linq.EnumerableSorter`1::ComputeKeys(TElement[],System.Int32)
// 0x000000B2 System.Int32 System.Linq.EnumerableSorter`1::CompareKeys(System.Int32,System.Int32)
// 0x000000B3 System.Int32[] System.Linq.EnumerableSorter`1::Sort(TElement[],System.Int32)
// 0x000000B4 System.Void System.Linq.EnumerableSorter`1::QuickSort(System.Int32[],System.Int32,System.Int32)
// 0x000000B5 System.Void System.Linq.EnumerableSorter`1::.ctor()
// 0x000000B6 System.Void System.Linq.EnumerableSorter`2::.ctor(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean,System.Linq.EnumerableSorter`1<TElement>)
// 0x000000B7 System.Void System.Linq.EnumerableSorter`2::ComputeKeys(TElement[],System.Int32)
// 0x000000B8 System.Int32 System.Linq.EnumerableSorter`2::CompareKeys(System.Int32,System.Int32)
// 0x000000B9 System.Void System.Linq.Buffer`1::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
// 0x000000BA TElement[] System.Linq.Buffer`1::ToArray()
// 0x000000BB System.Void System.Collections.Generic.HashSet`1::.ctor()
// 0x000000BC System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
// 0x000000BD System.Void System.Collections.Generic.HashSet`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x000000BE System.Void System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.Add(T)
// 0x000000BF System.Void System.Collections.Generic.HashSet`1::Clear()
// 0x000000C0 System.Boolean System.Collections.Generic.HashSet`1::Contains(T)
// 0x000000C1 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32)
// 0x000000C2 System.Boolean System.Collections.Generic.HashSet`1::Remove(T)
// 0x000000C3 System.Int32 System.Collections.Generic.HashSet`1::get_Count()
// 0x000000C4 System.Boolean System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// 0x000000C5 System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1::GetEnumerator()
// 0x000000C6 System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x000000C7 System.Collections.IEnumerator System.Collections.Generic.HashSet`1::System.Collections.IEnumerable.GetEnumerator()
// 0x000000C8 System.Void System.Collections.Generic.HashSet`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x000000C9 System.Void System.Collections.Generic.HashSet`1::OnDeserialization(System.Object)
// 0x000000CA System.Boolean System.Collections.Generic.HashSet`1::Add(T)
// 0x000000CB System.Void System.Collections.Generic.HashSet`1::UnionWith(System.Collections.Generic.IEnumerable`1<T>)
// 0x000000CC System.Void System.Collections.Generic.HashSet`1::CopyTo(T[])
// 0x000000CD System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32,System.Int32)
// 0x000000CE System.Void System.Collections.Generic.HashSet`1::Initialize(System.Int32)
// 0x000000CF System.Void System.Collections.Generic.HashSet`1::IncreaseCapacity()
// 0x000000D0 System.Void System.Collections.Generic.HashSet`1::SetCapacity(System.Int32)
// 0x000000D1 System.Boolean System.Collections.Generic.HashSet`1::AddIfNotPresent(T)
// 0x000000D2 System.Int32 System.Collections.Generic.HashSet`1::InternalGetHashCode(T)
// 0x000000D3 System.Void System.Collections.Generic.HashSet`1/Enumerator::.ctor(System.Collections.Generic.HashSet`1<T>)
// 0x000000D4 System.Void System.Collections.Generic.HashSet`1/Enumerator::Dispose()
// 0x000000D5 System.Boolean System.Collections.Generic.HashSet`1/Enumerator::MoveNext()
// 0x000000D6 T System.Collections.Generic.HashSet`1/Enumerator::get_Current()
// 0x000000D7 System.Object System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x000000D8 System.Void System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.Reset()
// 0x000000D9 System.Void System.Collections.Generic.ICollectionDebugView`1::.ctor(System.Collections.Generic.ICollection`1<T>)
// 0x000000DA T[] System.Collections.Generic.ICollectionDebugView`1::get_Items()
static Il2CppMethodPointer s_methodPointers[218] = 
{
	Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E,
	Error_ArgumentOutOfRange_m2EFB999454161A6B48F8DAC3753FDC190538F0F2,
	Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8,
	Error_NoElements_mB89E91246572F009281D79730950808F17C3F353,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	Enumerable_Sum_m6CFC8CEAC70AE3C469A5D1993FAF8EEEC6A06FB5,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const int32_t s_InvokerIndices[218] = 
{
	6580,
	6580,
	6806,
	6806,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	6481,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
};
static const Il2CppTokenRangePair s_rgctxIndices[72] = 
{
	{ 0x02000004, { 108, 4 } },
	{ 0x02000005, { 112, 9 } },
	{ 0x02000006, { 123, 7 } },
	{ 0x02000007, { 132, 10 } },
	{ 0x02000008, { 144, 11 } },
	{ 0x02000009, { 158, 9 } },
	{ 0x0200000A, { 170, 12 } },
	{ 0x0200000B, { 185, 1 } },
	{ 0x0200000C, { 186, 2 } },
	{ 0x0200000D, { 188, 12 } },
	{ 0x0200000E, { 200, 8 } },
	{ 0x0200000F, { 208, 11 } },
	{ 0x02000010, { 219, 12 } },
	{ 0x02000011, { 231, 12 } },
	{ 0x02000012, { 243, 6 } },
	{ 0x02000013, { 249, 6 } },
	{ 0x02000014, { 255, 2 } },
	{ 0x02000016, { 257, 8 } },
	{ 0x02000018, { 265, 3 } },
	{ 0x02000019, { 270, 5 } },
	{ 0x0200001A, { 275, 7 } },
	{ 0x0200001B, { 282, 3 } },
	{ 0x0200001C, { 285, 7 } },
	{ 0x0200001D, { 292, 4 } },
	{ 0x0200001E, { 296, 23 } },
	{ 0x02000020, { 319, 2 } },
	{ 0x02000021, { 321, 2 } },
	{ 0x06000005, { 0, 10 } },
	{ 0x06000006, { 10, 10 } },
	{ 0x06000007, { 20, 5 } },
	{ 0x06000008, { 25, 5 } },
	{ 0x06000009, { 30, 1 } },
	{ 0x0600000A, { 31, 2 } },
	{ 0x0600000B, { 33, 1 } },
	{ 0x0600000C, { 34, 2 } },
	{ 0x0600000D, { 36, 2 } },
	{ 0x0600000E, { 38, 2 } },
	{ 0x0600000F, { 40, 1 } },
	{ 0x06000010, { 41, 1 } },
	{ 0x06000011, { 42, 2 } },
	{ 0x06000012, { 44, 1 } },
	{ 0x06000013, { 45, 2 } },
	{ 0x06000014, { 47, 1 } },
	{ 0x06000015, { 48, 2 } },
	{ 0x06000016, { 50, 3 } },
	{ 0x06000017, { 53, 2 } },
	{ 0x06000018, { 55, 1 } },
	{ 0x06000019, { 56, 7 } },
	{ 0x0600001A, { 63, 1 } },
	{ 0x0600001B, { 64, 2 } },
	{ 0x0600001C, { 66, 2 } },
	{ 0x0600001D, { 68, 2 } },
	{ 0x0600001E, { 70, 4 } },
	{ 0x0600001F, { 74, 4 } },
	{ 0x06000020, { 78, 4 } },
	{ 0x06000021, { 82, 3 } },
	{ 0x06000022, { 85, 3 } },
	{ 0x06000023, { 88, 1 } },
	{ 0x06000024, { 89, 1 } },
	{ 0x06000025, { 90, 3 } },
	{ 0x06000026, { 93, 3 } },
	{ 0x06000027, { 96, 2 } },
	{ 0x06000028, { 98, 2 } },
	{ 0x06000029, { 100, 5 } },
	{ 0x0600002A, { 105, 3 } },
	{ 0x0600003B, { 121, 2 } },
	{ 0x06000040, { 130, 2 } },
	{ 0x06000045, { 142, 2 } },
	{ 0x0600004B, { 155, 3 } },
	{ 0x06000050, { 167, 3 } },
	{ 0x06000055, { 182, 3 } },
	{ 0x060000A7, { 268, 2 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[323] = 
{
	{ (Il2CppRGCTXDataType)2, 6928 },
	{ (Il2CppRGCTXDataType)3, 25825 },
	{ (Il2CppRGCTXDataType)2, 10885 },
	{ (Il2CppRGCTXDataType)2, 10171 },
	{ (Il2CppRGCTXDataType)3, 44627 },
	{ (Il2CppRGCTXDataType)2, 7614 },
	{ (Il2CppRGCTXDataType)2, 10201 },
	{ (Il2CppRGCTXDataType)3, 44671 },
	{ (Il2CppRGCTXDataType)2, 10184 },
	{ (Il2CppRGCTXDataType)3, 44643 },
	{ (Il2CppRGCTXDataType)2, 6929 },
	{ (Il2CppRGCTXDataType)3, 25826 },
	{ (Il2CppRGCTXDataType)2, 10917 },
	{ (Il2CppRGCTXDataType)2, 10214 },
	{ (Il2CppRGCTXDataType)3, 44687 },
	{ (Il2CppRGCTXDataType)2, 7641 },
	{ (Il2CppRGCTXDataType)2, 10240 },
	{ (Il2CppRGCTXDataType)3, 44829 },
	{ (Il2CppRGCTXDataType)2, 10227 },
	{ (Il2CppRGCTXDataType)3, 44752 },
	{ (Il2CppRGCTXDataType)2, 1239 },
	{ (Il2CppRGCTXDataType)3, 210 },
	{ (Il2CppRGCTXDataType)3, 211 },
	{ (Il2CppRGCTXDataType)2, 3911 },
	{ (Il2CppRGCTXDataType)3, 16072 },
	{ (Il2CppRGCTXDataType)2, 1240 },
	{ (Il2CppRGCTXDataType)3, 220 },
	{ (Il2CppRGCTXDataType)3, 221 },
	{ (Il2CppRGCTXDataType)2, 3930 },
	{ (Il2CppRGCTXDataType)3, 16081 },
	{ (Il2CppRGCTXDataType)3, 49921 },
	{ (Il2CppRGCTXDataType)2, 1283 },
	{ (Il2CppRGCTXDataType)3, 411 },
	{ (Il2CppRGCTXDataType)3, 49928 },
	{ (Il2CppRGCTXDataType)2, 1291 },
	{ (Il2CppRGCTXDataType)3, 447 },
	{ (Il2CppRGCTXDataType)2, 8299 },
	{ (Il2CppRGCTXDataType)3, 35133 },
	{ (Il2CppRGCTXDataType)2, 8300 },
	{ (Il2CppRGCTXDataType)3, 35134 },
	{ (Il2CppRGCTXDataType)3, 21175 },
	{ (Il2CppRGCTXDataType)3, 49858 },
	{ (Il2CppRGCTXDataType)2, 1246 },
	{ (Il2CppRGCTXDataType)3, 277 },
	{ (Il2CppRGCTXDataType)3, 49976 },
	{ (Il2CppRGCTXDataType)2, 1295 },
	{ (Il2CppRGCTXDataType)3, 479 },
	{ (Il2CppRGCTXDataType)3, 49876 },
	{ (Il2CppRGCTXDataType)2, 1272 },
	{ (Il2CppRGCTXDataType)3, 369 },
	{ (Il2CppRGCTXDataType)2, 1625 },
	{ (Il2CppRGCTXDataType)3, 2985 },
	{ (Il2CppRGCTXDataType)3, 2986 },
	{ (Il2CppRGCTXDataType)2, 7615 },
	{ (Il2CppRGCTXDataType)3, 27945 },
	{ (Il2CppRGCTXDataType)3, 49958 },
	{ (Il2CppRGCTXDataType)2, 2460 },
	{ (Il2CppRGCTXDataType)3, 7177 },
	{ (Il2CppRGCTXDataType)2, 4520 },
	{ (Il2CppRGCTXDataType)2, 4834 },
	{ (Il2CppRGCTXDataType)3, 16079 },
	{ (Il2CppRGCTXDataType)3, 16080 },
	{ (Il2CppRGCTXDataType)3, 7178 },
	{ (Il2CppRGCTXDataType)3, 49885 },
	{ (Il2CppRGCTXDataType)2, 1275 },
	{ (Il2CppRGCTXDataType)3, 383 },
	{ (Il2CppRGCTXDataType)2, 4470 },
	{ (Il2CppRGCTXDataType)3, 49798 },
	{ (Il2CppRGCTXDataType)2, 1243 },
	{ (Il2CppRGCTXDataType)3, 263 },
	{ (Il2CppRGCTXDataType)2, 5972 },
	{ (Il2CppRGCTXDataType)2, 4221 },
	{ (Il2CppRGCTXDataType)2, 4487 },
	{ (Il2CppRGCTXDataType)2, 4823 },
	{ (Il2CppRGCTXDataType)2, 5973 },
	{ (Il2CppRGCTXDataType)2, 4222 },
	{ (Il2CppRGCTXDataType)2, 4488 },
	{ (Il2CppRGCTXDataType)2, 4824 },
	{ (Il2CppRGCTXDataType)2, 5974 },
	{ (Il2CppRGCTXDataType)2, 4223 },
	{ (Il2CppRGCTXDataType)2, 4489 },
	{ (Il2CppRGCTXDataType)2, 4825 },
	{ (Il2CppRGCTXDataType)2, 4490 },
	{ (Il2CppRGCTXDataType)2, 4826 },
	{ (Il2CppRGCTXDataType)3, 16073 },
	{ (Il2CppRGCTXDataType)2, 5971 },
	{ (Il2CppRGCTXDataType)2, 4486 },
	{ (Il2CppRGCTXDataType)2, 4822 },
	{ (Il2CppRGCTXDataType)2, 2745 },
	{ (Il2CppRGCTXDataType)2, 4466 },
	{ (Il2CppRGCTXDataType)2, 4467 },
	{ (Il2CppRGCTXDataType)2, 4820 },
	{ (Il2CppRGCTXDataType)3, 16071 },
	{ (Il2CppRGCTXDataType)2, 4465 },
	{ (Il2CppRGCTXDataType)2, 4819 },
	{ (Il2CppRGCTXDataType)3, 16070 },
	{ (Il2CppRGCTXDataType)2, 4220 },
	{ (Il2CppRGCTXDataType)2, 4485 },
	{ (Il2CppRGCTXDataType)2, 4219 },
	{ (Il2CppRGCTXDataType)3, 49836 },
	{ (Il2CppRGCTXDataType)3, 14868 },
	{ (Il2CppRGCTXDataType)2, 3712 },
	{ (Il2CppRGCTXDataType)2, 4469 },
	{ (Il2CppRGCTXDataType)2, 4821 },
	{ (Il2CppRGCTXDataType)2, 5078 },
	{ (Il2CppRGCTXDataType)2, 4517 },
	{ (Il2CppRGCTXDataType)2, 4833 },
	{ (Il2CppRGCTXDataType)3, 16309 },
	{ (Il2CppRGCTXDataType)3, 25827 },
	{ (Il2CppRGCTXDataType)3, 25829 },
	{ (Il2CppRGCTXDataType)2, 899 },
	{ (Il2CppRGCTXDataType)3, 25828 },
	{ (Il2CppRGCTXDataType)3, 25837 },
	{ (Il2CppRGCTXDataType)2, 6932 },
	{ (Il2CppRGCTXDataType)2, 10185 },
	{ (Il2CppRGCTXDataType)3, 44644 },
	{ (Il2CppRGCTXDataType)3, 25838 },
	{ (Il2CppRGCTXDataType)2, 4582 },
	{ (Il2CppRGCTXDataType)2, 4882 },
	{ (Il2CppRGCTXDataType)3, 16089 },
	{ (Il2CppRGCTXDataType)3, 49801 },
	{ (Il2CppRGCTXDataType)2, 10228 },
	{ (Il2CppRGCTXDataType)3, 44753 },
	{ (Il2CppRGCTXDataType)3, 25830 },
	{ (Il2CppRGCTXDataType)2, 6931 },
	{ (Il2CppRGCTXDataType)2, 10172 },
	{ (Il2CppRGCTXDataType)3, 44628 },
	{ (Il2CppRGCTXDataType)3, 16088 },
	{ (Il2CppRGCTXDataType)3, 25831 },
	{ (Il2CppRGCTXDataType)3, 49800 },
	{ (Il2CppRGCTXDataType)2, 10215 },
	{ (Il2CppRGCTXDataType)3, 44688 },
	{ (Il2CppRGCTXDataType)3, 25844 },
	{ (Il2CppRGCTXDataType)2, 6933 },
	{ (Il2CppRGCTXDataType)2, 10202 },
	{ (Il2CppRGCTXDataType)3, 44672 },
	{ (Il2CppRGCTXDataType)3, 28008 },
	{ (Il2CppRGCTXDataType)3, 12892 },
	{ (Il2CppRGCTXDataType)3, 16090 },
	{ (Il2CppRGCTXDataType)3, 12891 },
	{ (Il2CppRGCTXDataType)3, 25845 },
	{ (Il2CppRGCTXDataType)3, 49802 },
	{ (Il2CppRGCTXDataType)2, 10241 },
	{ (Il2CppRGCTXDataType)3, 44830 },
	{ (Il2CppRGCTXDataType)3, 25858 },
	{ (Il2CppRGCTXDataType)2, 6935 },
	{ (Il2CppRGCTXDataType)2, 10230 },
	{ (Il2CppRGCTXDataType)3, 44755 },
	{ (Il2CppRGCTXDataType)3, 25859 },
	{ (Il2CppRGCTXDataType)2, 4585 },
	{ (Il2CppRGCTXDataType)2, 4885 },
	{ (Il2CppRGCTXDataType)3, 16094 },
	{ (Il2CppRGCTXDataType)3, 16093 },
	{ (Il2CppRGCTXDataType)2, 10187 },
	{ (Il2CppRGCTXDataType)3, 44646 },
	{ (Il2CppRGCTXDataType)3, 49808 },
	{ (Il2CppRGCTXDataType)2, 10229 },
	{ (Il2CppRGCTXDataType)3, 44754 },
	{ (Il2CppRGCTXDataType)3, 25851 },
	{ (Il2CppRGCTXDataType)2, 6934 },
	{ (Il2CppRGCTXDataType)2, 10217 },
	{ (Il2CppRGCTXDataType)3, 44690 },
	{ (Il2CppRGCTXDataType)3, 16092 },
	{ (Il2CppRGCTXDataType)3, 16091 },
	{ (Il2CppRGCTXDataType)3, 25852 },
	{ (Il2CppRGCTXDataType)2, 10186 },
	{ (Il2CppRGCTXDataType)3, 44645 },
	{ (Il2CppRGCTXDataType)3, 49807 },
	{ (Il2CppRGCTXDataType)2, 10216 },
	{ (Il2CppRGCTXDataType)3, 44689 },
	{ (Il2CppRGCTXDataType)3, 25865 },
	{ (Il2CppRGCTXDataType)2, 6936 },
	{ (Il2CppRGCTXDataType)2, 10243 },
	{ (Il2CppRGCTXDataType)3, 44832 },
	{ (Il2CppRGCTXDataType)3, 28009 },
	{ (Il2CppRGCTXDataType)3, 12894 },
	{ (Il2CppRGCTXDataType)3, 16096 },
	{ (Il2CppRGCTXDataType)3, 16095 },
	{ (Il2CppRGCTXDataType)3, 12893 },
	{ (Il2CppRGCTXDataType)3, 25866 },
	{ (Il2CppRGCTXDataType)2, 10188 },
	{ (Il2CppRGCTXDataType)3, 44647 },
	{ (Il2CppRGCTXDataType)3, 49809 },
	{ (Il2CppRGCTXDataType)2, 10242 },
	{ (Il2CppRGCTXDataType)3, 44831 },
	{ (Il2CppRGCTXDataType)3, 16085 },
	{ (Il2CppRGCTXDataType)3, 16086 },
	{ (Il2CppRGCTXDataType)3, 16097 },
	{ (Il2CppRGCTXDataType)3, 414 },
	{ (Il2CppRGCTXDataType)3, 413 },
	{ (Il2CppRGCTXDataType)2, 4571 },
	{ (Il2CppRGCTXDataType)2, 4874 },
	{ (Il2CppRGCTXDataType)3, 16087 },
	{ (Il2CppRGCTXDataType)2, 4608 },
	{ (Il2CppRGCTXDataType)2, 4914 },
	{ (Il2CppRGCTXDataType)3, 416 },
	{ (Il2CppRGCTXDataType)2, 1135 },
	{ (Il2CppRGCTXDataType)2, 1284 },
	{ (Il2CppRGCTXDataType)3, 412 },
	{ (Il2CppRGCTXDataType)3, 415 },
	{ (Il2CppRGCTXDataType)3, 449 },
	{ (Il2CppRGCTXDataType)2, 4574 },
	{ (Il2CppRGCTXDataType)2, 4876 },
	{ (Il2CppRGCTXDataType)3, 451 },
	{ (Il2CppRGCTXDataType)2, 895 },
	{ (Il2CppRGCTXDataType)2, 1292 },
	{ (Il2CppRGCTXDataType)3, 448 },
	{ (Il2CppRGCTXDataType)3, 450 },
	{ (Il2CppRGCTXDataType)3, 279 },
	{ (Il2CppRGCTXDataType)2, 9383 },
	{ (Il2CppRGCTXDataType)3, 40606 },
	{ (Il2CppRGCTXDataType)2, 4564 },
	{ (Il2CppRGCTXDataType)2, 4869 },
	{ (Il2CppRGCTXDataType)3, 40607 },
	{ (Il2CppRGCTXDataType)3, 281 },
	{ (Il2CppRGCTXDataType)2, 888 },
	{ (Il2CppRGCTXDataType)2, 1247 },
	{ (Il2CppRGCTXDataType)3, 278 },
	{ (Il2CppRGCTXDataType)3, 280 },
	{ (Il2CppRGCTXDataType)3, 481 },
	{ (Il2CppRGCTXDataType)3, 482 },
	{ (Il2CppRGCTXDataType)2, 9387 },
	{ (Il2CppRGCTXDataType)3, 40611 },
	{ (Il2CppRGCTXDataType)2, 4577 },
	{ (Il2CppRGCTXDataType)2, 4878 },
	{ (Il2CppRGCTXDataType)3, 40612 },
	{ (Il2CppRGCTXDataType)3, 484 },
	{ (Il2CppRGCTXDataType)2, 897 },
	{ (Il2CppRGCTXDataType)2, 1296 },
	{ (Il2CppRGCTXDataType)3, 480 },
	{ (Il2CppRGCTXDataType)3, 483 },
	{ (Il2CppRGCTXDataType)3, 371 },
	{ (Il2CppRGCTXDataType)2, 9385 },
	{ (Il2CppRGCTXDataType)3, 40608 },
	{ (Il2CppRGCTXDataType)2, 4567 },
	{ (Il2CppRGCTXDataType)2, 4871 },
	{ (Il2CppRGCTXDataType)3, 40609 },
	{ (Il2CppRGCTXDataType)3, 40610 },
	{ (Il2CppRGCTXDataType)3, 373 },
	{ (Il2CppRGCTXDataType)2, 890 },
	{ (Il2CppRGCTXDataType)2, 1273 },
	{ (Il2CppRGCTXDataType)3, 370 },
	{ (Il2CppRGCTXDataType)3, 372 },
	{ (Il2CppRGCTXDataType)3, 385 },
	{ (Il2CppRGCTXDataType)2, 892 },
	{ (Il2CppRGCTXDataType)3, 387 },
	{ (Il2CppRGCTXDataType)2, 1276 },
	{ (Il2CppRGCTXDataType)3, 384 },
	{ (Il2CppRGCTXDataType)3, 386 },
	{ (Il2CppRGCTXDataType)3, 265 },
	{ (Il2CppRGCTXDataType)2, 886 },
	{ (Il2CppRGCTXDataType)3, 267 },
	{ (Il2CppRGCTXDataType)2, 1244 },
	{ (Il2CppRGCTXDataType)3, 264 },
	{ (Il2CppRGCTXDataType)3, 266 },
	{ (Il2CppRGCTXDataType)2, 10933 },
	{ (Il2CppRGCTXDataType)2, 2746 },
	{ (Il2CppRGCTXDataType)3, 14910 },
	{ (Il2CppRGCTXDataType)2, 3729 },
	{ (Il2CppRGCTXDataType)2, 11379 },
	{ (Il2CppRGCTXDataType)3, 40603 },
	{ (Il2CppRGCTXDataType)3, 40604 },
	{ (Il2CppRGCTXDataType)2, 5095 },
	{ (Il2CppRGCTXDataType)3, 40605 },
	{ (Il2CppRGCTXDataType)2, 793 },
	{ (Il2CppRGCTXDataType)2, 1249 },
	{ (Il2CppRGCTXDataType)3, 291 },
	{ (Il2CppRGCTXDataType)3, 35108 },
	{ (Il2CppRGCTXDataType)2, 8301 },
	{ (Il2CppRGCTXDataType)3, 35135 },
	{ (Il2CppRGCTXDataType)2, 1626 },
	{ (Il2CppRGCTXDataType)3, 2987 },
	{ (Il2CppRGCTXDataType)3, 35114 },
	{ (Il2CppRGCTXDataType)3, 12832 },
	{ (Il2CppRGCTXDataType)2, 929 },
	{ (Il2CppRGCTXDataType)3, 35109 },
	{ (Il2CppRGCTXDataType)2, 8296 },
	{ (Il2CppRGCTXDataType)3, 3416 },
	{ (Il2CppRGCTXDataType)2, 1648 },
	{ (Il2CppRGCTXDataType)2, 2933 },
	{ (Il2CppRGCTXDataType)3, 12850 },
	{ (Il2CppRGCTXDataType)3, 35110 },
	{ (Il2CppRGCTXDataType)3, 12827 },
	{ (Il2CppRGCTXDataType)3, 12828 },
	{ (Il2CppRGCTXDataType)3, 12826 },
	{ (Il2CppRGCTXDataType)3, 12829 },
	{ (Il2CppRGCTXDataType)2, 2929 },
	{ (Il2CppRGCTXDataType)2, 11001 },
	{ (Il2CppRGCTXDataType)3, 16083 },
	{ (Il2CppRGCTXDataType)3, 12831 },
	{ (Il2CppRGCTXDataType)2, 4390 },
	{ (Il2CppRGCTXDataType)3, 12830 },
	{ (Il2CppRGCTXDataType)2, 4228 },
	{ (Il2CppRGCTXDataType)2, 10926 },
	{ (Il2CppRGCTXDataType)2, 4522 },
	{ (Il2CppRGCTXDataType)2, 4836 },
	{ (Il2CppRGCTXDataType)3, 14889 },
	{ (Il2CppRGCTXDataType)2, 3722 },
	{ (Il2CppRGCTXDataType)3, 16980 },
	{ (Il2CppRGCTXDataType)3, 16981 },
	{ (Il2CppRGCTXDataType)3, 16986 },
	{ (Il2CppRGCTXDataType)2, 5089 },
	{ (Il2CppRGCTXDataType)3, 16983 },
	{ (Il2CppRGCTXDataType)3, 51022 },
	{ (Il2CppRGCTXDataType)2, 2937 },
	{ (Il2CppRGCTXDataType)3, 12880 },
	{ (Il2CppRGCTXDataType)1, 4381 },
	{ (Il2CppRGCTXDataType)2, 10939 },
	{ (Il2CppRGCTXDataType)3, 16982 },
	{ (Il2CppRGCTXDataType)1, 10939 },
	{ (Il2CppRGCTXDataType)1, 5089 },
	{ (Il2CppRGCTXDataType)2, 11377 },
	{ (Il2CppRGCTXDataType)2, 10939 },
	{ (Il2CppRGCTXDataType)2, 4528 },
	{ (Il2CppRGCTXDataType)2, 4840 },
	{ (Il2CppRGCTXDataType)3, 16987 },
	{ (Il2CppRGCTXDataType)3, 16985 },
	{ (Il2CppRGCTXDataType)3, 16984 },
	{ (Il2CppRGCTXDataType)2, 672 },
	{ (Il2CppRGCTXDataType)3, 12895 },
	{ (Il2CppRGCTXDataType)2, 908 },
	{ (Il2CppRGCTXDataType)2, 4237 },
	{ (Il2CppRGCTXDataType)2, 10941 },
};
extern const CustomAttributesCacheGenerator g_System_Core_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Core_CodeGenModule;
const Il2CppCodeGenModule g_System_Core_CodeGenModule = 
{
	"System.Core.dll",
	218,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	72,
	s_rgctxIndices,
	323,
	s_rgctxValues,
	NULL,
	g_System_Core_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
