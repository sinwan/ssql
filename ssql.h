
// ---------------------------------------------------
//                  Begin Create 76
// ---------------------------------------------------
#define sql_create_complete_76(NAME, CMP, CONTR, T1, I1, N1, T2, I2, N2, T3, I3, N3, T4, I4, N4, T5, I5, N5, T6, I6, N6, T7, I7, N7, T8, I8, N8, T9, I9, N9, T10, I10, N10, T11, I11, N11, T12, I12, N12, T13, I13, N13, T14, I14, N14, T15, I15, N15, T16, I16, N16, T17, I17, N17, T18, I18, N18, T19, I19, N19, T20, I20, N20, T21, I21, N21, T22, I22, N22, T23, I23, N23, T24, I24, N24, T25, I25, N25, T26, I26, N26, T27, I27, N27, T28, I28, N28, T29, I29, N29, T30, I30, N30, T31, I31, N31, T32, I32, N32, T33, I33, N33, T34, I34, N34, T35, I35, N35, T36, I36, N36, T37, I37, N37, T38, I38, N38, T39, I39, N39, T40, I40, N40, T41, I41, N41, T42, I42, N42, T43, I43, N43, T44, I44, N44, T45, I45, N45, T46, I46, N46, T47, I47, N47, T48, I48, N48, T49, I49, N49, T50, I50, N50, T51, I51, N51, T52, I52, N52, T53, I53, N53, T54, I54, N54, T55, I55, N55, T56, I56, N56, T57, I57, N57, T58, I58, N58, T59, I59, N59, T60, I60, N60, T61, I61, N61, T62, I62, N62, T63, I63, N63, T64, I64, N64, T65, I65, N65, T66, I66, N66, T67, I67, N67, T68, I68, N68, T69, I69, N69, T70, I70, N70, T71, I71, N71, T72, I72, N72, T73, I73, N73, T74, I74, N74, T75, I75, N75, T76, I76, N76) \
	struct NAME; \
	enum NAME##_enum { \
    NAME##_##I1,\
    NAME##_##I2,\
    NAME##_##I3,\
    NAME##_##I4,\
    NAME##_##I5,\
    NAME##_##I6,\
    NAME##_##I7,\
    NAME##_##I8,\
    NAME##_##I9,\
    NAME##_##I10,\
    NAME##_##I11,\
    NAME##_##I12,\
    NAME##_##I13,\
    NAME##_##I14,\
    NAME##_##I15,\
    NAME##_##I16,\
    NAME##_##I17,\
    NAME##_##I18,\
    NAME##_##I19,\
    NAME##_##I20,\
    NAME##_##I21,\
    NAME##_##I22,\
    NAME##_##I23,\
    NAME##_##I24,\
    NAME##_##I25,\
    NAME##_##I26,\
    NAME##_##I27,\
    NAME##_##I28,\
    NAME##_##I29,\
    NAME##_##I30,\
    NAME##_##I31,\
    NAME##_##I32,\
    NAME##_##I33,\
    NAME##_##I34,\
    NAME##_##I35,\
    NAME##_##I36,\
    NAME##_##I37,\
    NAME##_##I38,\
    NAME##_##I39,\
    NAME##_##I40,\
    NAME##_##I41,\
    NAME##_##I42,\
    NAME##_##I43,\
    NAME##_##I44,\
    NAME##_##I45,\
    NAME##_##I46,\
    NAME##_##I47,\
    NAME##_##I48,\
    NAME##_##I49,\
    NAME##_##I50,\
    NAME##_##I51,\
    NAME##_##I52,\
    NAME##_##I53,\
    NAME##_##I54,\
    NAME##_##I55,\
    NAME##_##I56,\
    NAME##_##I57,\
    NAME##_##I58,\
    NAME##_##I59,\
    NAME##_##I60,\
    NAME##_##I61,\
    NAME##_##I62,\
    NAME##_##I63,\
    NAME##_##I64,\
    NAME##_##I65,\
    NAME##_##I66,\
    NAME##_##I67,\
    NAME##_##I68,\
    NAME##_##I69,\
    NAME##_##I70,\
    NAME##_##I71,\
    NAME##_##I72,\
    NAME##_##I73,\
    NAME##_##I74,\
    NAME##_##I75,\
    NAME##_##I76 \
	,NAME##_NULL \
	}; \
	template <class Manip>\
	class NAME##_value_list { \
	public: \
	const NAME* obj;\
	const char* delim;\
	Manip manip;\
	public: \
	NAME##_value_list (const NAME* o, const char* d, Manip m) :\
	obj(o), delim(d), manip(m) { } \
	};\
	template <class Manip>\
	class NAME##_##field_list {\
	public: \
	const NAME* obj; \
	const char* delim;\
	Manip manip;\
	public: \
	NAME##_field_list (const NAME* o, const char* d, Manip m) :\
	obj(o), delim(d), manip(m) { } \
	};\
	template <class Manip>\
	class NAME##_equal_list { \
	public: \
	const NAME* obj;\
	const char* delim;\
	const char* comp;\
	Manip manip;\
	public: \
	NAME##_equal_list (const NAME* o, const char* d, const char* c, Manip m) :\
	obj(o), delim(d), comp(c), manip(m) { }\
	};\
	template <class Manip>\
	class NAME##_cus_value_list {\
	public:\
	const NAME* obj;\
	std::vector<bool> *include;\
	bool del_vector;\
	const char* delim;\
	Manip manip;\
	public: \
	~NAME##_cus_value_list () {if (del_vector) delete include;} \
	NAME##_cus_value_list (const NAME* o, const char* d, Manip m, bool i1, bool i2, bool i3, bool i4, bool i5, bool i6, bool i7, bool i8, bool i9, bool i10, bool i11, bool i12, bool i13, bool i14, bool i15, bool i16, bool i17, bool i18, bool i19, bool i20, bool i21, bool i22, bool i23, bool i24, bool i25, bool i26, bool i27, bool i28, bool i29, bool i30, bool i31, bool i32, bool i33, bool i34, bool i35, bool i36, bool i37, bool i38, bool i39, bool i40, bool i41, bool i42, bool i43, bool i44, bool i45, bool i46, bool i47, bool i48, bool i49, bool i50, bool i51, bool i52, bool i53, bool i54, bool i55, bool i56, bool i57, bool i58, bool i59, bool i60, bool i61, bool i62, bool i63, bool i64, bool i65, bool i66, bool i67, bool i68, bool i69, bool i70, bool i71, bool i72, bool i73, bool i74, bool i75, bool i76);\
	NAME##_cus_value_list (const NAME* o, const char* d, Manip m, NAME##_enum i1, NAME##_enum i2, NAME##_enum i3, NAME##_enum i4, NAME##_enum i5, NAME##_enum i6, NAME##_enum i7, NAME##_enum i8, NAME##_enum i9, NAME##_enum i10, NAME##_enum i11, NAME##_enum i12, NAME##_enum i13, NAME##_enum i14, NAME##_enum i15, NAME##_enum i16, NAME##_enum i17, NAME##_enum i18, NAME##_enum i19, NAME##_enum i20, NAME##_enum i21, NAME##_enum i22, NAME##_enum i23, NAME##_enum i24, NAME##_enum i25, NAME##_enum i26, NAME##_enum i27, NAME##_enum i28, NAME##_enum i29, NAME##_enum i30, NAME##_enum i31, NAME##_enum i32, NAME##_enum i33, NAME##_enum i34, NAME##_enum i35, NAME##_enum i36, NAME##_enum i37, NAME##_enum i38, NAME##_enum i39, NAME##_enum i40, NAME##_enum i41, NAME##_enum i42, NAME##_enum i43, NAME##_enum i44, NAME##_enum i45, NAME##_enum i46, NAME##_enum i47, NAME##_enum i48, NAME##_enum i49, NAME##_enum i50, NAME##_enum i51, NAME##_enum i52, NAME##_enum i53, NAME##_enum i54, NAME##_enum i55, NAME##_enum i56, NAME##_enum i57, NAME##_enum i58, NAME##_enum i59, NAME##_enum i60, NAME##_enum i61, NAME##_enum i62, NAME##_enum i63, NAME##_enum i64, NAME##_enum i65, NAME##_enum i66, NAME##_enum i67, NAME##_enum i68, NAME##_enum i69, NAME##_enum i70, NAME##_enum i71, NAME##_enum i72, NAME##_enum i73, NAME##_enum i74, NAME##_enum i75, NAME##_enum i76); \
	NAME##_cus_value_list (const NAME* o, const char* d, Manip m ,std::vector<bool>* i) :\
	obj(o), include(i), del_vector(false), delim(d), manip(m) { }\
	};\
	template <class Manip>\
	class NAME##_cus_field_list { \
	public:\
	const NAME* obj; \
	std::vector<bool> *include; \
	bool del_vector; \
	const char* delim;\
	Manip manip;\
	public: \
	~NAME##_cus_field_list () {if (del_vector) delete include;} \
	NAME##_cus_field_list (const NAME* o, const char* d, Manip m, bool i1, bool i2, bool i3, bool i4, bool i5, bool i6, bool i7, bool i8, bool i9, bool i10, bool i11, bool i12, bool i13, bool i14, bool i15, bool i16, bool i17, bool i18, bool i19, bool i20, bool i21, bool i22, bool i23, bool i24, bool i25, bool i26, bool i27, bool i28, bool i29, bool i30, bool i31, bool i32, bool i33, bool i34, bool i35, bool i36, bool i37, bool i38, bool i39, bool i40, bool i41, bool i42, bool i43, bool i44, bool i45, bool i46, bool i47, bool i48, bool i49, bool i50, bool i51, bool i52, bool i53, bool i54, bool i55, bool i56, bool i57, bool i58, bool i59, bool i60, bool i61, bool i62, bool i63, bool i64, bool i65, bool i66, bool i67, bool i68, bool i69, bool i70, bool i71, bool i72, bool i73, bool i74, bool i75, bool i76); \
	NAME##_cus_field_list (const NAME* o, const char* d, Manip m, NAME##_enum i1, NAME##_enum i2, NAME##_enum i3, NAME##_enum i4, NAME##_enum i5, NAME##_enum i6, NAME##_enum i7, NAME##_enum i8, NAME##_enum i9, NAME##_enum i10, NAME##_enum i11, NAME##_enum i12, NAME##_enum i13, NAME##_enum i14, NAME##_enum i15, NAME##_enum i16, NAME##_enum i17, NAME##_enum i18, NAME##_enum i19, NAME##_enum i20, NAME##_enum i21, NAME##_enum i22, NAME##_enum i23, NAME##_enum i24, NAME##_enum i25, NAME##_enum i26, NAME##_enum i27, NAME##_enum i28, NAME##_enum i29, NAME##_enum i30, NAME##_enum i31, NAME##_enum i32, NAME##_enum i33, NAME##_enum i34, NAME##_enum i35, NAME##_enum i36, NAME##_enum i37, NAME##_enum i38, NAME##_enum i39, NAME##_enum i40, NAME##_enum i41, NAME##_enum i42, NAME##_enum i43, NAME##_enum i44, NAME##_enum i45, NAME##_enum i46, NAME##_enum i47, NAME##_enum i48, NAME##_enum i49, NAME##_enum i50, NAME##_enum i51, NAME##_enum i52, NAME##_enum i53, NAME##_enum i54, NAME##_enum i55, NAME##_enum i56, NAME##_enum i57, NAME##_enum i58, NAME##_enum i59, NAME##_enum i60, NAME##_enum i61, NAME##_enum i62, NAME##_enum i63, NAME##_enum i64, NAME##_enum i65, NAME##_enum i66, NAME##_enum i67, NAME##_enum i68, NAME##_enum i69, NAME##_enum i70, NAME##_enum i71, NAME##_enum i72, NAME##_enum i73, NAME##_enum i74, NAME##_enum i75, NAME##_enum i76); \
	NAME##_cus_field_list (const NAME* o, const char* d, Manip m, std::vector<bool> *i) :\
	obj(o), include(i), del_vector(false), delim(d), manip(m) { }\
	};\
	template <class Manip>\
	class NAME##_cus_equal_list {\
	public:\
	const NAME* obj;\
	std::vector<bool> *include;\
	bool del_vector;\
	const char* delim;\
	const char* comp;\
	Manip manip;\
	public:\
	~NAME##_##cus_equal_list () {if (del_vector) delete include;}\
	NAME##_##cus_equal_list (const NAME* o, const char* d, const char* c, Manip m, bool i1, bool i2, bool i3, bool i4, bool i5, bool i6, bool i7, bool i8, bool i9, bool i10, bool i11, bool i12, bool i13, bool i14, bool i15, bool i16, bool i17, bool i18, bool i19, bool i20, bool i21, bool i22, bool i23, bool i24, bool i25, bool i26, bool i27, bool i28, bool i29, bool i30, bool i31, bool i32, bool i33, bool i34, bool i35, bool i36, bool i37, bool i38, bool i39, bool i40, bool i41, bool i42, bool i43, bool i44, bool i45, bool i46, bool i47, bool i48, bool i49, bool i50, bool i51, bool i52, bool i53, bool i54, bool i55, bool i56, bool i57, bool i58, bool i59, bool i60, bool i61, bool i62, bool i63, bool i64, bool i65, bool i66, bool i67, bool i68, bool i69, bool i70, bool i71, bool i72, bool i73, bool i74, bool i75, bool i76); \
	NAME##_##cus_equal_list (const NAME* o, const char* d, const char* c, Manip m, NAME##_enum i1, NAME##_enum i2, NAME##_enum i3, NAME##_enum i4, NAME##_enum i5, NAME##_enum i6, NAME##_enum i7, NAME##_enum i8, NAME##_enum i9, NAME##_enum i10, NAME##_enum i11, NAME##_enum i12, NAME##_enum i13, NAME##_enum i14, NAME##_enum i15, NAME##_enum i16, NAME##_enum i17, NAME##_enum i18, NAME##_enum i19, NAME##_enum i20, NAME##_enum i21, NAME##_enum i22, NAME##_enum i23, NAME##_enum i24, NAME##_enum i25, NAME##_enum i26, NAME##_enum i27, NAME##_enum i28, NAME##_enum i29, NAME##_enum i30, NAME##_enum i31, NAME##_enum i32, NAME##_enum i33, NAME##_enum i34, NAME##_enum i35, NAME##_enum i36, NAME##_enum i37, NAME##_enum i38, NAME##_enum i39, NAME##_enum i40, NAME##_enum i41, NAME##_enum i42, NAME##_enum i43, NAME##_enum i44, NAME##_enum i45, NAME##_enum i46, NAME##_enum i47, NAME##_enum i48, NAME##_enum i49, NAME##_enum i50, NAME##_enum i51, NAME##_enum i52, NAME##_enum i53, NAME##_enum i54, NAME##_enum i55, NAME##_enum i56, NAME##_enum i57, NAME##_enum i58, NAME##_enum i59, NAME##_enum i60, NAME##_enum i61, NAME##_enum i62, NAME##_enum i63, NAME##_enum i64, NAME##_enum i65, NAME##_enum i66, NAME##_enum i67, NAME##_enum i68, NAME##_enum i69, NAME##_enum i70, NAME##_enum i71, NAME##_enum i72, NAME##_enum i73, NAME##_enum i74, NAME##_enum i75, NAME##_enum i76); \
	NAME##_##cus_equal_list (const NAME* o, const char* d, const char* c, Manip m, std::vector<bool> *i) :\
	obj(o), include(i), del_vector(false), delim(d), comp(c), manip(m) { }\
	};\
	template <mysqlpp::sql_dummy_type dummy> int sql_compare_##NAME(const NAME&, const NAME&);\
	struct NAME {\
    T1 I1;\
    T2 I2;\
    T3 I3;\
    T4 I4;\
    T5 I5;\
    T6 I6;\
    T7 I7;\
    T8 I8;\
    T9 I9;\
    T10 I10;\
    T11 I11;\
    T12 I12;\
    T13 I13;\
    T14 I14;\
    T15 I15;\
    T16 I16;\
    T17 I17;\
    T18 I18;\
    T19 I19;\
    T20 I20;\
    T21 I21;\
    T22 I22;\
    T23 I23;\
    T24 I24;\
    T25 I25;\
    T26 I26;\
    T27 I27;\
    T28 I28;\
    T29 I29;\
    T30 I30;\
    T31 I31;\
    T32 I32;\
    T33 I33;\
    T34 I34;\
    T35 I35;\
    T36 I36;\
    T37 I37;\
    T38 I38;\
    T39 I39;\
    T40 I40;\
    T41 I41;\
    T42 I42;\
    T43 I43;\
    T44 I44;\
    T45 I45;\
    T46 I46;\
    T47 I47;\
    T48 I48;\
    T49 I49;\
    T50 I50;\
    T51 I51;\
    T52 I52;\
    T53 I53;\
    T54 I54;\
    T55 I55;\
    T56 I56;\
    T57 I57;\
    T58 I58;\
    T59 I59;\
    T60 I60;\
    T61 I61;\
    T62 I62;\
    T63 I63;\
    T64 I64;\
    T65 I65;\
    T66 I66;\
    T67 I67;\
    T68 I68;\
    T69 I69;\
    T70 I70;\
    T71 I71;\
    T72 I72;\
    T73 I73;\
    T74 I74;\
    T75 I75;\
    T76 I76; \
	NAME() : table_override_(0) { }\
	NAME(const mysqlpp::Row& row);\
	void set(const mysqlpp::Row &row);\
	sql_compare_define_##CMP(NAME, T1, I1, T2, I2, T3, I3, T4, I4, T5, I5, T6, I6, T7, I7, T8, I8, T9, I9, T10, I10, T11, I11, T12, I12, T13, I13, T14, I14, T15, I15, T16, I16, T17, I17, T18, I18, T19, I19, T20, I20, T21, I21, T22, I22, T23, I23, T24, I24, T25, I25, T26, I26, T27, I27, T28, I28, T29, I29, T30, I30, T31, I31, T32, I32, T33, I33, T34, I34, T35, I35, T36, I36, T37, I37, T38, I38, T39, I39, T40, I40, T41, I41, T42, I42, T43, I43, T44, I44, T45, I45, T46, I46, T47, I47, T48, I48, T49, I49, T50, I50, T51, I51, T52, I52, T53, I53, T54, I54, T55, I55, T56, I56, T57, I57, T58, I58, T59, I59, T60, I60, T61, I61, T62, I62, T63, I63, T64, I64, T65, I65, T66, I66, T67, I67, T68, I68, T69, I69, T70, I70, T71, I71, T72, I72, T73, I73, T74, I74, T75, I75, T76, I76, 0, 0)\
	sql_construct_define_##CONTR(NAME, T1, I1, T2, I2, T3, I3, T4, I4, T5, I5, T6, I6, T7, I7, T8, I8, T9, I9, T10, I10, T11, I11, T12, I12, T13, I13, T14, I14, T15, I15, T16, I16, T17, I17, T18, I18, T19, I19, T20, I20, T21, I21, T22, I22, T23, I23, T24, I24, T25, I25, T26, I26, T27, I27, T28, I28, T29, I29, T30, I30, T31, I31, T32, I32, T33, I33, T34, I34, T35, I35, T36, I36, T37, I37, T38, I38, T39, I39, T40, I40, T41, I41, T42, I42, T43, I43, T44, I44, T45, I45, T46, I46, T47, I47, T48, I48, T49, I49, T50, I50, T51, I51, T52, I52, T53, I53, T54, I54, T55, I55, T56, I56, T57, I57, T58, I58, T59, I59, T60, I60, T61, I61, T62, I62, T63, I63, T64, I64, T65, I65, T66, I66, T67, I67, T68, I68, T69, I69, T70, I70, T71, I71, T72, I72, T73, I73, T74, I74, T75, I75, T76, I76, 0, 0)\
	static const char* names[];\
	static void table(const char* t) { table_ = t; }\
	const char* table() const\
			{ return table_override_ ? table_override_ : NAME::table_; }\
	void instance_table(const char* t) { table_override_ = t; }\
	NAME##_value_list<mysqlpp::quote_type0> value_list() const {\
		return value_list(",", mysqlpp::quote);}\
	NAME##_value_list<mysqlpp::quote_type0> value_list(const char* d) const {\
		return value_list(d, mysqlpp::quote);}\
	template <class Manip>\
	NAME##_value_list<Manip> value_list(const char* d, Manip m) const;\
	NAME##_field_list<mysqlpp::do_nothing_type0> field_list() const {\
		return field_list(",", mysqlpp::do_nothing);}\
	NAME##_field_list<mysqlpp::do_nothing_type0> field_list(const char* d) const {\
		return field_list(d, mysqlpp::do_nothing);}\
	template <class Manip>\
	NAME##_field_list<Manip> field_list(const char* d, Manip m) const;\
	NAME##_equal_list<mysqlpp::quote_type0> equal_list(const char* d = ",",\
			const char* c = " = ") const\
			{ return equal_list(d, c, mysqlpp::quote); }\
	template <class Manip>\
	NAME##_equal_list<Manip> equal_list(const char* d, const char* c, Manip m) const;\
	/* cus_data */\
	NAME##_cus_value_list<mysqlpp::quote_type0> value_list(bool i1, bool i2 = false, bool i3 = false, bool i4 = false, bool i5 = false, bool i6 = false, bool i7 = false, bool i8 = false, bool i9 = false, bool i10 = false, bool i11 = false, bool i12 = false, bool i13 = false, bool i14 = false, bool i15 = false, bool i16 = false, bool i17 = false, bool i18 = false, bool i19 = false, bool i20 = false, bool i21 = false, bool i22 = false, bool i23 = false, bool i24 = false, bool i25 = false, bool i26 = false, bool i27 = false, bool i28 = false, bool i29 = false, bool i30 = false, bool i31 = false, bool i32 = false, bool i33 = false, bool i34 = false, bool i35 = false, bool i36 = false, bool i37 = false, bool i38 = false, bool i39 = false, bool i40 = false, bool i41 = false, bool i42 = false, bool i43 = false, bool i44 = false, bool i45 = false, bool i46 = false, bool i47 = false, bool i48 = false, bool i49 = false, bool i50 = false, bool i51 = false, bool i52 = false, bool i53 = false, bool i54 = false, bool i55 = false, bool i56 = false, bool i57 = false, bool i58 = false, bool i59 = false, bool i60 = false, bool i61 = false, bool i62 = false, bool i63 = false, bool i64 = false, bool i65 = false, bool i66 = false, bool i67 = false, bool i68 = false, bool i69 = false, bool i70 = false, bool i71 = false, bool i72 = false, bool i73 = false, bool i74 = false, bool i75 = false, bool i76 = false) const\
			{ return value_list(",", mysqlpp::quote, i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12, i13, i14, i15, i16, i17, i18, i19, i20, i21, i22, i23, i24, i25, i26, i27, i28, i29, i30, i31, i32, i33, i34, i35, i36, i37, i38, i39, i40, i41, i42, i43, i44, i45, i46, i47, i48, i49, i50, i51, i52, i53, i54, i55, i56, i57, i58, i59, i60, i61, i62, i63, i64, i65, i66, i67, i68, i69, i70, i71, i72, i73, i74, i75, i76); }\
	NAME##_cus_value_list<mysqlpp::quote_type0> value_list(NAME##_enum i1, NAME##_enum i2 = NAME##_NULL, NAME##_enum i3 = NAME##_NULL, NAME##_enum i4 = NAME##_NULL, NAME##_enum i5 = NAME##_NULL, NAME##_enum i6 = NAME##_NULL, NAME##_enum i7 = NAME##_NULL, NAME##_enum i8 = NAME##_NULL, NAME##_enum i9 = NAME##_NULL, NAME##_enum i10 = NAME##_NULL, NAME##_enum i11 = NAME##_NULL, NAME##_enum i12 = NAME##_NULL, NAME##_enum i13 = NAME##_NULL, NAME##_enum i14 = NAME##_NULL, NAME##_enum i15 = NAME##_NULL, NAME##_enum i16 = NAME##_NULL, NAME##_enum i17 = NAME##_NULL, NAME##_enum i18 = NAME##_NULL, NAME##_enum i19 = NAME##_NULL, NAME##_enum i20 = NAME##_NULL, NAME##_enum i21 = NAME##_NULL, NAME##_enum i22 = NAME##_NULL, NAME##_enum i23 = NAME##_NULL, NAME##_enum i24 = NAME##_NULL, NAME##_enum i25 = NAME##_NULL, NAME##_enum i26 = NAME##_NULL, NAME##_enum i27 = NAME##_NULL, NAME##_enum i28 = NAME##_NULL, NAME##_enum i29 = NAME##_NULL, NAME##_enum i30 = NAME##_NULL, NAME##_enum i31 = NAME##_NULL, NAME##_enum i32 = NAME##_NULL, NAME##_enum i33 = NAME##_NULL, NAME##_enum i34 = NAME##_NULL, NAME##_enum i35 = NAME##_NULL, NAME##_enum i36 = NAME##_NULL, NAME##_enum i37 = NAME##_NULL, NAME##_enum i38 = NAME##_NULL, NAME##_enum i39 = NAME##_NULL, NAME##_enum i40 = NAME##_NULL, NAME##_enum i41 = NAME##_NULL, NAME##_enum i42 = NAME##_NULL, NAME##_enum i43 = NAME##_NULL, NAME##_enum i44 = NAME##_NULL, NAME##_enum i45 = NAME##_NULL, NAME##_enum i46 = NAME##_NULL, NAME##_enum i47 = NAME##_NULL, NAME##_enum i48 = NAME##_NULL, NAME##_enum i49 = NAME##_NULL, NAME##_enum i50 = NAME##_NULL, NAME##_enum i51 = NAME##_NULL, NAME##_enum i52 = NAME##_NULL, NAME##_enum i53 = NAME##_NULL, NAME##_enum i54 = NAME##_NULL, NAME##_enum i55 = NAME##_NULL, NAME##_enum i56 = NAME##_NULL, NAME##_enum i57 = NAME##_NULL, NAME##_enum i58 = NAME##_NULL, NAME##_enum i59 = NAME##_NULL, NAME##_enum i60 = NAME##_NULL, NAME##_enum i61 = NAME##_NULL, NAME##_enum i62 = NAME##_NULL, NAME##_enum i63 = NAME##_NULL, NAME##_enum i64 = NAME##_NULL, NAME##_enum i65 = NAME##_NULL, NAME##_enum i66 = NAME##_NULL, NAME##_enum i67 = NAME##_NULL, NAME##_enum i68 = NAME##_NULL, NAME##_enum i69 = NAME##_NULL, NAME##_enum i70 = NAME##_NULL, NAME##_enum i71 = NAME##_NULL, NAME##_enum i72 = NAME##_NULL, NAME##_enum i73 = NAME##_NULL, NAME##_enum i74 = NAME##_NULL, NAME##_enum i75 = NAME##_NULL, NAME##_enum i76 = NAME##_NULL) const\
			{ return value_list(",", mysqlpp::quote, i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12, i13, i14, i15, i16, i17, i18, i19, i20, i21, i22, i23, i24, i25, i26, i27, i28, i29, i30, i31, i32, i33, i34, i35, i36, i37, i38, i39, i40, i41, i42, i43, i44, i45, i46, i47, i48, i49, i50, i51, i52, i53, i54, i55, i56, i57, i58, i59, i60, i61, i62, i63, i64, i65, i66, i67, i68, i69, i70, i71, i72, i73, i74, i75, i76); }\
	NAME##_cus_value_list<mysqlpp::quote_type0> value_list(std::vector<bool> *i) const\
			{ return value_list(",", mysqlpp::quote, i); }\
	NAME##_cus_value_list<mysqlpp::quote_type0> value_list(mysqlpp::sql_cmp_type sc) const\
			{ return value_list(",", mysqlpp::quote, sc); }\
	NAME##_cus_value_list<mysqlpp::quote_type0> value_list(const char* d, bool i1, bool i2 = false, bool i3 = false, bool i4 = false, bool i5 = false, bool i6 = false, bool i7 = false, bool i8 = false, bool i9 = false, bool i10 = false, bool i11 = false, bool i12 = false, bool i13 = false, bool i14 = false, bool i15 = false, bool i16 = false, bool i17 = false, bool i18 = false, bool i19 = false, bool i20 = false, bool i21 = false, bool i22 = false, bool i23 = false, bool i24 = false, bool i25 = false, bool i26 = false, bool i27 = false, bool i28 = false, bool i29 = false, bool i30 = false, bool i31 = false, bool i32 = false, bool i33 = false, bool i34 = false, bool i35 = false, bool i36 = false, bool i37 = false, bool i38 = false, bool i39 = false, bool i40 = false, bool i41 = false, bool i42 = false, bool i43 = false, bool i44 = false, bool i45 = false, bool i46 = false, bool i47 = false, bool i48 = false, bool i49 = false, bool i50 = false, bool i51 = false, bool i52 = false, bool i53 = false, bool i54 = false, bool i55 = false, bool i56 = false, bool i57 = false, bool i58 = false, bool i59 = false, bool i60 = false, bool i61 = false, bool i62 = false, bool i63 = false, bool i64 = false, bool i65 = false, bool i66 = false, bool i67 = false, bool i68 = false, bool i69 = false, bool i70 = false, bool i71 = false, bool i72 = false, bool i73 = false, bool i74 = false, bool i75 = false, bool i76 = false) const\
			{ return value_list(d, mysqlpp::quote, i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12, i13, i14, i15, i16, i17, i18, i19, i20, i21, i22, i23, i24, i25, i26, i27, i28, i29, i30, i31, i32, i33, i34, i35, i36, i37, i38, i39, i40, i41, i42, i43, i44, i45, i46, i47, i48, i49, i50, i51, i52, i53, i54, i55, i56, i57, i58, i59, i60, i61, i62, i63, i64, i65, i66, i67, i68, i69, i70, i71, i72, i73, i74, i75, i76); }\
	NAME##_cus_value_list<mysqlpp::quote_type0> value_list(const char* d, NAME##_enum i1, NAME##_enum i2 = NAME##_NULL, NAME##_enum i3 = NAME##_NULL, NAME##_enum i4 = NAME##_NULL, NAME##_enum i5 = NAME##_NULL, NAME##_enum i6 = NAME##_NULL, NAME##_enum i7 = NAME##_NULL, NAME##_enum i8 = NAME##_NULL, NAME##_enum i9 = NAME##_NULL, NAME##_enum i10 = NAME##_NULL, NAME##_enum i11 = NAME##_NULL, NAME##_enum i12 = NAME##_NULL, NAME##_enum i13 = NAME##_NULL, NAME##_enum i14 = NAME##_NULL, NAME##_enum i15 = NAME##_NULL, NAME##_enum i16 = NAME##_NULL, NAME##_enum i17 = NAME##_NULL, NAME##_enum i18 = NAME##_NULL, NAME##_enum i19 = NAME##_NULL, NAME##_enum i20 = NAME##_NULL, NAME##_enum i21 = NAME##_NULL, NAME##_enum i22 = NAME##_NULL, NAME##_enum i23 = NAME##_NULL, NAME##_enum i24 = NAME##_NULL, NAME##_enum i25 = NAME##_NULL, NAME##_enum i26 = NAME##_NULL, NAME##_enum i27 = NAME##_NULL, NAME##_enum i28 = NAME##_NULL, NAME##_enum i29 = NAME##_NULL, NAME##_enum i30 = NAME##_NULL, NAME##_enum i31 = NAME##_NULL, NAME##_enum i32 = NAME##_NULL, NAME##_enum i33 = NAME##_NULL, NAME##_enum i34 = NAME##_NULL, NAME##_enum i35 = NAME##_NULL, NAME##_enum i36 = NAME##_NULL, NAME##_enum i37 = NAME##_NULL, NAME##_enum i38 = NAME##_NULL, NAME##_enum i39 = NAME##_NULL, NAME##_enum i40 = NAME##_NULL, NAME##_enum i41 = NAME##_NULL, NAME##_enum i42 = NAME##_NULL, NAME##_enum i43 = NAME##_NULL, NAME##_enum i44 = NAME##_NULL, NAME##_enum i45 = NAME##_NULL, NAME##_enum i46 = NAME##_NULL, NAME##_enum i47 = NAME##_NULL, NAME##_enum i48 = NAME##_NULL, NAME##_enum i49 = NAME##_NULL, NAME##_enum i50 = NAME##_NULL, NAME##_enum i51 = NAME##_NULL, NAME##_enum i52 = NAME##_NULL, NAME##_enum i53 = NAME##_NULL, NAME##_enum i54 = NAME##_NULL, NAME##_enum i55 = NAME##_NULL, NAME##_enum i56 = NAME##_NULL, NAME##_enum i57 = NAME##_NULL, NAME##_enum i58 = NAME##_NULL, NAME##_enum i59 = NAME##_NULL, NAME##_enum i60 = NAME##_NULL, NAME##_enum i61 = NAME##_NULL, NAME##_enum i62 = NAME##_NULL, NAME##_enum i63 = NAME##_NULL, NAME##_enum i64 = NAME##_NULL, NAME##_enum i65 = NAME##_NULL, NAME##_enum i66 = NAME##_NULL, NAME##_enum i67 = NAME##_NULL, NAME##_enum i68 = NAME##_NULL, NAME##_enum i69 = NAME##_NULL, NAME##_enum i70 = NAME##_NULL, NAME##_enum i71 = NAME##_NULL, NAME##_enum i72 = NAME##_NULL, NAME##_enum i73 = NAME##_NULL, NAME##_enum i74 = NAME##_NULL, NAME##_enum i75 = NAME##_NULL, NAME##_enum i76 = NAME##_NULL) const\
			{ return value_list(d, mysqlpp::quote, i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12, i13, i14, i15, i16, i17, i18, i19, i20, i21, i22, i23, i24, i25, i26, i27, i28, i29, i30, i31, i32, i33, i34, i35, i36, i37, i38, i39, i40, i41, i42, i43, i44, i45, i46, i47, i48, i49, i50, i51, i52, i53, i54, i55, i56, i57, i58, i59, i60, i61, i62, i63, i64, i65, i66, i67, i68, i69, i70, i71, i72, i73, i74, i75, i76); }\
	NAME##_cus_value_list<mysqlpp::quote_type0> value_list(const char* d,\
			std::vector<bool> *i) const\
			{ return value_list(d, mysqlpp::quote, i); }\
	NAME##_cus_value_list<mysqlpp::quote_type0> value_list(const char* d,\
			mysqlpp::sql_cmp_type sc) const\
			{ return value_list(d, mysqlpp::quote, sc); }\
	template <class Manip>\
	NAME##_cus_value_list<Manip> value_list(const char* d, Manip m,\
			bool i1, bool i2 = false, bool i3 = false, bool i4 = false, bool i5 = false, bool i6 = false, bool i7 = false, bool i8 = false, bool i9 = false, bool i10 = false, bool i11 = false, bool i12 = false, bool i13 = false, bool i14 = false, bool i15 = false, bool i16 = false, bool i17 = false, bool i18 = false, bool i19 = false, bool i20 = false, bool i21 = false, bool i22 = false, bool i23 = false, bool i24 = false, bool i25 = false, bool i26 = false, bool i27 = false, bool i28 = false, bool i29 = false, bool i30 = false, bool i31 = false, bool i32 = false, bool i33 = false, bool i34 = false, bool i35 = false, bool i36 = false, bool i37 = false, bool i38 = false, bool i39 = false, bool i40 = false, bool i41 = false, bool i42 = false, bool i43 = false, bool i44 = false, bool i45 = false, bool i46 = false, bool i47 = false, bool i48 = false, bool i49 = false, bool i50 = false, bool i51 = false, bool i52 = false, bool i53 = false, bool i54 = false, bool i55 = false, bool i56 = false, bool i57 = false, bool i58 = false, bool i59 = false, bool i60 = false, bool i61 = false, bool i62 = false, bool i63 = false, bool i64 = false, bool i65 = false, bool i66 = false, bool i67 = false, bool i68 = false, bool i69 = false, bool i70 = false, bool i71 = false, bool i72 = false, bool i73 = false, bool i74 = false, bool i75 = false, bool i76 = false) const;\
	template <class Manip>\
	NAME##_cus_value_list<Manip> value_list(const char* d, Manip m,\
			NAME##_enum i1, NAME##_enum i2 = NAME##_NULL, NAME##_enum i3 = NAME##_NULL, NAME##_enum i4 = NAME##_NULL, NAME##_enum i5 = NAME##_NULL, NAME##_enum i6 = NAME##_NULL, NAME##_enum i7 = NAME##_NULL, NAME##_enum i8 = NAME##_NULL, NAME##_enum i9 = NAME##_NULL, NAME##_enum i10 = NAME##_NULL, NAME##_enum i11 = NAME##_NULL, NAME##_enum i12 = NAME##_NULL, NAME##_enum i13 = NAME##_NULL, NAME##_enum i14 = NAME##_NULL, NAME##_enum i15 = NAME##_NULL, NAME##_enum i16 = NAME##_NULL, NAME##_enum i17 = NAME##_NULL, NAME##_enum i18 = NAME##_NULL, NAME##_enum i19 = NAME##_NULL, NAME##_enum i20 = NAME##_NULL, NAME##_enum i21 = NAME##_NULL, NAME##_enum i22 = NAME##_NULL, NAME##_enum i23 = NAME##_NULL, NAME##_enum i24 = NAME##_NULL, NAME##_enum i25 = NAME##_NULL, NAME##_enum i26 = NAME##_NULL, NAME##_enum i27 = NAME##_NULL, NAME##_enum i28 = NAME##_NULL, NAME##_enum i29 = NAME##_NULL, NAME##_enum i30 = NAME##_NULL, NAME##_enum i31 = NAME##_NULL, NAME##_enum i32 = NAME##_NULL, NAME##_enum i33 = NAME##_NULL, NAME##_enum i34 = NAME##_NULL, NAME##_enum i35 = NAME##_NULL, NAME##_enum i36 = NAME##_NULL, NAME##_enum i37 = NAME##_NULL, NAME##_enum i38 = NAME##_NULL, NAME##_enum i39 = NAME##_NULL, NAME##_enum i40 = NAME##_NULL, NAME##_enum i41 = NAME##_NULL, NAME##_enum i42 = NAME##_NULL, NAME##_enum i43 = NAME##_NULL, NAME##_enum i44 = NAME##_NULL, NAME##_enum i45 = NAME##_NULL, NAME##_enum i46 = NAME##_NULL, NAME##_enum i47 = NAME##_NULL, NAME##_enum i48 = NAME##_NULL, NAME##_enum i49 = NAME##_NULL, NAME##_enum i50 = NAME##_NULL, NAME##_enum i51 = NAME##_NULL, NAME##_enum i52 = NAME##_NULL, NAME##_enum i53 = NAME##_NULL, NAME##_enum i54 = NAME##_NULL, NAME##_enum i55 = NAME##_NULL, NAME##_enum i56 = NAME##_NULL, NAME##_enum i57 = NAME##_NULL, NAME##_enum i58 = NAME##_NULL, NAME##_enum i59 = NAME##_NULL, NAME##_enum i60 = NAME##_NULL, NAME##_enum i61 = NAME##_NULL, NAME##_enum i62 = NAME##_NULL, NAME##_enum i63 = NAME##_NULL, NAME##_enum i64 = NAME##_NULL, NAME##_enum i65 = NAME##_NULL, NAME##_enum i66 = NAME##_NULL, NAME##_enum i67 = NAME##_NULL, NAME##_enum i68 = NAME##_NULL, NAME##_enum i69 = NAME##_NULL, NAME##_enum i70 = NAME##_NULL, NAME##_enum i71 = NAME##_NULL, NAME##_enum i72 = NAME##_NULL, NAME##_enum i73 = NAME##_NULL, NAME##_enum i74 = NAME##_NULL, NAME##_enum i75 = NAME##_NULL, NAME##_enum i76 = NAME##_NULL) const;\
	template <class Manip>\
	NAME##_cus_value_list<Manip> value_list(const char* d, Manip m,\
			std::vector<bool>* i) const;\
	template <class Manip>\
	NAME##_cus_value_list<Manip> value_list(const char* d, Manip m, \
			mysqlpp::sql_cmp_type sc) const;\
	/* cus field */\
	NAME##_cus_field_list<mysqlpp::do_nothing_type0> field_list(bool i1, bool i2 = false, bool i3 = false, bool i4 = false, bool i5 = false, bool i6 = false, bool i7 = false, bool i8 = false, bool i9 = false, bool i10 = false, bool i11 = false, bool i12 = false, bool i13 = false, bool i14 = false, bool i15 = false, bool i16 = false, bool i17 = false, bool i18 = false, bool i19 = false, bool i20 = false, bool i21 = false, bool i22 = false, bool i23 = false, bool i24 = false, bool i25 = false, bool i26 = false, bool i27 = false, bool i28 = false, bool i29 = false, bool i30 = false, bool i31 = false, bool i32 = false, bool i33 = false, bool i34 = false, bool i35 = false, bool i36 = false, bool i37 = false, bool i38 = false, bool i39 = false, bool i40 = false, bool i41 = false, bool i42 = false, bool i43 = false, bool i44 = false, bool i45 = false, bool i46 = false, bool i47 = false, bool i48 = false, bool i49 = false, bool i50 = false, bool i51 = false, bool i52 = false, bool i53 = false, bool i54 = false, bool i55 = false, bool i56 = false, bool i57 = false, bool i58 = false, bool i59 = false, bool i60 = false, bool i61 = false, bool i62 = false, bool i63 = false, bool i64 = false, bool i65 = false, bool i66 = false, bool i67 = false, bool i68 = false, bool i69 = false, bool i70 = false, bool i71 = false, bool i72 = false, bool i73 = false, bool i74 = false, bool i75 = false, bool i76 = false) const \
			{ return field_list(",", mysqlpp::do_nothing, i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12, i13, i14, i15, i16, i17, i18, i19, i20, i21, i22, i23, i24, i25, i26, i27, i28, i29, i30, i31, i32, i33, i34, i35, i36, i37, i38, i39, i40, i41, i42, i43, i44, i45, i46, i47, i48, i49, i50, i51, i52, i53, i54, i55, i56, i57, i58, i59, i60, i61, i62, i63, i64, i65, i66, i67, i68, i69, i70, i71, i72, i73, i74, i75, i76); }\
	NAME##_cus_field_list<mysqlpp::do_nothing_type0> field_list(NAME##_enum i1, NAME##_enum i2 = NAME##_NULL, NAME##_enum i3 = NAME##_NULL, NAME##_enum i4 = NAME##_NULL, NAME##_enum i5 = NAME##_NULL, NAME##_enum i6 = NAME##_NULL, NAME##_enum i7 = NAME##_NULL, NAME##_enum i8 = NAME##_NULL, NAME##_enum i9 = NAME##_NULL, NAME##_enum i10 = NAME##_NULL, NAME##_enum i11 = NAME##_NULL, NAME##_enum i12 = NAME##_NULL, NAME##_enum i13 = NAME##_NULL, NAME##_enum i14 = NAME##_NULL, NAME##_enum i15 = NAME##_NULL, NAME##_enum i16 = NAME##_NULL, NAME##_enum i17 = NAME##_NULL, NAME##_enum i18 = NAME##_NULL, NAME##_enum i19 = NAME##_NULL, NAME##_enum i20 = NAME##_NULL, NAME##_enum i21 = NAME##_NULL, NAME##_enum i22 = NAME##_NULL, NAME##_enum i23 = NAME##_NULL, NAME##_enum i24 = NAME##_NULL, NAME##_enum i25 = NAME##_NULL, NAME##_enum i26 = NAME##_NULL, NAME##_enum i27 = NAME##_NULL, NAME##_enum i28 = NAME##_NULL, NAME##_enum i29 = NAME##_NULL, NAME##_enum i30 = NAME##_NULL, NAME##_enum i31 = NAME##_NULL, NAME##_enum i32 = NAME##_NULL, NAME##_enum i33 = NAME##_NULL, NAME##_enum i34 = NAME##_NULL, NAME##_enum i35 = NAME##_NULL, NAME##_enum i36 = NAME##_NULL, NAME##_enum i37 = NAME##_NULL, NAME##_enum i38 = NAME##_NULL, NAME##_enum i39 = NAME##_NULL, NAME##_enum i40 = NAME##_NULL, NAME##_enum i41 = NAME##_NULL, NAME##_enum i42 = NAME##_NULL, NAME##_enum i43 = NAME##_NULL, NAME##_enum i44 = NAME##_NULL, NAME##_enum i45 = NAME##_NULL, NAME##_enum i46 = NAME##_NULL, NAME##_enum i47 = NAME##_NULL, NAME##_enum i48 = NAME##_NULL, NAME##_enum i49 = NAME##_NULL, NAME##_enum i50 = NAME##_NULL, NAME##_enum i51 = NAME##_NULL, NAME##_enum i52 = NAME##_NULL, NAME##_enum i53 = NAME##_NULL, NAME##_enum i54 = NAME##_NULL, NAME##_enum i55 = NAME##_NULL, NAME##_enum i56 = NAME##_NULL, NAME##_enum i57 = NAME##_NULL, NAME##_enum i58 = NAME##_NULL, NAME##_enum i59 = NAME##_NULL, NAME##_enum i60 = NAME##_NULL, NAME##_enum i61 = NAME##_NULL, NAME##_enum i62 = NAME##_NULL, NAME##_enum i63 = NAME##_NULL, NAME##_enum i64 = NAME##_NULL, NAME##_enum i65 = NAME##_NULL, NAME##_enum i66 = NAME##_NULL, NAME##_enum i67 = NAME##_NULL, NAME##_enum i68 = NAME##_NULL, NAME##_enum i69 = NAME##_NULL, NAME##_enum i70 = NAME##_NULL, NAME##_enum i71 = NAME##_NULL, NAME##_enum i72 = NAME##_NULL, NAME##_enum i73 = NAME##_NULL, NAME##_enum i74 = NAME##_NULL, NAME##_enum i75 = NAME##_NULL, NAME##_enum i76 = NAME##_NULL) const\
			{ return field_list(",", mysqlpp::do_nothing, i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12, i13, i14, i15, i16, i17, i18, i19, i20, i21, i22, i23, i24, i25, i26, i27, i28, i29, i30, i31, i32, i33, i34, i35, i36, i37, i38, i39, i40, i41, i42, i43, i44, i45, i46, i47, i48, i49, i50, i51, i52, i53, i54, i55, i56, i57, i58, i59, i60, i61, i62, i63, i64, i65, i66, i67, i68, i69, i70, i71, i72, i73, i74, i75, i76); }\
	NAME##_cus_field_list<mysqlpp::do_nothing_type0> field_list(std::vector<bool> *i) const\
			{ return field_list(",", mysqlpp::do_nothing, i); }\
	NAME##_cus_field_list<mysqlpp::do_nothing_type0> field_list(mysqlpp::sql_cmp_type sc) const\
			{ return field_list(",", mysqlpp::do_nothing, sc); }\
	NAME##_cus_field_list<mysqlpp::do_nothing_type0> field_list(const char* d,\
			bool i1, bool i2 = false, bool i3 = false, bool i4 = false, bool i5 = false, bool i6 = false, bool i7 = false, bool i8 = false, bool i9 = false, bool i10 = false, bool i11 = false, bool i12 = false, bool i13 = false, bool i14 = false, bool i15 = false, bool i16 = false, bool i17 = false, bool i18 = false, bool i19 = false, bool i20 = false, bool i21 = false, bool i22 = false, bool i23 = false, bool i24 = false, bool i25 = false, bool i26 = false, bool i27 = false, bool i28 = false, bool i29 = false, bool i30 = false, bool i31 = false, bool i32 = false, bool i33 = false, bool i34 = false, bool i35 = false, bool i36 = false, bool i37 = false, bool i38 = false, bool i39 = false, bool i40 = false, bool i41 = false, bool i42 = false, bool i43 = false, bool i44 = false, bool i45 = false, bool i46 = false, bool i47 = false, bool i48 = false, bool i49 = false, bool i50 = false, bool i51 = false, bool i52 = false, bool i53 = false, bool i54 = false, bool i55 = false, bool i56 = false, bool i57 = false, bool i58 = false, bool i59 = false, bool i60 = false, bool i61 = false, bool i62 = false, bool i63 = false, bool i64 = false, bool i65 = false, bool i66 = false, bool i67 = false, bool i68 = false, bool i69 = false, bool i70 = false, bool i71 = false, bool i72 = false, bool i73 = false, bool i74 = false, bool i75 = false, bool i76 = false) const\
			{ return field_list(d, mysqlpp::do_nothing, i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12, i13, i14, i15, i16, i17, i18, i19, i20, i21, i22, i23, i24, i25, i26, i27, i28, i29, i30, i31, i32, i33, i34, i35, i36, i37, i38, i39, i40, i41, i42, i43, i44, i45, i46, i47, i48, i49, i50, i51, i52, i53, i54, i55, i56, i57, i58, i59, i60, i61, i62, i63, i64, i65, i66, i67, i68, i69, i70, i71, i72, i73, i74, i75, i76); }\
	NAME##_cus_field_list<mysqlpp::do_nothing_type0> field_list(const char* d,\
			NAME##_enum i1, NAME##_enum i2 = NAME##_NULL, NAME##_enum i3 = NAME##_NULL, NAME##_enum i4 = NAME##_NULL, NAME##_enum i5 = NAME##_NULL, NAME##_enum i6 = NAME##_NULL, NAME##_enum i7 = NAME##_NULL, NAME##_enum i8 = NAME##_NULL, NAME##_enum i9 = NAME##_NULL, NAME##_enum i10 = NAME##_NULL, NAME##_enum i11 = NAME##_NULL, NAME##_enum i12 = NAME##_NULL, NAME##_enum i13 = NAME##_NULL, NAME##_enum i14 = NAME##_NULL, NAME##_enum i15 = NAME##_NULL, NAME##_enum i16 = NAME##_NULL, NAME##_enum i17 = NAME##_NULL, NAME##_enum i18 = NAME##_NULL, NAME##_enum i19 = NAME##_NULL, NAME##_enum i20 = NAME##_NULL, NAME##_enum i21 = NAME##_NULL, NAME##_enum i22 = NAME##_NULL, NAME##_enum i23 = NAME##_NULL, NAME##_enum i24 = NAME##_NULL, NAME##_enum i25 = NAME##_NULL, NAME##_enum i26 = NAME##_NULL, NAME##_enum i27 = NAME##_NULL, NAME##_enum i28 = NAME##_NULL, NAME##_enum i29 = NAME##_NULL, NAME##_enum i30 = NAME##_NULL, NAME##_enum i31 = NAME##_NULL, NAME##_enum i32 = NAME##_NULL, NAME##_enum i33 = NAME##_NULL, NAME##_enum i34 = NAME##_NULL, NAME##_enum i35 = NAME##_NULL, NAME##_enum i36 = NAME##_NULL, NAME##_enum i37 = NAME##_NULL, NAME##_enum i38 = NAME##_NULL, NAME##_enum i39 = NAME##_NULL, NAME##_enum i40 = NAME##_NULL, NAME##_enum i41 = NAME##_NULL, NAME##_enum i42 = NAME##_NULL, NAME##_enum i43 = NAME##_NULL, NAME##_enum i44 = NAME##_NULL, NAME##_enum i45 = NAME##_NULL, NAME##_enum i46 = NAME##_NULL, NAME##_enum i47 = NAME##_NULL, NAME##_enum i48 = NAME##_NULL, NAME##_enum i49 = NAME##_NULL, NAME##_enum i50 = NAME##_NULL, NAME##_enum i51 = NAME##_NULL, NAME##_enum i52 = NAME##_NULL, NAME##_enum i53 = NAME##_NULL, NAME##_enum i54 = NAME##_NULL, NAME##_enum i55 = NAME##_NULL, NAME##_enum i56 = NAME##_NULL, NAME##_enum i57 = NAME##_NULL, NAME##_enum i58 = NAME##_NULL, NAME##_enum i59 = NAME##_NULL, NAME##_enum i60 = NAME##_NULL, NAME##_enum i61 = NAME##_NULL, NAME##_enum i62 = NAME##_NULL, NAME##_enum i63 = NAME##_NULL, NAME##_enum i64 = NAME##_NULL, NAME##_enum i65 = NAME##_NULL, NAME##_enum i66 = NAME##_NULL, NAME##_enum i67 = NAME##_NULL, NAME##_enum i68 = NAME##_NULL, NAME##_enum i69 = NAME##_NULL, NAME##_enum i70 = NAME##_NULL, NAME##_enum i71 = NAME##_NULL, NAME##_enum i72 = NAME##_NULL, NAME##_enum i73 = NAME##_NULL, NAME##_enum i74 = NAME##_NULL, NAME##_enum i75 = NAME##_NULL, NAME##_enum i76 = NAME##_NULL) const\
			{ return field_list(d, mysqlpp::do_nothing, i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12, i13, i14, i15, i16, i17, i18, i19, i20, i21, i22, i23, i24, i25, i26, i27, i28, i29, i30, i31, i32, i33, i34, i35, i36, i37, i38, i39, i40, i41, i42, i43, i44, i45, i46, i47, i48, i49, i50, i51, i52, i53, i54, i55, i56, i57, i58, i59, i60, i61, i62, i63, i64, i65, i66, i67, i68, i69, i70, i71, i72, i73, i74, i75, i76); }\
	NAME##_cus_field_list<mysqlpp::do_nothing_type0> field_list(const char* d,\
			std::vector<bool>* i) const\
			{ return field_list(d, mysqlpp::do_nothing, i); }\
	NAME##_cus_field_list<mysqlpp::do_nothing_type0> field_list(const char* d,\
			mysqlpp::sql_cmp_type sc) const\
			{ return field_list(d, mysqlpp::do_nothing, sc); }\
	template <class Manip>\
	NAME##_cus_field_list<Manip> field_list(const char* d, Manip m,\
			bool i1, bool i2 = false, bool i3 = false, bool i4 = false, bool i5 = false, bool i6 = false, bool i7 = false, bool i8 = false, bool i9 = false, bool i10 = false, bool i11 = false, bool i12 = false, bool i13 = false, bool i14 = false, bool i15 = false, bool i16 = false, bool i17 = false, bool i18 = false, bool i19 = false, bool i20 = false, bool i21 = false, bool i22 = false, bool i23 = false, bool i24 = false, bool i25 = false, bool i26 = false, bool i27 = false, bool i28 = false, bool i29 = false, bool i30 = false, bool i31 = false, bool i32 = false, bool i33 = false, bool i34 = false, bool i35 = false, bool i36 = false, bool i37 = false, bool i38 = false, bool i39 = false, bool i40 = false, bool i41 = false, bool i42 = false, bool i43 = false, bool i44 = false, bool i45 = false, bool i46 = false, bool i47 = false, bool i48 = false, bool i49 = false, bool i50 = false, bool i51 = false, bool i52 = false, bool i53 = false, bool i54 = false, bool i55 = false, bool i56 = false, bool i57 = false, bool i58 = false, bool i59 = false, bool i60 = false, bool i61 = false, bool i62 = false, bool i63 = false, bool i64 = false, bool i65 = false, bool i66 = false, bool i67 = false, bool i68 = false, bool i69 = false, bool i70 = false, bool i71 = false, bool i72 = false, bool i73 = false, bool i74 = false, bool i75 = false, bool i76 = false) const;\
	template <class Manip>\
	NAME##_cus_field_list<Manip> field_list(const char* d, Manip m,\
			NAME##_enum i1, NAME##_enum i2 = NAME##_NULL, NAME##_enum i3 = NAME##_NULL, NAME##_enum i4 = NAME##_NULL, NAME##_enum i5 = NAME##_NULL, NAME##_enum i6 = NAME##_NULL, NAME##_enum i7 = NAME##_NULL, NAME##_enum i8 = NAME##_NULL, NAME##_enum i9 = NAME##_NULL, NAME##_enum i10 = NAME##_NULL, NAME##_enum i11 = NAME##_NULL, NAME##_enum i12 = NAME##_NULL, NAME##_enum i13 = NAME##_NULL, NAME##_enum i14 = NAME##_NULL, NAME##_enum i15 = NAME##_NULL, NAME##_enum i16 = NAME##_NULL, NAME##_enum i17 = NAME##_NULL, NAME##_enum i18 = NAME##_NULL, NAME##_enum i19 = NAME##_NULL, NAME##_enum i20 = NAME##_NULL, NAME##_enum i21 = NAME##_NULL, NAME##_enum i22 = NAME##_NULL, NAME##_enum i23 = NAME##_NULL, NAME##_enum i24 = NAME##_NULL, NAME##_enum i25 = NAME##_NULL, NAME##_enum i26 = NAME##_NULL, NAME##_enum i27 = NAME##_NULL, NAME##_enum i28 = NAME##_NULL, NAME##_enum i29 = NAME##_NULL, NAME##_enum i30 = NAME##_NULL, NAME##_enum i31 = NAME##_NULL, NAME##_enum i32 = NAME##_NULL, NAME##_enum i33 = NAME##_NULL, NAME##_enum i34 = NAME##_NULL, NAME##_enum i35 = NAME##_NULL, NAME##_enum i36 = NAME##_NULL, NAME##_enum i37 = NAME##_NULL, NAME##_enum i38 = NAME##_NULL, NAME##_enum i39 = NAME##_NULL, NAME##_enum i40 = NAME##_NULL, NAME##_enum i41 = NAME##_NULL, NAME##_enum i42 = NAME##_NULL, NAME##_enum i43 = NAME##_NULL, NAME##_enum i44 = NAME##_NULL, NAME##_enum i45 = NAME##_NULL, NAME##_enum i46 = NAME##_NULL, NAME##_enum i47 = NAME##_NULL, NAME##_enum i48 = NAME##_NULL, NAME##_enum i49 = NAME##_NULL, NAME##_enum i50 = NAME##_NULL, NAME##_enum i51 = NAME##_NULL, NAME##_enum i52 = NAME##_NULL, NAME##_enum i53 = NAME##_NULL, NAME##_enum i54 = NAME##_NULL, NAME##_enum i55 = NAME##_NULL, NAME##_enum i56 = NAME##_NULL, NAME##_enum i57 = NAME##_NULL, NAME##_enum i58 = NAME##_NULL, NAME##_enum i59 = NAME##_NULL, NAME##_enum i60 = NAME##_NULL, NAME##_enum i61 = NAME##_NULL, NAME##_enum i62 = NAME##_NULL, NAME##_enum i63 = NAME##_NULL, NAME##_enum i64 = NAME##_NULL, NAME##_enum i65 = NAME##_NULL, NAME##_enum i66 = NAME##_NULL, NAME##_enum i67 = NAME##_NULL, NAME##_enum i68 = NAME##_NULL, NAME##_enum i69 = NAME##_NULL, NAME##_enum i70 = NAME##_NULL, NAME##_enum i71 = NAME##_NULL, NAME##_enum i72 = NAME##_NULL, NAME##_enum i73 = NAME##_NULL, NAME##_enum i74 = NAME##_NULL, NAME##_enum i75 = NAME##_NULL, NAME##_enum i76 = NAME##_NULL) const;\
	template <class Manip>\
	NAME##_cus_field_list<Manip> field_list(const char* d, Manip m,\
			std::vector<bool> *i) const;\
	template <class Manip>\
	NAME##_cus_field_list<Manip> field_list(const char* d, Manip m,\
			mysqlpp::sql_cmp_type sc) const;\
	/* cus equal */\
	NAME##_cus_equal_list<mysqlpp::quote_type0> equal_list(bool i1, bool i2 = false, bool i3 = false, bool i4 = false, bool i5 = false, bool i6 = false, bool i7 = false, bool i8 = false, bool i9 = false, bool i10 = false, bool i11 = false, bool i12 = false, bool i13 = false, bool i14 = false, bool i15 = false, bool i16 = false, bool i17 = false, bool i18 = false, bool i19 = false, bool i20 = false, bool i21 = false, bool i22 = false, bool i23 = false, bool i24 = false, bool i25 = false, bool i26 = false, bool i27 = false, bool i28 = false, bool i29 = false, bool i30 = false, bool i31 = false, bool i32 = false, bool i33 = false, bool i34 = false, bool i35 = false, bool i36 = false, bool i37 = false, bool i38 = false, bool i39 = false, bool i40 = false, bool i41 = false, bool i42 = false, bool i43 = false, bool i44 = false, bool i45 = false, bool i46 = false, bool i47 = false, bool i48 = false, bool i49 = false, bool i50 = false, bool i51 = false, bool i52 = false, bool i53 = false, bool i54 = false, bool i55 = false, bool i56 = false, bool i57 = false, bool i58 = false, bool i59 = false, bool i60 = false, bool i61 = false, bool i62 = false, bool i63 = false, bool i64 = false, bool i65 = false, bool i66 = false, bool i67 = false, bool i68 = false, bool i69 = false, bool i70 = false, bool i71 = false, bool i72 = false, bool i73 = false, bool i74 = false, bool i75 = false, bool i76 = false) const\
			{ return equal_list(",", " = ", mysqlpp::quote, i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12, i13, i14, i15, i16, i17, i18, i19, i20, i21, i22, i23, i24, i25, i26, i27, i28, i29, i30, i31, i32, i33, i34, i35, i36, i37, i38, i39, i40, i41, i42, i43, i44, i45, i46, i47, i48, i49, i50, i51, i52, i53, i54, i55, i56, i57, i58, i59, i60, i61, i62, i63, i64, i65, i66, i67, i68, i69, i70, i71, i72, i73, i74, i75, i76); }\
	NAME##_cus_equal_list<mysqlpp::quote_type0> equal_list(NAME##_enum i1, NAME##_enum i2 = NAME##_NULL, NAME##_enum i3 = NAME##_NULL, NAME##_enum i4 = NAME##_NULL, NAME##_enum i5 = NAME##_NULL, NAME##_enum i6 = NAME##_NULL, NAME##_enum i7 = NAME##_NULL, NAME##_enum i8 = NAME##_NULL, NAME##_enum i9 = NAME##_NULL, NAME##_enum i10 = NAME##_NULL, NAME##_enum i11 = NAME##_NULL, NAME##_enum i12 = NAME##_NULL, NAME##_enum i13 = NAME##_NULL, NAME##_enum i14 = NAME##_NULL, NAME##_enum i15 = NAME##_NULL, NAME##_enum i16 = NAME##_NULL, NAME##_enum i17 = NAME##_NULL, NAME##_enum i18 = NAME##_NULL, NAME##_enum i19 = NAME##_NULL, NAME##_enum i20 = NAME##_NULL, NAME##_enum i21 = NAME##_NULL, NAME##_enum i22 = NAME##_NULL, NAME##_enum i23 = NAME##_NULL, NAME##_enum i24 = NAME##_NULL, NAME##_enum i25 = NAME##_NULL, NAME##_enum i26 = NAME##_NULL, NAME##_enum i27 = NAME##_NULL, NAME##_enum i28 = NAME##_NULL, NAME##_enum i29 = NAME##_NULL, NAME##_enum i30 = NAME##_NULL, NAME##_enum i31 = NAME##_NULL, NAME##_enum i32 = NAME##_NULL, NAME##_enum i33 = NAME##_NULL, NAME##_enum i34 = NAME##_NULL, NAME##_enum i35 = NAME##_NULL, NAME##_enum i36 = NAME##_NULL, NAME##_enum i37 = NAME##_NULL, NAME##_enum i38 = NAME##_NULL, NAME##_enum i39 = NAME##_NULL, NAME##_enum i40 = NAME##_NULL, NAME##_enum i41 = NAME##_NULL, NAME##_enum i42 = NAME##_NULL, NAME##_enum i43 = NAME##_NULL, NAME##_enum i44 = NAME##_NULL, NAME##_enum i45 = NAME##_NULL, NAME##_enum i46 = NAME##_NULL, NAME##_enum i47 = NAME##_NULL, NAME##_enum i48 = NAME##_NULL, NAME##_enum i49 = NAME##_NULL, NAME##_enum i50 = NAME##_NULL, NAME##_enum i51 = NAME##_NULL, NAME##_enum i52 = NAME##_NULL, NAME##_enum i53 = NAME##_NULL, NAME##_enum i54 = NAME##_NULL, NAME##_enum i55 = NAME##_NULL, NAME##_enum i56 = NAME##_NULL, NAME##_enum i57 = NAME##_NULL, NAME##_enum i58 = NAME##_NULL, NAME##_enum i59 = NAME##_NULL, NAME##_enum i60 = NAME##_NULL, NAME##_enum i61 = NAME##_NULL, NAME##_enum i62 = NAME##_NULL, NAME##_enum i63 = NAME##_NULL, NAME##_enum i64 = NAME##_NULL, NAME##_enum i65 = NAME##_NULL, NAME##_enum i66 = NAME##_NULL, NAME##_enum i67 = NAME##_NULL, NAME##_enum i68 = NAME##_NULL, NAME##_enum i69 = NAME##_NULL, NAME##_enum i70 = NAME##_NULL, NAME##_enum i71 = NAME##_NULL, NAME##_enum i72 = NAME##_NULL, NAME##_enum i73 = NAME##_NULL, NAME##_enum i74 = NAME##_NULL, NAME##_enum i75 = NAME##_NULL, NAME##_enum i76 = NAME##_NULL) const\
			{ return equal_list(",", " = ", mysqlpp::quote, i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12, i13, i14, i15, i16, i17, i18, i19, i20, i21, i22, i23, i24, i25, i26, i27, i28, i29, i30, i31, i32, i33, i34, i35, i36, i37, i38, i39, i40, i41, i42, i43, i44, i45, i46, i47, i48, i49, i50, i51, i52, i53, i54, i55, i56, i57, i58, i59, i60, i61, i62, i63, i64, i65, i66, i67, i68, i69, i70, i71, i72, i73, i74, i75, i76); }\
	NAME##_cus_equal_list<mysqlpp::quote_type0> equal_list(std::vector<bool>* i) const\
			{ return equal_list(",", " = ", mysqlpp::quote, i); }\
	NAME##_cus_equal_list<mysqlpp::quote_type0> equal_list(mysqlpp::sql_cmp_type sc) const\
			{ return equal_list(",", " = ", mysqlpp::quote, sc); }\
	NAME##_cus_equal_list<mysqlpp::quote_type0> equal_list(const char* d, bool i1, bool i2 = false, bool i3 = false, bool i4 = false, bool i5 = false, bool i6 = false, bool i7 = false, bool i8 = false, bool i9 = false, bool i10 = false, bool i11 = false, bool i12 = false, bool i13 = false, bool i14 = false, bool i15 = false, bool i16 = false, bool i17 = false, bool i18 = false, bool i19 = false, bool i20 = false, bool i21 = false, bool i22 = false, bool i23 = false, bool i24 = false, bool i25 = false, bool i26 = false, bool i27 = false, bool i28 = false, bool i29 = false, bool i30 = false, bool i31 = false, bool i32 = false, bool i33 = false, bool i34 = false, bool i35 = false, bool i36 = false, bool i37 = false, bool i38 = false, bool i39 = false, bool i40 = false, bool i41 = false, bool i42 = false, bool i43 = false, bool i44 = false, bool i45 = false, bool i46 = false, bool i47 = false, bool i48 = false, bool i49 = false, bool i50 = false, bool i51 = false, bool i52 = false, bool i53 = false, bool i54 = false, bool i55 = false, bool i56 = false, bool i57 = false, bool i58 = false, bool i59 = false, bool i60 = false, bool i61 = false, bool i62 = false, bool i63 = false, bool i64 = false, bool i65 = false, bool i66 = false, bool i67 = false, bool i68 = false, bool i69 = false, bool i70 = false, bool i71 = false, bool i72 = false, bool i73 = false, bool i74 = false, bool i75 = false, bool i76 = false) const\
			{ return equal_list(d, " = ", mysqlpp::quote, i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12, i13, i14, i15, i16, i17, i18, i19, i20, i21, i22, i23, i24, i25, i26, i27, i28, i29, i30, i31, i32, i33, i34, i35, i36, i37, i38, i39, i40, i41, i42, i43, i44, i45, i46, i47, i48, i49, i50, i51, i52, i53, i54, i55, i56, i57, i58, i59, i60, i61, i62, i63, i64, i65, i66, i67, i68, i69, i70, i71, i72, i73, i74, i75, i76); }\
	NAME##_cus_equal_list<mysqlpp::quote_type0> equal_list(const char* d, NAME##_enum i1, NAME##_enum i2 = NAME##_NULL, NAME##_enum i3 = NAME##_NULL, NAME##_enum i4 = NAME##_NULL, NAME##_enum i5 = NAME##_NULL, NAME##_enum i6 = NAME##_NULL, NAME##_enum i7 = NAME##_NULL, NAME##_enum i8 = NAME##_NULL, NAME##_enum i9 = NAME##_NULL, NAME##_enum i10 = NAME##_NULL, NAME##_enum i11 = NAME##_NULL, NAME##_enum i12 = NAME##_NULL, NAME##_enum i13 = NAME##_NULL, NAME##_enum i14 = NAME##_NULL, NAME##_enum i15 = NAME##_NULL, NAME##_enum i16 = NAME##_NULL, NAME##_enum i17 = NAME##_NULL, NAME##_enum i18 = NAME##_NULL, NAME##_enum i19 = NAME##_NULL, NAME##_enum i20 = NAME##_NULL, NAME##_enum i21 = NAME##_NULL, NAME##_enum i22 = NAME##_NULL, NAME##_enum i23 = NAME##_NULL, NAME##_enum i24 = NAME##_NULL, NAME##_enum i25 = NAME##_NULL, NAME##_enum i26 = NAME##_NULL, NAME##_enum i27 = NAME##_NULL, NAME##_enum i28 = NAME##_NULL, NAME##_enum i29 = NAME##_NULL, NAME##_enum i30 = NAME##_NULL, NAME##_enum i31 = NAME##_NULL, NAME##_enum i32 = NAME##_NULL, NAME##_enum i33 = NAME##_NULL, NAME##_enum i34 = NAME##_NULL, NAME##_enum i35 = NAME##_NULL, NAME##_enum i36 = NAME##_NULL, NAME##_enum i37 = NAME##_NULL, NAME##_enum i38 = NAME##_NULL, NAME##_enum i39 = NAME##_NULL, NAME##_enum i40 = NAME##_NULL, NAME##_enum i41 = NAME##_NULL, NAME##_enum i42 = NAME##_NULL, NAME##_enum i43 = NAME##_NULL, NAME##_enum i44 = NAME##_NULL, NAME##_enum i45 = NAME##_NULL, NAME##_enum i46 = NAME##_NULL, NAME##_enum i47 = NAME##_NULL, NAME##_enum i48 = NAME##_NULL, NAME##_enum i49 = NAME##_NULL, NAME##_enum i50 = NAME##_NULL, NAME##_enum i51 = NAME##_NULL, NAME##_enum i52 = NAME##_NULL, NAME##_enum i53 = NAME##_NULL, NAME##_enum i54 = NAME##_NULL, NAME##_enum i55 = NAME##_NULL, NAME##_enum i56 = NAME##_NULL, NAME##_enum i57 = NAME##_NULL, NAME##_enum i58 = NAME##_NULL, NAME##_enum i59 = NAME##_NULL, NAME##_enum i60 = NAME##_NULL, NAME##_enum i61 = NAME##_NULL, NAME##_enum i62 = NAME##_NULL, NAME##_enum i63 = NAME##_NULL, NAME##_enum i64 = NAME##_NULL, NAME##_enum i65 = NAME##_NULL, NAME##_enum i66 = NAME##_NULL, NAME##_enum i67 = NAME##_NULL, NAME##_enum i68 = NAME##_NULL, NAME##_enum i69 = NAME##_NULL, NAME##_enum i70 = NAME##_NULL, NAME##_enum i71 = NAME##_NULL, NAME##_enum i72 = NAME##_NULL, NAME##_enum i73 = NAME##_NULL, NAME##_enum i74 = NAME##_NULL, NAME##_enum i75 = NAME##_NULL, NAME##_enum i76 = NAME##_NULL) const\
			{ return equal_list(d, " = ", mysqlpp::quote, i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12, i13, i14, i15, i16, i17, i18, i19, i20, i21, i22, i23, i24, i25, i26, i27, i28, i29, i30, i31, i32, i33, i34, i35, i36, i37, i38, i39, i40, i41, i42, i43, i44, i45, i46, i47, i48, i49, i50, i51, i52, i53, i54, i55, i56, i57, i58, i59, i60, i61, i62, i63, i64, i65, i66, i67, i68, i69, i70, i71, i72, i73, i74, i75, i76); }\
	NAME##_cus_equal_list<mysqlpp::quote_type0> equal_list(const char* d,\
			std::vector<bool> *i) const\
			{ return equal_list(d, " = ", mysqlpp::quote, i); }\
	NAME##_cus_equal_list<mysqlpp::quote_type0> equal_list(const char* d,\
			mysqlpp::sql_cmp_type sc) const\
			{ return equal_list(d, " = ", mysqlpp::quote, sc); }\
	NAME##_cus_equal_list<mysqlpp::quote_type0> equal_list(const char* d, const char* c,\
			bool i1, bool i2 = false, bool i3 = false, bool i4 = false, bool i5 = false, bool i6 = false, bool i7 = false, bool i8 = false, bool i9 = false, bool i10 = false, bool i11 = false, bool i12 = false, bool i13 = false, bool i14 = false, bool i15 = false, bool i16 = false, bool i17 = false, bool i18 = false, bool i19 = false, bool i20 = false, bool i21 = false, bool i22 = false, bool i23 = false, bool i24 = false, bool i25 = false, bool i26 = false, bool i27 = false, bool i28 = false, bool i29 = false, bool i30 = false, bool i31 = false, bool i32 = false, bool i33 = false, bool i34 = false, bool i35 = false, bool i36 = false, bool i37 = false, bool i38 = false, bool i39 = false, bool i40 = false, bool i41 = false, bool i42 = false, bool i43 = false, bool i44 = false, bool i45 = false, bool i46 = false, bool i47 = false, bool i48 = false, bool i49 = false, bool i50 = false, bool i51 = false, bool i52 = false, bool i53 = false, bool i54 = false, bool i55 = false, bool i56 = false, bool i57 = false, bool i58 = false, bool i59 = false, bool i60 = false, bool i61 = false, bool i62 = false, bool i63 = false, bool i64 = false, bool i65 = false, bool i66 = false, bool i67 = false, bool i68 = false, bool i69 = false, bool i70 = false, bool i71 = false, bool i72 = false, bool i73 = false, bool i74 = false, bool i75 = false, bool i76 = false) const\
			{ return equal_list(d, c, mysqlpp::quote, i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12, i13, i14, i15, i16, i17, i18, i19, i20, i21, i22, i23, i24, i25, i26, i27, i28, i29, i30, i31, i32, i33, i34, i35, i36, i37, i38, i39, i40, i41, i42, i43, i44, i45, i46, i47, i48, i49, i50, i51, i52, i53, i54, i55, i56, i57, i58, i59, i60, i61, i62, i63, i64, i65, i66, i67, i68, i69, i70, i71, i72, i73, i74, i75, i76); }\
	NAME##_cus_equal_list<mysqlpp::quote_type0> equal_list(const char* d, const char* c,\
			NAME##_enum i1, NAME##_enum i2 = NAME##_NULL, NAME##_enum i3 = NAME##_NULL, NAME##_enum i4 = NAME##_NULL, NAME##_enum i5 = NAME##_NULL, NAME##_enum i6 = NAME##_NULL, NAME##_enum i7 = NAME##_NULL, NAME##_enum i8 = NAME##_NULL, NAME##_enum i9 = NAME##_NULL, NAME##_enum i10 = NAME##_NULL, NAME##_enum i11 = NAME##_NULL, NAME##_enum i12 = NAME##_NULL, NAME##_enum i13 = NAME##_NULL, NAME##_enum i14 = NAME##_NULL, NAME##_enum i15 = NAME##_NULL, NAME##_enum i16 = NAME##_NULL, NAME##_enum i17 = NAME##_NULL, NAME##_enum i18 = NAME##_NULL, NAME##_enum i19 = NAME##_NULL, NAME##_enum i20 = NAME##_NULL, NAME##_enum i21 = NAME##_NULL, NAME##_enum i22 = NAME##_NULL, NAME##_enum i23 = NAME##_NULL, NAME##_enum i24 = NAME##_NULL, NAME##_enum i25 = NAME##_NULL, NAME##_enum i26 = NAME##_NULL, NAME##_enum i27 = NAME##_NULL, NAME##_enum i28 = NAME##_NULL, NAME##_enum i29 = NAME##_NULL, NAME##_enum i30 = NAME##_NULL, NAME##_enum i31 = NAME##_NULL, NAME##_enum i32 = NAME##_NULL, NAME##_enum i33 = NAME##_NULL, NAME##_enum i34 = NAME##_NULL, NAME##_enum i35 = NAME##_NULL, NAME##_enum i36 = NAME##_NULL, NAME##_enum i37 = NAME##_NULL, NAME##_enum i38 = NAME##_NULL, NAME##_enum i39 = NAME##_NULL, NAME##_enum i40 = NAME##_NULL, NAME##_enum i41 = NAME##_NULL, NAME##_enum i42 = NAME##_NULL, NAME##_enum i43 = NAME##_NULL, NAME##_enum i44 = NAME##_NULL, NAME##_enum i45 = NAME##_NULL, NAME##_enum i46 = NAME##_NULL, NAME##_enum i47 = NAME##_NULL, NAME##_enum i48 = NAME##_NULL, NAME##_enum i49 = NAME##_NULL, NAME##_enum i50 = NAME##_NULL, NAME##_enum i51 = NAME##_NULL, NAME##_enum i52 = NAME##_NULL, NAME##_enum i53 = NAME##_NULL, NAME##_enum i54 = NAME##_NULL, NAME##_enum i55 = NAME##_NULL, NAME##_enum i56 = NAME##_NULL, NAME##_enum i57 = NAME##_NULL, NAME##_enum i58 = NAME##_NULL, NAME##_enum i59 = NAME##_NULL, NAME##_enum i60 = NAME##_NULL, NAME##_enum i61 = NAME##_NULL, NAME##_enum i62 = NAME##_NULL, NAME##_enum i63 = NAME##_NULL, NAME##_enum i64 = NAME##_NULL, NAME##_enum i65 = NAME##_NULL, NAME##_enum i66 = NAME##_NULL, NAME##_enum i67 = NAME##_NULL, NAME##_enum i68 = NAME##_NULL, NAME##_enum i69 = NAME##_NULL, NAME##_enum i70 = NAME##_NULL, NAME##_enum i71 = NAME##_NULL, NAME##_enum i72 = NAME##_NULL, NAME##_enum i73 = NAME##_NULL, NAME##_enum i74 = NAME##_NULL, NAME##_enum i75 = NAME##_NULL, NAME##_enum i76 = NAME##_NULL) const\
			{ return equal_list(d, c, mysqlpp::quote, i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12, i13, i14, i15, i16, i17, i18, i19, i20, i21, i22, i23, i24, i25, i26, i27, i28, i29, i30, i31, i32, i33, i34, i35, i36, i37, i38, i39, i40, i41, i42, i43, i44, i45, i46, i47, i48, i49, i50, i51, i52, i53, i54, i55, i56, i57, i58, i59, i60, i61, i62, i63, i64, i65, i66, i67, i68, i69, i70, i71, i72, i73, i74, i75, i76); }\
	NAME##_cus_equal_list<mysqlpp::quote_type0> equal_list(const char* d, const char* c,\
			std::vector<bool> *i) const\
			{ return equal_list(d, c, mysqlpp::quote, i); }\
	NAME##_cus_equal_list<mysqlpp::quote_type0> equal_list(const char* d, const char* c,\
			mysqlpp::sql_cmp_type sc) const\
			{ return equal_list(d, c, mysqlpp::quote, sc); }\
	template <class Manip>\
	NAME##_cus_equal_list<Manip> equal_list(const char* d, const char* c, Manip m, \
						bool i1, bool i2 = false, bool i3 = false, bool i4 = false, bool i5 = false, bool i6 = false, bool i7 = false, bool i8 = false, bool i9 = false, bool i10 = false, bool i11 = false, bool i12 = false, bool i13 = false, bool i14 = false, bool i15 = false, bool i16 = false, bool i17 = false, bool i18 = false, bool i19 = false, bool i20 = false, bool i21 = false, bool i22 = false, bool i23 = false, bool i24 = false, bool i25 = false, bool i26 = false, bool i27 = false, bool i28 = false, bool i29 = false, bool i30 = false, bool i31 = false, bool i32 = false, bool i33 = false, bool i34 = false, bool i35 = false, bool i36 = false, bool i37 = false, bool i38 = false, bool i39 = false, bool i40 = false, bool i41 = false, bool i42 = false, bool i43 = false, bool i44 = false, bool i45 = false, bool i46 = false, bool i47 = false, bool i48 = false, bool i49 = false, bool i50 = false, bool i51 = false, bool i52 = false, bool i53 = false, bool i54 = false, bool i55 = false, bool i56 = false, bool i57 = false, bool i58 = false, bool i59 = false, bool i60 = false, bool i61 = false, bool i62 = false, bool i63 = false, bool i64 = false, bool i65 = false, bool i66 = false, bool i67 = false, bool i68 = false, bool i69 = false, bool i70 = false, bool i71 = false, bool i72 = false, bool i73 = false, bool i74 = false, bool i75 = false, bool i76 = false) const;\
	template <class Manip>\
	NAME##_cus_equal_list<Manip> equal_list(const char* d, const char* c, Manip m, \
						NAME##_enum i1, NAME##_enum i2 = NAME##_NULL, NAME##_enum i3 = NAME##_NULL, NAME##_enum i4 = NAME##_NULL, NAME##_enum i5 = NAME##_NULL, NAME##_enum i6 = NAME##_NULL, NAME##_enum i7 = NAME##_NULL, NAME##_enum i8 = NAME##_NULL, NAME##_enum i9 = NAME##_NULL, NAME##_enum i10 = NAME##_NULL, NAME##_enum i11 = NAME##_NULL, NAME##_enum i12 = NAME##_NULL, NAME##_enum i13 = NAME##_NULL, NAME##_enum i14 = NAME##_NULL, NAME##_enum i15 = NAME##_NULL, NAME##_enum i16 = NAME##_NULL, NAME##_enum i17 = NAME##_NULL, NAME##_enum i18 = NAME##_NULL, NAME##_enum i19 = NAME##_NULL, NAME##_enum i20 = NAME##_NULL, NAME##_enum i21 = NAME##_NULL, NAME##_enum i22 = NAME##_NULL, NAME##_enum i23 = NAME##_NULL, NAME##_enum i24 = NAME##_NULL, NAME##_enum i25 = NAME##_NULL, NAME##_enum i26 = NAME##_NULL, NAME##_enum i27 = NAME##_NULL, NAME##_enum i28 = NAME##_NULL, NAME##_enum i29 = NAME##_NULL, NAME##_enum i30 = NAME##_NULL, NAME##_enum i31 = NAME##_NULL, NAME##_enum i32 = NAME##_NULL, NAME##_enum i33 = NAME##_NULL, NAME##_enum i34 = NAME##_NULL, NAME##_enum i35 = NAME##_NULL, NAME##_enum i36 = NAME##_NULL, NAME##_enum i37 = NAME##_NULL, NAME##_enum i38 = NAME##_NULL, NAME##_enum i39 = NAME##_NULL, NAME##_enum i40 = NAME##_NULL, NAME##_enum i41 = NAME##_NULL, NAME##_enum i42 = NAME##_NULL, NAME##_enum i43 = NAME##_NULL, NAME##_enum i44 = NAME##_NULL, NAME##_enum i45 = NAME##_NULL, NAME##_enum i46 = NAME##_NULL, NAME##_enum i47 = NAME##_NULL, NAME##_enum i48 = NAME##_NULL, NAME##_enum i49 = NAME##_NULL, NAME##_enum i50 = NAME##_NULL, NAME##_enum i51 = NAME##_NULL, NAME##_enum i52 = NAME##_NULL, NAME##_enum i53 = NAME##_NULL, NAME##_enum i54 = NAME##_NULL, NAME##_enum i55 = NAME##_NULL, NAME##_enum i56 = NAME##_NULL, NAME##_enum i57 = NAME##_NULL, NAME##_enum i58 = NAME##_NULL, NAME##_enum i59 = NAME##_NULL, NAME##_enum i60 = NAME##_NULL, NAME##_enum i61 = NAME##_NULL, NAME##_enum i62 = NAME##_NULL, NAME##_enum i63 = NAME##_NULL, NAME##_enum i64 = NAME##_NULL, NAME##_enum i65 = NAME##_NULL, NAME##_enum i66 = NAME##_NULL, NAME##_enum i67 = NAME##_NULL, NAME##_enum i68 = NAME##_NULL, NAME##_enum i69 = NAME##_NULL, NAME##_enum i70 = NAME##_NULL, NAME##_enum i71 = NAME##_NULL, NAME##_enum i72 = NAME##_NULL, NAME##_enum i73 = NAME##_NULL, NAME##_enum i74 = NAME##_NULL, NAME##_enum i75 = NAME##_NULL, NAME##_enum i76 = NAME##_NULL) const;\
	template <class Manip>\
	NAME##_cus_equal_list<Manip> equal_list(const char* d, const char* c, Manip m, \
						std::vector<bool> *i) const;\
	template <class Manip>\
	NAME##_cus_equal_list<Manip> equal_list(const char* d, const char* c, Manip m, \
						mysqlpp::sql_cmp_type sc) const;\
	private:\
	static const char* table_;\
	const char* table_override_;\
	};\
	MYSQLPP_SSQLS_CONDITIONAL_STATICS(\
		const char* NAME::names[] = {\
			    N1 ,\
    N2 ,\
    N3 ,\
    N4 ,\
    N5 ,\
    N6 ,\
    N7 ,\
    N8 ,\
    N9 ,\
    N10 ,\
    N11 ,\
    N12 ,\
    N13 ,\
    N14 ,\
    N15 ,\
    N16 ,\
    N17 ,\
    N18 ,\
    N19 ,\
    N20 ,\
    N21 ,\
    N22 ,\
    N23 ,\
    N24 ,\
    N25 ,\
    N26 ,\
    N27 ,\
    N28 ,\
    N29 ,\
    N30 ,\
    N31 ,\
    N32 ,\
    N33 ,\
    N34 ,\
    N35 ,\
    N36 ,\
    N37 ,\
    N38 ,\
    N39 ,\
    N40 ,\
    N41 ,\
    N42 ,\
    N43 ,\
    N44 ,\
    N45 ,\
    N46 ,\
    N47 ,\
    N48 ,\
    N49 ,\
    N50 ,\
    N51 ,\
    N52 ,\
    N53 ,\
    N54 ,\
    N55 ,\
    N56 ,\
    N57 ,\
    N58 ,\
    N59 ,\
    N60 ,\
    N61 ,\
    N62 ,\
    N63 ,\
    N64 ,\
    N65 ,\
    N66 ,\
    N67 ,\
    N68 ,\
    N69 ,\
    N70 ,\
    N71 ,\
    N72 ,\
    N73 ,\
    N74 ,\
    N75 ,\
    N76 \
		};\
		const char* NAME::table_ = #NAME;\
	)\
	template <class Manip>\
	NAME##_cus_value_list<Manip>::NAME##_cus_value_list\
			(const NAME* o, const char* d, Manip m, bool i1, bool i2, bool i3, bool i4, bool i5, bool i6, bool i7, bool i8, bool i9, bool i10, bool i11, bool i12, bool i13, bool i14, bool i15, bool i16, bool i17, bool i18, bool i19, bool i20, bool i21, bool i22, bool i23, bool i24, bool i25, bool i26, bool i27, bool i28, bool i29, bool i30, bool i31, bool i32, bool i33, bool i34, bool i35, bool i36, bool i37, bool i38, bool i39, bool i40, bool i41, bool i42, bool i43, bool i44, bool i45, bool i46, bool i47, bool i48, bool i49, bool i50, bool i51, bool i52, bool i53, bool i54, bool i55, bool i56, bool i57, bool i58, bool i59, bool i60, bool i61, bool i62, bool i63, bool i64, bool i65, bool i66, bool i67, bool i68, bool i69, bool i70, bool i71, bool i72, bool i73, bool i74, bool i75, bool i76)\
	{\
		delim = d;\
		manip = m;\
		del_vector = true;\
		obj = o;\
		include = new std::vector<bool>(76, false);\
    if (i1) (*include)[0]=true;\
    if (i2) (*include)[1]=true;\
    if (i3) (*include)[2]=true;\
    if (i4) (*include)[3]=true;\
    if (i5) (*include)[4]=true;\
    if (i6) (*include)[5]=true;\
    if (i7) (*include)[6]=true;\
    if (i8) (*include)[7]=true;\
    if (i9) (*include)[8]=true;\
    if (i10) (*include)[9]=true;\
    if (i11) (*include)[10]=true;\
    if (i12) (*include)[11]=true;\
    if (i13) (*include)[12]=true;\
    if (i14) (*include)[13]=true;\
    if (i15) (*include)[14]=true;\
    if (i16) (*include)[15]=true;\
    if (i17) (*include)[16]=true;\
    if (i18) (*include)[17]=true;\
    if (i19) (*include)[18]=true;\
    if (i20) (*include)[19]=true;\
    if (i21) (*include)[20]=true;\
    if (i22) (*include)[21]=true;\
    if (i23) (*include)[22]=true;\
    if (i24) (*include)[23]=true;\
    if (i25) (*include)[24]=true;\
    if (i26) (*include)[25]=true;\
    if (i27) (*include)[26]=true;\
    if (i28) (*include)[27]=true;\
    if (i29) (*include)[28]=true;\
    if (i30) (*include)[29]=true;\
    if (i31) (*include)[30]=true;\
    if (i32) (*include)[31]=true;\
    if (i33) (*include)[32]=true;\
    if (i34) (*include)[33]=true;\
    if (i35) (*include)[34]=true;\
    if (i36) (*include)[35]=true;\
    if (i37) (*include)[36]=true;\
    if (i38) (*include)[37]=true;\
    if (i39) (*include)[38]=true;\
    if (i40) (*include)[39]=true;\
    if (i41) (*include)[40]=true;\
    if (i42) (*include)[41]=true;\
    if (i43) (*include)[42]=true;\
    if (i44) (*include)[43]=true;\
    if (i45) (*include)[44]=true;\
    if (i46) (*include)[45]=true;\
    if (i47) (*include)[46]=true;\
    if (i48) (*include)[47]=true;\
    if (i49) (*include)[48]=true;\
    if (i50) (*include)[49]=true;\
    if (i51) (*include)[50]=true;\
    if (i52) (*include)[51]=true;\
    if (i53) (*include)[52]=true;\
    if (i54) (*include)[53]=true;\
    if (i55) (*include)[54]=true;\
    if (i56) (*include)[55]=true;\
    if (i57) (*include)[56]=true;\
    if (i58) (*include)[57]=true;\
    if (i59) (*include)[58]=true;\
    if (i60) (*include)[59]=true;\
    if (i61) (*include)[60]=true;\
    if (i62) (*include)[61]=true;\
    if (i63) (*include)[62]=true;\
    if (i64) (*include)[63]=true;\
    if (i65) (*include)[64]=true;\
    if (i66) (*include)[65]=true;\
    if (i67) (*include)[66]=true;\
    if (i68) (*include)[67]=true;\
    if (i69) (*include)[68]=true;\
    if (i70) (*include)[69]=true;\
    if (i71) (*include)[70]=true;\
    if (i72) (*include)[71]=true;\
    if (i73) (*include)[72]=true;\
    if (i74) (*include)[73]=true;\
    if (i75) (*include)[74]=true;\
    if (i76) (*include)[75]=true;\
	}\
	template <class Manip>\
	NAME##_cus_value_list<Manip>::NAME##_cus_value_list\
			(const NAME* o, const char* d, Manip m, NAME##_enum i1, NAME##_enum i2, NAME##_enum i3, NAME##_enum i4, NAME##_enum i5, NAME##_enum i6, NAME##_enum i7, NAME##_enum i8, NAME##_enum i9, NAME##_enum i10, NAME##_enum i11, NAME##_enum i12, NAME##_enum i13, NAME##_enum i14, NAME##_enum i15, NAME##_enum i16, NAME##_enum i17, NAME##_enum i18, NAME##_enum i19, NAME##_enum i20, NAME##_enum i21, NAME##_enum i22, NAME##_enum i23, NAME##_enum i24, NAME##_enum i25, NAME##_enum i26, NAME##_enum i27, NAME##_enum i28, NAME##_enum i29, NAME##_enum i30, NAME##_enum i31, NAME##_enum i32, NAME##_enum i33, NAME##_enum i34, NAME##_enum i35, NAME##_enum i36, NAME##_enum i37, NAME##_enum i38, NAME##_enum i39, NAME##_enum i40, NAME##_enum i41, NAME##_enum i42, NAME##_enum i43, NAME##_enum i44, NAME##_enum i45, NAME##_enum i46, NAME##_enum i47, NAME##_enum i48, NAME##_enum i49, NAME##_enum i50, NAME##_enum i51, NAME##_enum i52, NAME##_enum i53, NAME##_enum i54, NAME##_enum i55, NAME##_enum i56, NAME##_enum i57, NAME##_enum i58, NAME##_enum i59, NAME##_enum i60, NAME##_enum i61, NAME##_enum i62, NAME##_enum i63, NAME##_enum i64, NAME##_enum i65, NAME##_enum i66, NAME##_enum i67, NAME##_enum i68, NAME##_enum i69, NAME##_enum i70, NAME##_enum i71, NAME##_enum i72, NAME##_enum i73, NAME##_enum i74, NAME##_enum i75, NAME##_enum i76)\
	{\
		delim = d;\
		manip = m;\
		del_vector = true;\
		obj = o;\
		include = new std::vector<bool>(76, false);\
    if (i1 == NAME##_NULL) return;\
    (*include)[i1]=true;\
    if (i2 == NAME##_NULL) return;\
    (*include)[i2]=true;\
    if (i3 == NAME##_NULL) return;\
    (*include)[i3]=true;\
    if (i4 == NAME##_NULL) return;\
    (*include)[i4]=true;\
    if (i5 == NAME##_NULL) return;\
    (*include)[i5]=true;\
    if (i6 == NAME##_NULL) return;\
    (*include)[i6]=true;\
    if (i7 == NAME##_NULL) return;\
    (*include)[i7]=true;\
    if (i8 == NAME##_NULL) return;\
    (*include)[i8]=true;\
    if (i9 == NAME##_NULL) return;\
    (*include)[i9]=true;\
    if (i10 == NAME##_NULL) return;\
    (*include)[i10]=true;\
    if (i11 == NAME##_NULL) return;\
    (*include)[i11]=true;\
    if (i12 == NAME##_NULL) return;\
    (*include)[i12]=true;\
    if (i13 == NAME##_NULL) return;\
    (*include)[i13]=true;\
    if (i14 == NAME##_NULL) return;\
    (*include)[i14]=true;\
    if (i15 == NAME##_NULL) return;\
    (*include)[i15]=true;\
    if (i16 == NAME##_NULL) return;\
    (*include)[i16]=true;\
    if (i17 == NAME##_NULL) return;\
    (*include)[i17]=true;\
    if (i18 == NAME##_NULL) return;\
    (*include)[i18]=true;\
    if (i19 == NAME##_NULL) return;\
    (*include)[i19]=true;\
    if (i20 == NAME##_NULL) return;\
    (*include)[i20]=true;\
    if (i21 == NAME##_NULL) return;\
    (*include)[i21]=true;\
    if (i22 == NAME##_NULL) return;\
    (*include)[i22]=true;\
    if (i23 == NAME##_NULL) return;\
    (*include)[i23]=true;\
    if (i24 == NAME##_NULL) return;\
    (*include)[i24]=true;\
    if (i25 == NAME##_NULL) return;\
    (*include)[i25]=true;\
    if (i26 == NAME##_NULL) return;\
    (*include)[i26]=true;\
    if (i27 == NAME##_NULL) return;\
    (*include)[i27]=true;\
    if (i28 == NAME##_NULL) return;\
    (*include)[i28]=true;\
    if (i29 == NAME##_NULL) return;\
    (*include)[i29]=true;\
    if (i30 == NAME##_NULL) return;\
    (*include)[i30]=true;\
    if (i31 == NAME##_NULL) return;\
    (*include)[i31]=true;\
    if (i32 == NAME##_NULL) return;\
    (*include)[i32]=true;\
    if (i33 == NAME##_NULL) return;\
    (*include)[i33]=true;\
    if (i34 == NAME##_NULL) return;\
    (*include)[i34]=true;\
    if (i35 == NAME##_NULL) return;\
    (*include)[i35]=true;\
    if (i36 == NAME##_NULL) return;\
    (*include)[i36]=true;\
    if (i37 == NAME##_NULL) return;\
    (*include)[i37]=true;\
    if (i38 == NAME##_NULL) return;\
    (*include)[i38]=true;\
    if (i39 == NAME##_NULL) return;\
    (*include)[i39]=true;\
    if (i40 == NAME##_NULL) return;\
    (*include)[i40]=true;\
    if (i41 == NAME##_NULL) return;\
    (*include)[i41]=true;\
    if (i42 == NAME##_NULL) return;\
    (*include)[i42]=true;\
    if (i43 == NAME##_NULL) return;\
    (*include)[i43]=true;\
    if (i44 == NAME##_NULL) return;\
    (*include)[i44]=true;\
    if (i45 == NAME##_NULL) return;\
    (*include)[i45]=true;\
    if (i46 == NAME##_NULL) return;\
    (*include)[i46]=true;\
    if (i47 == NAME##_NULL) return;\
    (*include)[i47]=true;\
    if (i48 == NAME##_NULL) return;\
    (*include)[i48]=true;\
    if (i49 == NAME##_NULL) return;\
    (*include)[i49]=true;\
    if (i50 == NAME##_NULL) return;\
    (*include)[i50]=true;\
    if (i51 == NAME##_NULL) return;\
    (*include)[i51]=true;\
    if (i52 == NAME##_NULL) return;\
    (*include)[i52]=true;\
    if (i53 == NAME##_NULL) return;\
    (*include)[i53]=true;\
    if (i54 == NAME##_NULL) return;\
    (*include)[i54]=true;\
    if (i55 == NAME##_NULL) return;\
    (*include)[i55]=true;\
    if (i56 == NAME##_NULL) return;\
    (*include)[i56]=true;\
    if (i57 == NAME##_NULL) return;\
    (*include)[i57]=true;\
    if (i58 == NAME##_NULL) return;\
    (*include)[i58]=true;\
    if (i59 == NAME##_NULL) return;\
    (*include)[i59]=true;\
    if (i60 == NAME##_NULL) return;\
    (*include)[i60]=true;\
    if (i61 == NAME##_NULL) return;\
    (*include)[i61]=true;\
    if (i62 == NAME##_NULL) return;\
    (*include)[i62]=true;\
    if (i63 == NAME##_NULL) return;\
    (*include)[i63]=true;\
    if (i64 == NAME##_NULL) return;\
    (*include)[i64]=true;\
    if (i65 == NAME##_NULL) return;\
    (*include)[i65]=true;\
    if (i66 == NAME##_NULL) return;\
    (*include)[i66]=true;\
    if (i67 == NAME##_NULL) return;\
    (*include)[i67]=true;\
    if (i68 == NAME##_NULL) return;\
    (*include)[i68]=true;\
    if (i69 == NAME##_NULL) return;\
    (*include)[i69]=true;\
    if (i70 == NAME##_NULL) return;\
    (*include)[i70]=true;\
    if (i71 == NAME##_NULL) return;\
    (*include)[i71]=true;\
    if (i72 == NAME##_NULL) return;\
    (*include)[i72]=true;\
    if (i73 == NAME##_NULL) return;\
    (*include)[i73]=true;\
    if (i74 == NAME##_NULL) return;\
    (*include)[i74]=true;\
    if (i75 == NAME##_NULL) return;\
    (*include)[i75]=true;\
    if (i76 == NAME##_NULL) return;\
    (*include)[i76]=true;\
	}\
	template <class Manip>\
	NAME##_cus_field_list<Manip>::NAME##_cus_field_list\
			(const NAME* o, const char* d, Manip m, bool i1, bool i2, bool i3, bool i4, bool i5, bool i6, bool i7, bool i8, bool i9, bool i10, bool i11, bool i12, bool i13, bool i14, bool i15, bool i16, bool i17, bool i18, bool i19, bool i20, bool i21, bool i22, bool i23, bool i24, bool i25, bool i26, bool i27, bool i28, bool i29, bool i30, bool i31, bool i32, bool i33, bool i34, bool i35, bool i36, bool i37, bool i38, bool i39, bool i40, bool i41, bool i42, bool i43, bool i44, bool i45, bool i46, bool i47, bool i48, bool i49, bool i50, bool i51, bool i52, bool i53, bool i54, bool i55, bool i56, bool i57, bool i58, bool i59, bool i60, bool i61, bool i62, bool i63, bool i64, bool i65, bool i66, bool i67, bool i68, bool i69, bool i70, bool i71, bool i72, bool i73, bool i74, bool i75, bool i76)\
	{\
		delim = d;\
		manip = m;\
		del_vector = true;\
		obj = o;\
		include = new std::vector<bool>(76, false);\
    if (i1) (*include)[0]=true;\
    if (i2) (*include)[1]=true;\
    if (i3) (*include)[2]=true;\
    if (i4) (*include)[3]=true;\
    if (i5) (*include)[4]=true;\
    if (i6) (*include)[5]=true;\
    if (i7) (*include)[6]=true;\
    if (i8) (*include)[7]=true;\
    if (i9) (*include)[8]=true;\
    if (i10) (*include)[9]=true;\
    if (i11) (*include)[10]=true;\
    if (i12) (*include)[11]=true;\
    if (i13) (*include)[12]=true;\
    if (i14) (*include)[13]=true;\
    if (i15) (*include)[14]=true;\
    if (i16) (*include)[15]=true;\
    if (i17) (*include)[16]=true;\
    if (i18) (*include)[17]=true;\
    if (i19) (*include)[18]=true;\
    if (i20) (*include)[19]=true;\
    if (i21) (*include)[20]=true;\
    if (i22) (*include)[21]=true;\
    if (i23) (*include)[22]=true;\
    if (i24) (*include)[23]=true;\
    if (i25) (*include)[24]=true;\
    if (i26) (*include)[25]=true;\
    if (i27) (*include)[26]=true;\
    if (i28) (*include)[27]=true;\
    if (i29) (*include)[28]=true;\
    if (i30) (*include)[29]=true;\
    if (i31) (*include)[30]=true;\
    if (i32) (*include)[31]=true;\
    if (i33) (*include)[32]=true;\
    if (i34) (*include)[33]=true;\
    if (i35) (*include)[34]=true;\
    if (i36) (*include)[35]=true;\
    if (i37) (*include)[36]=true;\
    if (i38) (*include)[37]=true;\
    if (i39) (*include)[38]=true;\
    if (i40) (*include)[39]=true;\
    if (i41) (*include)[40]=true;\
    if (i42) (*include)[41]=true;\
    if (i43) (*include)[42]=true;\
    if (i44) (*include)[43]=true;\
    if (i45) (*include)[44]=true;\
    if (i46) (*include)[45]=true;\
    if (i47) (*include)[46]=true;\
    if (i48) (*include)[47]=true;\
    if (i49) (*include)[48]=true;\
    if (i50) (*include)[49]=true;\
    if (i51) (*include)[50]=true;\
    if (i52) (*include)[51]=true;\
    if (i53) (*include)[52]=true;\
    if (i54) (*include)[53]=true;\
    if (i55) (*include)[54]=true;\
    if (i56) (*include)[55]=true;\
    if (i57) (*include)[56]=true;\
    if (i58) (*include)[57]=true;\
    if (i59) (*include)[58]=true;\
    if (i60) (*include)[59]=true;\
    if (i61) (*include)[60]=true;\
    if (i62) (*include)[61]=true;\
    if (i63) (*include)[62]=true;\
    if (i64) (*include)[63]=true;\
    if (i65) (*include)[64]=true;\
    if (i66) (*include)[65]=true;\
    if (i67) (*include)[66]=true;\
    if (i68) (*include)[67]=true;\
    if (i69) (*include)[68]=true;\
    if (i70) (*include)[69]=true;\
    if (i71) (*include)[70]=true;\
    if (i72) (*include)[71]=true;\
    if (i73) (*include)[72]=true;\
    if (i74) (*include)[73]=true;\
    if (i75) (*include)[74]=true;\
    if (i76) (*include)[75]=true;\
	}\
	template <class Manip>\
	NAME##_cus_field_list<Manip>::NAME##_cus_field_list\
			(const NAME* o, const char* d, Manip m, NAME##_enum i1, NAME##_enum i2, NAME##_enum i3, NAME##_enum i4, NAME##_enum i5, NAME##_enum i6, NAME##_enum i7, NAME##_enum i8, NAME##_enum i9, NAME##_enum i10, NAME##_enum i11, NAME##_enum i12, NAME##_enum i13, NAME##_enum i14, NAME##_enum i15, NAME##_enum i16, NAME##_enum i17, NAME##_enum i18, NAME##_enum i19, NAME##_enum i20, NAME##_enum i21, NAME##_enum i22, NAME##_enum i23, NAME##_enum i24, NAME##_enum i25, NAME##_enum i26, NAME##_enum i27, NAME##_enum i28, NAME##_enum i29, NAME##_enum i30, NAME##_enum i31, NAME##_enum i32, NAME##_enum i33, NAME##_enum i34, NAME##_enum i35, NAME##_enum i36, NAME##_enum i37, NAME##_enum i38, NAME##_enum i39, NAME##_enum i40, NAME##_enum i41, NAME##_enum i42, NAME##_enum i43, NAME##_enum i44, NAME##_enum i45, NAME##_enum i46, NAME##_enum i47, NAME##_enum i48, NAME##_enum i49, NAME##_enum i50, NAME##_enum i51, NAME##_enum i52, NAME##_enum i53, NAME##_enum i54, NAME##_enum i55, NAME##_enum i56, NAME##_enum i57, NAME##_enum i58, NAME##_enum i59, NAME##_enum i60, NAME##_enum i61, NAME##_enum i62, NAME##_enum i63, NAME##_enum i64, NAME##_enum i65, NAME##_enum i66, NAME##_enum i67, NAME##_enum i68, NAME##_enum i69, NAME##_enum i70, NAME##_enum i71, NAME##_enum i72, NAME##_enum i73, NAME##_enum i74, NAME##_enum i75, NAME##_enum i76)\
	{\
		delim = d;\
		manip = m;\
		del_vector = true;\
		obj = o;\
		include = new std::vector<bool>(76, false);\
    if (i1 == NAME##_NULL) return;\
    (*include)[i1]=true;\
    if (i2 == NAME##_NULL) return;\
    (*include)[i2]=true;\
    if (i3 == NAME##_NULL) return;\
    (*include)[i3]=true;\
    if (i4 == NAME##_NULL) return;\
    (*include)[i4]=true;\
    if (i5 == NAME##_NULL) return;\
    (*include)[i5]=true;\
    if (i6 == NAME##_NULL) return;\
    (*include)[i6]=true;\
    if (i7 == NAME##_NULL) return;\
    (*include)[i7]=true;\
    if (i8 == NAME##_NULL) return;\
    (*include)[i8]=true;\
    if (i9 == NAME##_NULL) return;\
    (*include)[i9]=true;\
    if (i10 == NAME##_NULL) return;\
    (*include)[i10]=true;\
    if (i11 == NAME##_NULL) return;\
    (*include)[i11]=true;\
    if (i12 == NAME##_NULL) return;\
    (*include)[i12]=true;\
    if (i13 == NAME##_NULL) return;\
    (*include)[i13]=true;\
    if (i14 == NAME##_NULL) return;\
    (*include)[i14]=true;\
    if (i15 == NAME##_NULL) return;\
    (*include)[i15]=true;\
    if (i16 == NAME##_NULL) return;\
    (*include)[i16]=true;\
    if (i17 == NAME##_NULL) return;\
    (*include)[i17]=true;\
    if (i18 == NAME##_NULL) return;\
    (*include)[i18]=true;\
    if (i19 == NAME##_NULL) return;\
    (*include)[i19]=true;\
    if (i20 == NAME##_NULL) return;\
    (*include)[i20]=true;\
    if (i21 == NAME##_NULL) return;\
    (*include)[i21]=true;\
    if (i22 == NAME##_NULL) return;\
    (*include)[i22]=true;\
    if (i23 == NAME##_NULL) return;\
    (*include)[i23]=true;\
    if (i24 == NAME##_NULL) return;\
    (*include)[i24]=true;\
    if (i25 == NAME##_NULL) return;\
    (*include)[i25]=true;\
    if (i26 == NAME##_NULL) return;\
    (*include)[i26]=true;\
    if (i27 == NAME##_NULL) return;\
    (*include)[i27]=true;\
    if (i28 == NAME##_NULL) return;\
    (*include)[i28]=true;\
    if (i29 == NAME##_NULL) return;\
    (*include)[i29]=true;\
    if (i30 == NAME##_NULL) return;\
    (*include)[i30]=true;\
    if (i31 == NAME##_NULL) return;\
    (*include)[i31]=true;\
    if (i32 == NAME##_NULL) return;\
    (*include)[i32]=true;\
    if (i33 == NAME##_NULL) return;\
    (*include)[i33]=true;\
    if (i34 == NAME##_NULL) return;\
    (*include)[i34]=true;\
    if (i35 == NAME##_NULL) return;\
    (*include)[i35]=true;\
    if (i36 == NAME##_NULL) return;\
    (*include)[i36]=true;\
    if (i37 == NAME##_NULL) return;\
    (*include)[i37]=true;\
    if (i38 == NAME##_NULL) return;\
    (*include)[i38]=true;\
    if (i39 == NAME##_NULL) return;\
    (*include)[i39]=true;\
    if (i40 == NAME##_NULL) return;\
    (*include)[i40]=true;\
    if (i41 == NAME##_NULL) return;\
    (*include)[i41]=true;\
    if (i42 == NAME##_NULL) return;\
    (*include)[i42]=true;\
    if (i43 == NAME##_NULL) return;\
    (*include)[i43]=true;\
    if (i44 == NAME##_NULL) return;\
    (*include)[i44]=true;\
    if (i45 == NAME##_NULL) return;\
    (*include)[i45]=true;\
    if (i46 == NAME##_NULL) return;\
    (*include)[i46]=true;\
    if (i47 == NAME##_NULL) return;\
    (*include)[i47]=true;\
    if (i48 == NAME##_NULL) return;\
    (*include)[i48]=true;\
    if (i49 == NAME##_NULL) return;\
    (*include)[i49]=true;\
    if (i50 == NAME##_NULL) return;\
    (*include)[i50]=true;\
    if (i51 == NAME##_NULL) return;\
    (*include)[i51]=true;\
    if (i52 == NAME##_NULL) return;\
    (*include)[i52]=true;\
    if (i53 == NAME##_NULL) return;\
    (*include)[i53]=true;\
    if (i54 == NAME##_NULL) return;\
    (*include)[i54]=true;\
    if (i55 == NAME##_NULL) return;\
    (*include)[i55]=true;\
    if (i56 == NAME##_NULL) return;\
    (*include)[i56]=true;\
    if (i57 == NAME##_NULL) return;\
    (*include)[i57]=true;\
    if (i58 == NAME##_NULL) return;\
    (*include)[i58]=true;\
    if (i59 == NAME##_NULL) return;\
    (*include)[i59]=true;\
    if (i60 == NAME##_NULL) return;\
    (*include)[i60]=true;\
    if (i61 == NAME##_NULL) return;\
    (*include)[i61]=true;\
    if (i62 == NAME##_NULL) return;\
    (*include)[i62]=true;\
    if (i63 == NAME##_NULL) return;\
    (*include)[i63]=true;\
    if (i64 == NAME##_NULL) return;\
    (*include)[i64]=true;\
    if (i65 == NAME##_NULL) return;\
    (*include)[i65]=true;\
    if (i66 == NAME##_NULL) return;\
    (*include)[i66]=true;\
    if (i67 == NAME##_NULL) return;\
    (*include)[i67]=true;\
    if (i68 == NAME##_NULL) return;\
    (*include)[i68]=true;\
    if (i69 == NAME##_NULL) return;\
    (*include)[i69]=true;\
    if (i70 == NAME##_NULL) return;\
    (*include)[i70]=true;\
    if (i71 == NAME##_NULL) return;\
    (*include)[i71]=true;\
    if (i72 == NAME##_NULL) return;\
    (*include)[i72]=true;\
    if (i73 == NAME##_NULL) return;\
    (*include)[i73]=true;\
    if (i74 == NAME##_NULL) return;\
    (*include)[i74]=true;\
    if (i75 == NAME##_NULL) return;\
    (*include)[i75]=true;\
    if (i76 == NAME##_NULL) return;\
    (*include)[i76]=true;\
	}\
	template <class Manip>\
	NAME##_cus_equal_list<Manip>::NAME##_cus_equal_list\
			(const NAME* o, const char* d, const char* c, Manip m, bool i1, bool i2, bool i3, bool i4, bool i5, bool i6, bool i7, bool i8, bool i9, bool i10, bool i11, bool i12, bool i13, bool i14, bool i15, bool i16, bool i17, bool i18, bool i19, bool i20, bool i21, bool i22, bool i23, bool i24, bool i25, bool i26, bool i27, bool i28, bool i29, bool i30, bool i31, bool i32, bool i33, bool i34, bool i35, bool i36, bool i37, bool i38, bool i39, bool i40, bool i41, bool i42, bool i43, bool i44, bool i45, bool i46, bool i47, bool i48, bool i49, bool i50, bool i51, bool i52, bool i53, bool i54, bool i55, bool i56, bool i57, bool i58, bool i59, bool i60, bool i61, bool i62, bool i63, bool i64, bool i65, bool i66, bool i67, bool i68, bool i69, bool i70, bool i71, bool i72, bool i73, bool i74, bool i75, bool i76)\
	{\
		delim = d;\
		comp = c;\
		manip = m;\
		del_vector = true;\
		obj = o;\
		include = new std::vector<bool>(76, false);\
    if (i1) (*include)[0]=true;\
    if (i2) (*include)[1]=true;\
    if (i3) (*include)[2]=true;\
    if (i4) (*include)[3]=true;\
    if (i5) (*include)[4]=true;\
    if (i6) (*include)[5]=true;\
    if (i7) (*include)[6]=true;\
    if (i8) (*include)[7]=true;\
    if (i9) (*include)[8]=true;\
    if (i10) (*include)[9]=true;\
    if (i11) (*include)[10]=true;\
    if (i12) (*include)[11]=true;\
    if (i13) (*include)[12]=true;\
    if (i14) (*include)[13]=true;\
    if (i15) (*include)[14]=true;\
    if (i16) (*include)[15]=true;\
    if (i17) (*include)[16]=true;\
    if (i18) (*include)[17]=true;\
    if (i19) (*include)[18]=true;\
    if (i20) (*include)[19]=true;\
    if (i21) (*include)[20]=true;\
    if (i22) (*include)[21]=true;\
    if (i23) (*include)[22]=true;\
    if (i24) (*include)[23]=true;\
    if (i25) (*include)[24]=true;\
    if (i26) (*include)[25]=true;\
    if (i27) (*include)[26]=true;\
    if (i28) (*include)[27]=true;\
    if (i29) (*include)[28]=true;\
    if (i30) (*include)[29]=true;\
    if (i31) (*include)[30]=true;\
    if (i32) (*include)[31]=true;\
    if (i33) (*include)[32]=true;\
    if (i34) (*include)[33]=true;\
    if (i35) (*include)[34]=true;\
    if (i36) (*include)[35]=true;\
    if (i37) (*include)[36]=true;\
    if (i38) (*include)[37]=true;\
    if (i39) (*include)[38]=true;\
    if (i40) (*include)[39]=true;\
    if (i41) (*include)[40]=true;\
    if (i42) (*include)[41]=true;\
    if (i43) (*include)[42]=true;\
    if (i44) (*include)[43]=true;\
    if (i45) (*include)[44]=true;\
    if (i46) (*include)[45]=true;\
    if (i47) (*include)[46]=true;\
    if (i48) (*include)[47]=true;\
    if (i49) (*include)[48]=true;\
    if (i50) (*include)[49]=true;\
    if (i51) (*include)[50]=true;\
    if (i52) (*include)[51]=true;\
    if (i53) (*include)[52]=true;\
    if (i54) (*include)[53]=true;\
    if (i55) (*include)[54]=true;\
    if (i56) (*include)[55]=true;\
    if (i57) (*include)[56]=true;\
    if (i58) (*include)[57]=true;\
    if (i59) (*include)[58]=true;\
    if (i60) (*include)[59]=true;\
    if (i61) (*include)[60]=true;\
    if (i62) (*include)[61]=true;\
    if (i63) (*include)[62]=true;\
    if (i64) (*include)[63]=true;\
    if (i65) (*include)[64]=true;\
    if (i66) (*include)[65]=true;\
    if (i67) (*include)[66]=true;\
    if (i68) (*include)[67]=true;\
    if (i69) (*include)[68]=true;\
    if (i70) (*include)[69]=true;\
    if (i71) (*include)[70]=true;\
    if (i72) (*include)[71]=true;\
    if (i73) (*include)[72]=true;\
    if (i74) (*include)[73]=true;\
    if (i75) (*include)[74]=true;\
    if (i76) (*include)[75]=true;\
	}\
	template <class Manip>\
	NAME##_cus_equal_list<Manip>::NAME##_cus_equal_list\
			(const NAME* o, const char* d, const char* c, Manip m, NAME##_enum i1, NAME##_enum i2, NAME##_enum i3, NAME##_enum i4, NAME##_enum i5, NAME##_enum i6, NAME##_enum i7, NAME##_enum i8, NAME##_enum i9, NAME##_enum i10, NAME##_enum i11, NAME##_enum i12, NAME##_enum i13, NAME##_enum i14, NAME##_enum i15, NAME##_enum i16, NAME##_enum i17, NAME##_enum i18, NAME##_enum i19, NAME##_enum i20, NAME##_enum i21, NAME##_enum i22, NAME##_enum i23, NAME##_enum i24, NAME##_enum i25, NAME##_enum i26, NAME##_enum i27, NAME##_enum i28, NAME##_enum i29, NAME##_enum i30, NAME##_enum i31, NAME##_enum i32, NAME##_enum i33, NAME##_enum i34, NAME##_enum i35, NAME##_enum i36, NAME##_enum i37, NAME##_enum i38, NAME##_enum i39, NAME##_enum i40, NAME##_enum i41, NAME##_enum i42, NAME##_enum i43, NAME##_enum i44, NAME##_enum i45, NAME##_enum i46, NAME##_enum i47, NAME##_enum i48, NAME##_enum i49, NAME##_enum i50, NAME##_enum i51, NAME##_enum i52, NAME##_enum i53, NAME##_enum i54, NAME##_enum i55, NAME##_enum i56, NAME##_enum i57, NAME##_enum i58, NAME##_enum i59, NAME##_enum i60, NAME##_enum i61, NAME##_enum i62, NAME##_enum i63, NAME##_enum i64, NAME##_enum i65, NAME##_enum i66, NAME##_enum i67, NAME##_enum i68, NAME##_enum i69, NAME##_enum i70, NAME##_enum i71, NAME##_enum i72, NAME##_enum i73, NAME##_enum i74, NAME##_enum i75, NAME##_enum i76)\
	{\
		delim = d;\
		comp = c;\
		manip = m;\
		del_vector = true;\
		obj = o;\
		include = new std::vector<bool>(76, false);\
    if (i1 == NAME##_NULL) return;\
    (*include)[i1]=true;\
    if (i2 == NAME##_NULL) return;\
    (*include)[i2]=true;\
    if (i3 == NAME##_NULL) return;\
    (*include)[i3]=true;\
    if (i4 == NAME##_NULL) return;\
    (*include)[i4]=true;\
    if (i5 == NAME##_NULL) return;\
    (*include)[i5]=true;\
    if (i6 == NAME##_NULL) return;\
    (*include)[i6]=true;\
    if (i7 == NAME##_NULL) return;\
    (*include)[i7]=true;\
    if (i8 == NAME##_NULL) return;\
    (*include)[i8]=true;\
    if (i9 == NAME##_NULL) return;\
    (*include)[i9]=true;\
    if (i10 == NAME##_NULL) return;\
    (*include)[i10]=true;\
    if (i11 == NAME##_NULL) return;\
    (*include)[i11]=true;\
    if (i12 == NAME##_NULL) return;\
    (*include)[i12]=true;\
    if (i13 == NAME##_NULL) return;\
    (*include)[i13]=true;\
    if (i14 == NAME##_NULL) return;\
    (*include)[i14]=true;\
    if (i15 == NAME##_NULL) return;\
    (*include)[i15]=true;\
    if (i16 == NAME##_NULL) return;\
    (*include)[i16]=true;\
    if (i17 == NAME##_NULL) return;\
    (*include)[i17]=true;\
    if (i18 == NAME##_NULL) return;\
    (*include)[i18]=true;\
    if (i19 == NAME##_NULL) return;\
    (*include)[i19]=true;\
    if (i20 == NAME##_NULL) return;\
    (*include)[i20]=true;\
    if (i21 == NAME##_NULL) return;\
    (*include)[i21]=true;\
    if (i22 == NAME##_NULL) return;\
    (*include)[i22]=true;\
    if (i23 == NAME##_NULL) return;\
    (*include)[i23]=true;\
    if (i24 == NAME##_NULL) return;\
    (*include)[i24]=true;\
    if (i25 == NAME##_NULL) return;\
    (*include)[i25]=true;\
    if (i26 == NAME##_NULL) return;\
    (*include)[i26]=true;\
    if (i27 == NAME##_NULL) return;\
    (*include)[i27]=true;\
    if (i28 == NAME##_NULL) return;\
    (*include)[i28]=true;\
    if (i29 == NAME##_NULL) return;\
    (*include)[i29]=true;\
    if (i30 == NAME##_NULL) return;\
    (*include)[i30]=true;\
    if (i31 == NAME##_NULL) return;\
    (*include)[i31]=true;\
    if (i32 == NAME##_NULL) return;\
    (*include)[i32]=true;\
    if (i33 == NAME##_NULL) return;\
    (*include)[i33]=true;\
    if (i34 == NAME##_NULL) return;\
    (*include)[i34]=true;\
    if (i35 == NAME##_NULL) return;\
    (*include)[i35]=true;\
    if (i36 == NAME##_NULL) return;\
    (*include)[i36]=true;\
    if (i37 == NAME##_NULL) return;\
    (*include)[i37]=true;\
    if (i38 == NAME##_NULL) return;\
    (*include)[i38]=true;\
    if (i39 == NAME##_NULL) return;\
    (*include)[i39]=true;\
    if (i40 == NAME##_NULL) return;\
    (*include)[i40]=true;\
    if (i41 == NAME##_NULL) return;\
    (*include)[i41]=true;\
    if (i42 == NAME##_NULL) return;\
    (*include)[i42]=true;\
    if (i43 == NAME##_NULL) return;\
    (*include)[i43]=true;\
    if (i44 == NAME##_NULL) return;\
    (*include)[i44]=true;\
    if (i45 == NAME##_NULL) return;\
    (*include)[i45]=true;\
    if (i46 == NAME##_NULL) return;\
    (*include)[i46]=true;\
    if (i47 == NAME##_NULL) return;\
    (*include)[i47]=true;\
    if (i48 == NAME##_NULL) return;\
    (*include)[i48]=true;\
    if (i49 == NAME##_NULL) return;\
    (*include)[i49]=true;\
    if (i50 == NAME##_NULL) return;\
    (*include)[i50]=true;\
    if (i51 == NAME##_NULL) return;\
    (*include)[i51]=true;\
    if (i52 == NAME##_NULL) return;\
    (*include)[i52]=true;\
    if (i53 == NAME##_NULL) return;\
    (*include)[i53]=true;\
    if (i54 == NAME##_NULL) return;\
    (*include)[i54]=true;\
    if (i55 == NAME##_NULL) return;\
    (*include)[i55]=true;\
    if (i56 == NAME##_NULL) return;\
    (*include)[i56]=true;\
    if (i57 == NAME##_NULL) return;\
    (*include)[i57]=true;\
    if (i58 == NAME##_NULL) return;\
    (*include)[i58]=true;\
    if (i59 == NAME##_NULL) return;\
    (*include)[i59]=true;\
    if (i60 == NAME##_NULL) return;\
    (*include)[i60]=true;\
    if (i61 == NAME##_NULL) return;\
    (*include)[i61]=true;\
    if (i62 == NAME##_NULL) return;\
    (*include)[i62]=true;\
    if (i63 == NAME##_NULL) return;\
    (*include)[i63]=true;\
    if (i64 == NAME##_NULL) return;\
    (*include)[i64]=true;\
    if (i65 == NAME##_NULL) return;\
    (*include)[i65]=true;\
    if (i66 == NAME##_NULL) return;\
    (*include)[i66]=true;\
    if (i67 == NAME##_NULL) return;\
    (*include)[i67]=true;\
    if (i68 == NAME##_NULL) return;\
    (*include)[i68]=true;\
    if (i69 == NAME##_NULL) return;\
    (*include)[i69]=true;\
    if (i70 == NAME##_NULL) return;\
    (*include)[i70]=true;\
    if (i71 == NAME##_NULL) return;\
    (*include)[i71]=true;\
    if (i72 == NAME##_NULL) return;\
    (*include)[i72]=true;\
    if (i73 == NAME##_NULL) return;\
    (*include)[i73]=true;\
    if (i74 == NAME##_NULL) return;\
    (*include)[i74]=true;\
    if (i75 == NAME##_NULL) return;\
    (*include)[i75]=true;\
    if (i76 == NAME##_NULL) return;\
    (*include)[i76]=true;\
	}\
	template <class Manip>\
	std::ostream& operator <<(std::ostream& s, const NAME##_value_list<Manip>& obj)\
	{\
    s << obj.manip << obj.obj->I1 << obj.delim;\
    s << obj.manip << obj.obj->I2 << obj.delim;\
    s << obj.manip << obj.obj->I3 << obj.delim;\
    s << obj.manip << obj.obj->I4 << obj.delim;\
    s << obj.manip << obj.obj->I5 << obj.delim;\
    s << obj.manip << obj.obj->I6 << obj.delim;\
    s << obj.manip << obj.obj->I7 << obj.delim;\
    s << obj.manip << obj.obj->I8 << obj.delim;\
    s << obj.manip << obj.obj->I9 << obj.delim;\
    s << obj.manip << obj.obj->I10 << obj.delim;\
    s << obj.manip << obj.obj->I11 << obj.delim;\
    s << obj.manip << obj.obj->I12 << obj.delim;\
    s << obj.manip << obj.obj->I13 << obj.delim;\
    s << obj.manip << obj.obj->I14 << obj.delim;\
    s << obj.manip << obj.obj->I15 << obj.delim;\
    s << obj.manip << obj.obj->I16 << obj.delim;\
    s << obj.manip << obj.obj->I17 << obj.delim;\
    s << obj.manip << obj.obj->I18 << obj.delim;\
    s << obj.manip << obj.obj->I19 << obj.delim;\
    s << obj.manip << obj.obj->I20 << obj.delim;\
    s << obj.manip << obj.obj->I21 << obj.delim;\
    s << obj.manip << obj.obj->I22 << obj.delim;\
    s << obj.manip << obj.obj->I23 << obj.delim;\
    s << obj.manip << obj.obj->I24 << obj.delim;\
    s << obj.manip << obj.obj->I25 << obj.delim;\
    s << obj.manip << obj.obj->I26 << obj.delim;\
    s << obj.manip << obj.obj->I27 << obj.delim;\
    s << obj.manip << obj.obj->I28 << obj.delim;\
    s << obj.manip << obj.obj->I29 << obj.delim;\
    s << obj.manip << obj.obj->I30 << obj.delim;\
    s << obj.manip << obj.obj->I31 << obj.delim;\
    s << obj.manip << obj.obj->I32 << obj.delim;\
    s << obj.manip << obj.obj->I33 << obj.delim;\
    s << obj.manip << obj.obj->I34 << obj.delim;\
    s << obj.manip << obj.obj->I35 << obj.delim;\
    s << obj.manip << obj.obj->I36 << obj.delim;\
    s << obj.manip << obj.obj->I37 << obj.delim;\
    s << obj.manip << obj.obj->I38 << obj.delim;\
    s << obj.manip << obj.obj->I39 << obj.delim;\
    s << obj.manip << obj.obj->I40 << obj.delim;\
    s << obj.manip << obj.obj->I41 << obj.delim;\
    s << obj.manip << obj.obj->I42 << obj.delim;\
    s << obj.manip << obj.obj->I43 << obj.delim;\
    s << obj.manip << obj.obj->I44 << obj.delim;\
    s << obj.manip << obj.obj->I45 << obj.delim;\
    s << obj.manip << obj.obj->I46 << obj.delim;\
    s << obj.manip << obj.obj->I47 << obj.delim;\
    s << obj.manip << obj.obj->I48 << obj.delim;\
    s << obj.manip << obj.obj->I49 << obj.delim;\
    s << obj.manip << obj.obj->I50 << obj.delim;\
    s << obj.manip << obj.obj->I51 << obj.delim;\
    s << obj.manip << obj.obj->I52 << obj.delim;\
    s << obj.manip << obj.obj->I53 << obj.delim;\
    s << obj.manip << obj.obj->I54 << obj.delim;\
    s << obj.manip << obj.obj->I55 << obj.delim;\
    s << obj.manip << obj.obj->I56 << obj.delim;\
    s << obj.manip << obj.obj->I57 << obj.delim;\
    s << obj.manip << obj.obj->I58 << obj.delim;\
    s << obj.manip << obj.obj->I59 << obj.delim;\
    s << obj.manip << obj.obj->I60 << obj.delim;\
    s << obj.manip << obj.obj->I61 << obj.delim;\
    s << obj.manip << obj.obj->I62 << obj.delim;\
    s << obj.manip << obj.obj->I63 << obj.delim;\
    s << obj.manip << obj.obj->I64 << obj.delim;\
    s << obj.manip << obj.obj->I65 << obj.delim;\
    s << obj.manip << obj.obj->I66 << obj.delim;\
    s << obj.manip << obj.obj->I67 << obj.delim;\
    s << obj.manip << obj.obj->I68 << obj.delim;\
    s << obj.manip << obj.obj->I69 << obj.delim;\
    s << obj.manip << obj.obj->I70 << obj.delim;\
    s << obj.manip << obj.obj->I71 << obj.delim;\
    s << obj.manip << obj.obj->I72 << obj.delim;\
    s << obj.manip << obj.obj->I73 << obj.delim;\
    s << obj.manip << obj.obj->I74 << obj.delim;\
    s << obj.manip << obj.obj->I75 << obj.delim;\
    s << obj.manip << obj.obj->I76;\
		return s;\
	}\
	template <class Manip>\
	std::ostream& operator <<(std::ostream& s, const NAME##_field_list<Manip>& obj)\
	{\
    s << obj.manip << '`' << obj.obj->names[0] << '`' << obj.delim;\
    s << obj.manip << '`' << obj.obj->names[1] << '`' << obj.delim;\
    s << obj.manip << '`' << obj.obj->names[2] << '`' << obj.delim;\
    s << obj.manip << '`' << obj.obj->names[3] << '`' << obj.delim;\
    s << obj.manip << '`' << obj.obj->names[4] << '`' << obj.delim;\
    s << obj.manip << '`' << obj.obj->names[5] << '`' << obj.delim;\
    s << obj.manip << '`' << obj.obj->names[6] << '`' << obj.delim;\
    s << obj.manip << '`' << obj.obj->names[7] << '`' << obj.delim;\
    s << obj.manip << '`' << obj.obj->names[8] << '`' << obj.delim;\
    s << obj.manip << '`' << obj.obj->names[9] << '`' << obj.delim;\
    s << obj.manip << '`' << obj.obj->names[10] << '`' << obj.delim;\
    s << obj.manip << '`' << obj.obj->names[11] << '`' << obj.delim;\
    s << obj.manip << '`' << obj.obj->names[12] << '`' << obj.delim;\
    s << obj.manip << '`' << obj.obj->names[13] << '`' << obj.delim;\
    s << obj.manip << '`' << obj.obj->names[14] << '`' << obj.delim;\
    s << obj.manip << '`' << obj.obj->names[15] << '`' << obj.delim;\
    s << obj.manip << '`' << obj.obj->names[16] << '`' << obj.delim;\
    s << obj.manip << '`' << obj.obj->names[17] << '`' << obj.delim;\
    s << obj.manip << '`' << obj.obj->names[18] << '`' << obj.delim;\
    s << obj.manip << '`' << obj.obj->names[19] << '`' << obj.delim;\
    s << obj.manip << '`' << obj.obj->names[20] << '`' << obj.delim;\
    s << obj.manip << '`' << obj.obj->names[21] << '`' << obj.delim;\
    s << obj.manip << '`' << obj.obj->names[22] << '`' << obj.delim;\
    s << obj.manip << '`' << obj.obj->names[23] << '`' << obj.delim;\
    s << obj.manip << '`' << obj.obj->names[24] << '`' << obj.delim;\
    s << obj.manip << '`' << obj.obj->names[25] << '`' << obj.delim;\
    s << obj.manip << '`' << obj.obj->names[26] << '`' << obj.delim;\
    s << obj.manip << '`' << obj.obj->names[27] << '`' << obj.delim;\
    s << obj.manip << '`' << obj.obj->names[28] << '`' << obj.delim;\
    s << obj.manip << '`' << obj.obj->names[29] << '`' << obj.delim;\
    s << obj.manip << '`' << obj.obj->names[30] << '`' << obj.delim;\
    s << obj.manip << '`' << obj.obj->names[31] << '`' << obj.delim;\
    s << obj.manip << '`' << obj.obj->names[32] << '`' << obj.delim;\
    s << obj.manip << '`' << obj.obj->names[33] << '`' << obj.delim;\
    s << obj.manip << '`' << obj.obj->names[34] << '`' << obj.delim;\
    s << obj.manip << '`' << obj.obj->names[35] << '`' << obj.delim;\
    s << obj.manip << '`' << obj.obj->names[36] << '`' << obj.delim;\
    s << obj.manip << '`' << obj.obj->names[37] << '`' << obj.delim;\
    s << obj.manip << '`' << obj.obj->names[38] << '`' << obj.delim;\
    s << obj.manip << '`' << obj.obj->names[39] << '`' << obj.delim;\
    s << obj.manip << '`' << obj.obj->names[40] << '`' << obj.delim;\
    s << obj.manip << '`' << obj.obj->names[41] << '`' << obj.delim;\
    s << obj.manip << '`' << obj.obj->names[42] << '`' << obj.delim;\
    s << obj.manip << '`' << obj.obj->names[43] << '`' << obj.delim;\
    s << obj.manip << '`' << obj.obj->names[44] << '`' << obj.delim;\
    s << obj.manip << '`' << obj.obj->names[45] << '`' << obj.delim;\
    s << obj.manip << '`' << obj.obj->names[46] << '`' << obj.delim;\
    s << obj.manip << '`' << obj.obj->names[47] << '`' << obj.delim;\
    s << obj.manip << '`' << obj.obj->names[48] << '`' << obj.delim;\
    s << obj.manip << '`' << obj.obj->names[49] << '`' << obj.delim;\
    s << obj.manip << '`' << obj.obj->names[50] << '`' << obj.delim;\
    s << obj.manip << '`' << obj.obj->names[51] << '`' << obj.delim;\
    s << obj.manip << '`' << obj.obj->names[52] << '`' << obj.delim;\
    s << obj.manip << '`' << obj.obj->names[53] << '`' << obj.delim;\
    s << obj.manip << '`' << obj.obj->names[54] << '`' << obj.delim;\
    s << obj.manip << '`' << obj.obj->names[55] << '`' << obj.delim;\
    s << obj.manip << '`' << obj.obj->names[56] << '`' << obj.delim;\
    s << obj.manip << '`' << obj.obj->names[57] << '`' << obj.delim;\
    s << obj.manip << '`' << obj.obj->names[58] << '`' << obj.delim;\
    s << obj.manip << '`' << obj.obj->names[59] << '`' << obj.delim;\
    s << obj.manip << '`' << obj.obj->names[60] << '`' << obj.delim;\
    s << obj.manip << '`' << obj.obj->names[61] << '`' << obj.delim;\
    s << obj.manip << '`' << obj.obj->names[62] << '`' << obj.delim;\
    s << obj.manip << '`' << obj.obj->names[63] << '`' << obj.delim;\
    s << obj.manip << '`' << obj.obj->names[64] << '`' << obj.delim;\
    s << obj.manip << '`' << obj.obj->names[65] << '`' << obj.delim;\
    s << obj.manip << '`' << obj.obj->names[66] << '`' << obj.delim;\
    s << obj.manip << '`' << obj.obj->names[67] << '`' << obj.delim;\
    s << obj.manip << '`' << obj.obj->names[68] << '`' << obj.delim;\
    s << obj.manip << '`' << obj.obj->names[69] << '`' << obj.delim;\
    s << obj.manip << '`' << obj.obj->names[70] << '`' << obj.delim;\
    s << obj.manip << '`' << obj.obj->names[71] << '`' << obj.delim;\
    s << obj.manip << '`' << obj.obj->names[72] << '`' << obj.delim;\
    s << obj.manip << '`' << obj.obj->names[73] << '`' << obj.delim;\
    s << obj.manip << '`' << obj.obj->names[74] << '`' << obj.delim;\
    s << obj.manip << '`' << obj.obj->names[75] << '`';\
		return s;\
	}\
	template <class Manip>\
	std::ostream& operator <<(std::ostream& s, const NAME##_equal_list<Manip>& obj)\
	{\
    s << '`' << obj.obj->names[0] << '`' << obj.comp << obj.manip << obj.obj->I1 << obj.delim;\
    s << '`' << obj.obj->names[1] << '`' << obj.comp << obj.manip << obj.obj->I2 << obj.delim;\
    s << '`' << obj.obj->names[2] << '`' << obj.comp << obj.manip << obj.obj->I3 << obj.delim;\
    s << '`' << obj.obj->names[3] << '`' << obj.comp << obj.manip << obj.obj->I4 << obj.delim;\
    s << '`' << obj.obj->names[4] << '`' << obj.comp << obj.manip << obj.obj->I5 << obj.delim;\
    s << '`' << obj.obj->names[5] << '`' << obj.comp << obj.manip << obj.obj->I6 << obj.delim;\
    s << '`' << obj.obj->names[6] << '`' << obj.comp << obj.manip << obj.obj->I7 << obj.delim;\
    s << '`' << obj.obj->names[7] << '`' << obj.comp << obj.manip << obj.obj->I8 << obj.delim;\
    s << '`' << obj.obj->names[8] << '`' << obj.comp << obj.manip << obj.obj->I9 << obj.delim;\
    s << '`' << obj.obj->names[9] << '`' << obj.comp << obj.manip << obj.obj->I10 << obj.delim;\
    s << '`' << obj.obj->names[10] << '`' << obj.comp << obj.manip << obj.obj->I11 << obj.delim;\
    s << '`' << obj.obj->names[11] << '`' << obj.comp << obj.manip << obj.obj->I12 << obj.delim;\
    s << '`' << obj.obj->names[12] << '`' << obj.comp << obj.manip << obj.obj->I13 << obj.delim;\
    s << '`' << obj.obj->names[13] << '`' << obj.comp << obj.manip << obj.obj->I14 << obj.delim;\
    s << '`' << obj.obj->names[14] << '`' << obj.comp << obj.manip << obj.obj->I15 << obj.delim;\
    s << '`' << obj.obj->names[15] << '`' << obj.comp << obj.manip << obj.obj->I16 << obj.delim;\
    s << '`' << obj.obj->names[16] << '`' << obj.comp << obj.manip << obj.obj->I17 << obj.delim;\
    s << '`' << obj.obj->names[17] << '`' << obj.comp << obj.manip << obj.obj->I18 << obj.delim;\
    s << '`' << obj.obj->names[18] << '`' << obj.comp << obj.manip << obj.obj->I19 << obj.delim;\
    s << '`' << obj.obj->names[19] << '`' << obj.comp << obj.manip << obj.obj->I20 << obj.delim;\
    s << '`' << obj.obj->names[20] << '`' << obj.comp << obj.manip << obj.obj->I21 << obj.delim;\
    s << '`' << obj.obj->names[21] << '`' << obj.comp << obj.manip << obj.obj->I22 << obj.delim;\
    s << '`' << obj.obj->names[22] << '`' << obj.comp << obj.manip << obj.obj->I23 << obj.delim;\
    s << '`' << obj.obj->names[23] << '`' << obj.comp << obj.manip << obj.obj->I24 << obj.delim;\
    s << '`' << obj.obj->names[24] << '`' << obj.comp << obj.manip << obj.obj->I25 << obj.delim;\
    s << '`' << obj.obj->names[25] << '`' << obj.comp << obj.manip << obj.obj->I26 << obj.delim;\
    s << '`' << obj.obj->names[26] << '`' << obj.comp << obj.manip << obj.obj->I27 << obj.delim;\
    s << '`' << obj.obj->names[27] << '`' << obj.comp << obj.manip << obj.obj->I28 << obj.delim;\
    s << '`' << obj.obj->names[28] << '`' << obj.comp << obj.manip << obj.obj->I29 << obj.delim;\
    s << '`' << obj.obj->names[29] << '`' << obj.comp << obj.manip << obj.obj->I30 << obj.delim;\
    s << '`' << obj.obj->names[30] << '`' << obj.comp << obj.manip << obj.obj->I31 << obj.delim;\
    s << '`' << obj.obj->names[31] << '`' << obj.comp << obj.manip << obj.obj->I32 << obj.delim;\
    s << '`' << obj.obj->names[32] << '`' << obj.comp << obj.manip << obj.obj->I33 << obj.delim;\
    s << '`' << obj.obj->names[33] << '`' << obj.comp << obj.manip << obj.obj->I34 << obj.delim;\
    s << '`' << obj.obj->names[34] << '`' << obj.comp << obj.manip << obj.obj->I35 << obj.delim;\
    s << '`' << obj.obj->names[35] << '`' << obj.comp << obj.manip << obj.obj->I36 << obj.delim;\
    s << '`' << obj.obj->names[36] << '`' << obj.comp << obj.manip << obj.obj->I37 << obj.delim;\
    s << '`' << obj.obj->names[37] << '`' << obj.comp << obj.manip << obj.obj->I38 << obj.delim;\
    s << '`' << obj.obj->names[38] << '`' << obj.comp << obj.manip << obj.obj->I39 << obj.delim;\
    s << '`' << obj.obj->names[39] << '`' << obj.comp << obj.manip << obj.obj->I40 << obj.delim;\
    s << '`' << obj.obj->names[40] << '`' << obj.comp << obj.manip << obj.obj->I41 << obj.delim;\
    s << '`' << obj.obj->names[41] << '`' << obj.comp << obj.manip << obj.obj->I42 << obj.delim;\
    s << '`' << obj.obj->names[42] << '`' << obj.comp << obj.manip << obj.obj->I43 << obj.delim;\
    s << '`' << obj.obj->names[43] << '`' << obj.comp << obj.manip << obj.obj->I44 << obj.delim;\
    s << '`' << obj.obj->names[44] << '`' << obj.comp << obj.manip << obj.obj->I45 << obj.delim;\
    s << '`' << obj.obj->names[45] << '`' << obj.comp << obj.manip << obj.obj->I46 << obj.delim;\
    s << '`' << obj.obj->names[46] << '`' << obj.comp << obj.manip << obj.obj->I47 << obj.delim;\
    s << '`' << obj.obj->names[47] << '`' << obj.comp << obj.manip << obj.obj->I48 << obj.delim;\
    s << '`' << obj.obj->names[48] << '`' << obj.comp << obj.manip << obj.obj->I49 << obj.delim;\
    s << '`' << obj.obj->names[49] << '`' << obj.comp << obj.manip << obj.obj->I50 << obj.delim;\
    s << '`' << obj.obj->names[50] << '`' << obj.comp << obj.manip << obj.obj->I51 << obj.delim;\
    s << '`' << obj.obj->names[51] << '`' << obj.comp << obj.manip << obj.obj->I52 << obj.delim;\
    s << '`' << obj.obj->names[52] << '`' << obj.comp << obj.manip << obj.obj->I53 << obj.delim;\
    s << '`' << obj.obj->names[53] << '`' << obj.comp << obj.manip << obj.obj->I54 << obj.delim;\
    s << '`' << obj.obj->names[54] << '`' << obj.comp << obj.manip << obj.obj->I55 << obj.delim;\
    s << '`' << obj.obj->names[55] << '`' << obj.comp << obj.manip << obj.obj->I56 << obj.delim;\
    s << '`' << obj.obj->names[56] << '`' << obj.comp << obj.manip << obj.obj->I57 << obj.delim;\
    s << '`' << obj.obj->names[57] << '`' << obj.comp << obj.manip << obj.obj->I58 << obj.delim;\
    s << '`' << obj.obj->names[58] << '`' << obj.comp << obj.manip << obj.obj->I59 << obj.delim;\
    s << '`' << obj.obj->names[59] << '`' << obj.comp << obj.manip << obj.obj->I60 << obj.delim;\
    s << '`' << obj.obj->names[60] << '`' << obj.comp << obj.manip << obj.obj->I61 << obj.delim;\
    s << '`' << obj.obj->names[61] << '`' << obj.comp << obj.manip << obj.obj->I62 << obj.delim;\
    s << '`' << obj.obj->names[62] << '`' << obj.comp << obj.manip << obj.obj->I63 << obj.delim;\
    s << '`' << obj.obj->names[63] << '`' << obj.comp << obj.manip << obj.obj->I64 << obj.delim;\
    s << '`' << obj.obj->names[64] << '`' << obj.comp << obj.manip << obj.obj->I65 << obj.delim;\
    s << '`' << obj.obj->names[65] << '`' << obj.comp << obj.manip << obj.obj->I66 << obj.delim;\
    s << '`' << obj.obj->names[66] << '`' << obj.comp << obj.manip << obj.obj->I67 << obj.delim;\
    s << '`' << obj.obj->names[67] << '`' << obj.comp << obj.manip << obj.obj->I68 << obj.delim;\
    s << '`' << obj.obj->names[68] << '`' << obj.comp << obj.manip << obj.obj->I69 << obj.delim;\
    s << '`' << obj.obj->names[69] << '`' << obj.comp << obj.manip << obj.obj->I70 << obj.delim;\
    s << '`' << obj.obj->names[70] << '`' << obj.comp << obj.manip << obj.obj->I71 << obj.delim;\
    s << '`' << obj.obj->names[71] << '`' << obj.comp << obj.manip << obj.obj->I72 << obj.delim;\
    s << '`' << obj.obj->names[72] << '`' << obj.comp << obj.manip << obj.obj->I73 << obj.delim;\
    s << '`' << obj.obj->names[73] << '`' << obj.comp << obj.manip << obj.obj->I74 << obj.delim;\
    s << '`' << obj.obj->names[74] << '`' << obj.comp << obj.manip << obj.obj->I75 << obj.delim;\
    s << '`' << obj.obj->names[75] << '`' << obj.comp << obj.manip << obj.obj->I76;\
		return s;\
	}\
	template <class Manip>\
	std::ostream& operator <<(std::ostream& s, const NAME##_cus_value_list<Manip>& obj)\
	{\
		bool before = false;\
    if ((*obj.include)[0]) { \
      s << obj.manip << obj.obj->I1;\
      before = true; \
     } \
    if ((*obj.include)[1]) { \
      if (before) s << obj.delim;\
      s << obj.manip << obj.obj->I2;\
      before = true; \
     } \
    if ((*obj.include)[2]) { \
      if (before) s << obj.delim;\
      s << obj.manip << obj.obj->I3;\
      before = true; \
     } \
    if ((*obj.include)[3]) { \
      if (before) s << obj.delim;\
      s << obj.manip << obj.obj->I4;\
      before = true; \
     } \
    if ((*obj.include)[4]) { \
      if (before) s << obj.delim;\
      s << obj.manip << obj.obj->I5;\
      before = true; \
     } \
    if ((*obj.include)[5]) { \
      if (before) s << obj.delim;\
      s << obj.manip << obj.obj->I6;\
      before = true; \
     } \
    if ((*obj.include)[6]) { \
      if (before) s << obj.delim;\
      s << obj.manip << obj.obj->I7;\
      before = true; \
     } \
    if ((*obj.include)[7]) { \
      if (before) s << obj.delim;\
      s << obj.manip << obj.obj->I8;\
      before = true; \
     } \
    if ((*obj.include)[8]) { \
      if (before) s << obj.delim;\
      s << obj.manip << obj.obj->I9;\
      before = true; \
     } \
    if ((*obj.include)[9]) { \
      if (before) s << obj.delim;\
      s << obj.manip << obj.obj->I10;\
      before = true; \
     } \
    if ((*obj.include)[10]) { \
      if (before) s << obj.delim;\
      s << obj.manip << obj.obj->I11;\
      before = true; \
     } \
    if ((*obj.include)[11]) { \
      if (before) s << obj.delim;\
      s << obj.manip << obj.obj->I12;\
      before = true; \
     } \
    if ((*obj.include)[12]) { \
      if (before) s << obj.delim;\
      s << obj.manip << obj.obj->I13;\
      before = true; \
     } \
    if ((*obj.include)[13]) { \
      if (before) s << obj.delim;\
      s << obj.manip << obj.obj->I14;\
      before = true; \
     } \
    if ((*obj.include)[14]) { \
      if (before) s << obj.delim;\
      s << obj.manip << obj.obj->I15;\
      before = true; \
     } \
    if ((*obj.include)[15]) { \
      if (before) s << obj.delim;\
      s << obj.manip << obj.obj->I16;\
      before = true; \
     } \
    if ((*obj.include)[16]) { \
      if (before) s << obj.delim;\
      s << obj.manip << obj.obj->I17;\
      before = true; \
     } \
    if ((*obj.include)[17]) { \
      if (before) s << obj.delim;\
      s << obj.manip << obj.obj->I18;\
      before = true; \
     } \
    if ((*obj.include)[18]) { \
      if (before) s << obj.delim;\
      s << obj.manip << obj.obj->I19;\
      before = true; \
     } \
    if ((*obj.include)[19]) { \
      if (before) s << obj.delim;\
      s << obj.manip << obj.obj->I20;\
      before = true; \
     } \
    if ((*obj.include)[20]) { \
      if (before) s << obj.delim;\
      s << obj.manip << obj.obj->I21;\
      before = true; \
     } \
    if ((*obj.include)[21]) { \
      if (before) s << obj.delim;\
      s << obj.manip << obj.obj->I22;\
      before = true; \
     } \
    if ((*obj.include)[22]) { \
      if (before) s << obj.delim;\
      s << obj.manip << obj.obj->I23;\
      before = true; \
     } \
    if ((*obj.include)[23]) { \
      if (before) s << obj.delim;\
      s << obj.manip << obj.obj->I24;\
      before = true; \
     } \
    if ((*obj.include)[24]) { \
      if (before) s << obj.delim;\
      s << obj.manip << obj.obj->I25;\
      before = true; \
     } \
    if ((*obj.include)[25]) { \
      if (before) s << obj.delim;\
      s << obj.manip << obj.obj->I26;\
      before = true; \
     } \
    if ((*obj.include)[26]) { \
      if (before) s << obj.delim;\
      s << obj.manip << obj.obj->I27;\
      before = true; \
     } \
    if ((*obj.include)[27]) { \
      if (before) s << obj.delim;\
      s << obj.manip << obj.obj->I28;\
      before = true; \
     } \
    if ((*obj.include)[28]) { \
      if (before) s << obj.delim;\
      s << obj.manip << obj.obj->I29;\
      before = true; \
     } \
    if ((*obj.include)[29]) { \
      if (before) s << obj.delim;\
      s << obj.manip << obj.obj->I30;\
      before = true; \
     } \
    if ((*obj.include)[30]) { \
      if (before) s << obj.delim;\
      s << obj.manip << obj.obj->I31;\
      before = true; \
     } \
    if ((*obj.include)[31]) { \
      if (before) s << obj.delim;\
      s << obj.manip << obj.obj->I32;\
      before = true; \
     } \
    if ((*obj.include)[32]) { \
      if (before) s << obj.delim;\
      s << obj.manip << obj.obj->I33;\
      before = true; \
     } \
    if ((*obj.include)[33]) { \
      if (before) s << obj.delim;\
      s << obj.manip << obj.obj->I34;\
      before = true; \
     } \
    if ((*obj.include)[34]) { \
      if (before) s << obj.delim;\
      s << obj.manip << obj.obj->I35;\
      before = true; \
     } \
    if ((*obj.include)[35]) { \
      if (before) s << obj.delim;\
      s << obj.manip << obj.obj->I36;\
      before = true; \
     } \
    if ((*obj.include)[36]) { \
      if (before) s << obj.delim;\
      s << obj.manip << obj.obj->I37;\
      before = true; \
     } \
    if ((*obj.include)[37]) { \
      if (before) s << obj.delim;\
      s << obj.manip << obj.obj->I38;\
      before = true; \
     } \
    if ((*obj.include)[38]) { \
      if (before) s << obj.delim;\
      s << obj.manip << obj.obj->I39;\
      before = true; \
     } \
    if ((*obj.include)[39]) { \
      if (before) s << obj.delim;\
      s << obj.manip << obj.obj->I40;\
      before = true; \
     } \
    if ((*obj.include)[40]) { \
      if (before) s << obj.delim;\
      s << obj.manip << obj.obj->I41;\
      before = true; \
     } \
    if ((*obj.include)[41]) { \
      if (before) s << obj.delim;\
      s << obj.manip << obj.obj->I42;\
      before = true; \
     } \
    if ((*obj.include)[42]) { \
      if (before) s << obj.delim;\
      s << obj.manip << obj.obj->I43;\
      before = true; \
     } \
    if ((*obj.include)[43]) { \
      if (before) s << obj.delim;\
      s << obj.manip << obj.obj->I44;\
      before = true; \
     } \
    if ((*obj.include)[44]) { \
      if (before) s << obj.delim;\
      s << obj.manip << obj.obj->I45;\
      before = true; \
     } \
    if ((*obj.include)[45]) { \
      if (before) s << obj.delim;\
      s << obj.manip << obj.obj->I46;\
      before = true; \
     } \
    if ((*obj.include)[46]) { \
      if (before) s << obj.delim;\
      s << obj.manip << obj.obj->I47;\
      before = true; \
     } \
    if ((*obj.include)[47]) { \
      if (before) s << obj.delim;\
      s << obj.manip << obj.obj->I48;\
      before = true; \
     } \
    if ((*obj.include)[48]) { \
      if (before) s << obj.delim;\
      s << obj.manip << obj.obj->I49;\
      before = true; \
     } \
    if ((*obj.include)[49]) { \
      if (before) s << obj.delim;\
      s << obj.manip << obj.obj->I50;\
      before = true; \
     } \
    if ((*obj.include)[50]) { \
      if (before) s << obj.delim;\
      s << obj.manip << obj.obj->I51;\
      before = true; \
     } \
    if ((*obj.include)[51]) { \
      if (before) s << obj.delim;\
      s << obj.manip << obj.obj->I52;\
      before = true; \
     } \
    if ((*obj.include)[52]) { \
      if (before) s << obj.delim;\
      s << obj.manip << obj.obj->I53;\
      before = true; \
     } \
    if ((*obj.include)[53]) { \
      if (before) s << obj.delim;\
      s << obj.manip << obj.obj->I54;\
      before = true; \
     } \
    if ((*obj.include)[54]) { \
      if (before) s << obj.delim;\
      s << obj.manip << obj.obj->I55;\
      before = true; \
     } \
    if ((*obj.include)[55]) { \
      if (before) s << obj.delim;\
      s << obj.manip << obj.obj->I56;\
      before = true; \
     } \
    if ((*obj.include)[56]) { \
      if (before) s << obj.delim;\
      s << obj.manip << obj.obj->I57;\
      before = true; \
     } \
    if ((*obj.include)[57]) { \
      if (before) s << obj.delim;\
      s << obj.manip << obj.obj->I58;\
      before = true; \
     } \
    if ((*obj.include)[58]) { \
      if (before) s << obj.delim;\
      s << obj.manip << obj.obj->I59;\
      before = true; \
     } \
    if ((*obj.include)[59]) { \
      if (before) s << obj.delim;\
      s << obj.manip << obj.obj->I60;\
      before = true; \
     } \
    if ((*obj.include)[60]) { \
      if (before) s << obj.delim;\
      s << obj.manip << obj.obj->I61;\
      before = true; \
     } \
    if ((*obj.include)[61]) { \
      if (before) s << obj.delim;\
      s << obj.manip << obj.obj->I62;\
      before = true; \
     } \
    if ((*obj.include)[62]) { \
      if (before) s << obj.delim;\
      s << obj.manip << obj.obj->I63;\
      before = true; \
     } \
    if ((*obj.include)[63]) { \
      if (before) s << obj.delim;\
      s << obj.manip << obj.obj->I64;\
      before = true; \
     } \
    if ((*obj.include)[64]) { \
      if (before) s << obj.delim;\
      s << obj.manip << obj.obj->I65;\
      before = true; \
     } \
    if ((*obj.include)[65]) { \
      if (before) s << obj.delim;\
      s << obj.manip << obj.obj->I66;\
      before = true; \
     } \
    if ((*obj.include)[66]) { \
      if (before) s << obj.delim;\
      s << obj.manip << obj.obj->I67;\
      before = true; \
     } \
    if ((*obj.include)[67]) { \
      if (before) s << obj.delim;\
      s << obj.manip << obj.obj->I68;\
      before = true; \
     } \
    if ((*obj.include)[68]) { \
      if (before) s << obj.delim;\
      s << obj.manip << obj.obj->I69;\
      before = true; \
     } \
    if ((*obj.include)[69]) { \
      if (before) s << obj.delim;\
      s << obj.manip << obj.obj->I70;\
      before = true; \
     } \
    if ((*obj.include)[70]) { \
      if (before) s << obj.delim;\
      s << obj.manip << obj.obj->I71;\
      before = true; \
     } \
    if ((*obj.include)[71]) { \
      if (before) s << obj.delim;\
      s << obj.manip << obj.obj->I72;\
      before = true; \
     } \
    if ((*obj.include)[72]) { \
      if (before) s << obj.delim;\
      s << obj.manip << obj.obj->I73;\
      before = true; \
     } \
    if ((*obj.include)[73]) { \
      if (before) s << obj.delim;\
      s << obj.manip << obj.obj->I74;\
      before = true; \
     } \
    if ((*obj.include)[74]) { \
      if (before) s << obj.delim;\
      s << obj.manip << obj.obj->I75;\
      before = true; \
     } \
    if ((*obj.include)[75]) { \
      if (before) s << obj.delim;\
      s << obj.manip << obj.obj->I76;\
     } \
		return s;\
	}\
	template <class Manip>\
	std::ostream& operator <<(std::ostream& s, const NAME##_cus_field_list<Manip>& obj)\
	{\
		bool before = false;\
    if ((*obj.include)[0]) { \
      s << obj.manip << '`' << obj.obj->names[0] << '`';\
      before = true; \
     } \
    if ((*obj.include)[1]) { \
      if (before) s << obj.delim;\
      s << obj.manip << '`' << obj.obj->names[1] << '`';\
      before = true; \
     } \
    if ((*obj.include)[2]) { \
      if (before) s << obj.delim;\
      s << obj.manip << '`' << obj.obj->names[2] << '`';\
      before = true; \
     } \
    if ((*obj.include)[3]) { \
      if (before) s << obj.delim;\
      s << obj.manip << '`' << obj.obj->names[3] << '`';\
      before = true; \
     } \
    if ((*obj.include)[4]) { \
      if (before) s << obj.delim;\
      s << obj.manip << '`' << obj.obj->names[4] << '`';\
      before = true; \
     } \
    if ((*obj.include)[5]) { \
      if (before) s << obj.delim;\
      s << obj.manip << '`' << obj.obj->names[5] << '`';\
      before = true; \
     } \
    if ((*obj.include)[6]) { \
      if (before) s << obj.delim;\
      s << obj.manip << '`' << obj.obj->names[6] << '`';\
      before = true; \
     } \
    if ((*obj.include)[7]) { \
      if (before) s << obj.delim;\
      s << obj.manip << '`' << obj.obj->names[7] << '`';\
      before = true; \
     } \
    if ((*obj.include)[8]) { \
      if (before) s << obj.delim;\
      s << obj.manip << '`' << obj.obj->names[8] << '`';\
      before = true; \
     } \
    if ((*obj.include)[9]) { \
      if (before) s << obj.delim;\
      s << obj.manip << '`' << obj.obj->names[9] << '`';\
      before = true; \
     } \
    if ((*obj.include)[10]) { \
      if (before) s << obj.delim;\
      s << obj.manip << '`' << obj.obj->names[10] << '`';\
      before = true; \
     } \
    if ((*obj.include)[11]) { \
      if (before) s << obj.delim;\
      s << obj.manip << '`' << obj.obj->names[11] << '`';\
      before = true; \
     } \
    if ((*obj.include)[12]) { \
      if (before) s << obj.delim;\
      s << obj.manip << '`' << obj.obj->names[12] << '`';\
      before = true; \
     } \
    if ((*obj.include)[13]) { \
      if (before) s << obj.delim;\
      s << obj.manip << '`' << obj.obj->names[13] << '`';\
      before = true; \
     } \
    if ((*obj.include)[14]) { \
      if (before) s << obj.delim;\
      s << obj.manip << '`' << obj.obj->names[14] << '`';\
      before = true; \
     } \
    if ((*obj.include)[15]) { \
      if (before) s << obj.delim;\
      s << obj.manip << '`' << obj.obj->names[15] << '`';\
      before = true; \
     } \
    if ((*obj.include)[16]) { \
      if (before) s << obj.delim;\
      s << obj.manip << '`' << obj.obj->names[16] << '`';\
      before = true; \
     } \
    if ((*obj.include)[17]) { \
      if (before) s << obj.delim;\
      s << obj.manip << '`' << obj.obj->names[17] << '`';\
      before = true; \
     } \
    if ((*obj.include)[18]) { \
      if (before) s << obj.delim;\
      s << obj.manip << '`' << obj.obj->names[18] << '`';\
      before = true; \
     } \
    if ((*obj.include)[19]) { \
      if (before) s << obj.delim;\
      s << obj.manip << '`' << obj.obj->names[19] << '`';\
      before = true; \
     } \
    if ((*obj.include)[20]) { \
      if (before) s << obj.delim;\
      s << obj.manip << '`' << obj.obj->names[20] << '`';\
      before = true; \
     } \
    if ((*obj.include)[21]) { \
      if (before) s << obj.delim;\
      s << obj.manip << '`' << obj.obj->names[21] << '`';\
      before = true; \
     } \
    if ((*obj.include)[22]) { \
      if (before) s << obj.delim;\
      s << obj.manip << '`' << obj.obj->names[22] << '`';\
      before = true; \
     } \
    if ((*obj.include)[23]) { \
      if (before) s << obj.delim;\
      s << obj.manip << '`' << obj.obj->names[23] << '`';\
      before = true; \
     } \
    if ((*obj.include)[24]) { \
      if (before) s << obj.delim;\
      s << obj.manip << '`' << obj.obj->names[24] << '`';\
      before = true; \
     } \
    if ((*obj.include)[25]) { \
      if (before) s << obj.delim;\
      s << obj.manip << '`' << obj.obj->names[25] << '`';\
      before = true; \
     } \
    if ((*obj.include)[26]) { \
      if (before) s << obj.delim;\
      s << obj.manip << '`' << obj.obj->names[26] << '`';\
      before = true; \
     } \
    if ((*obj.include)[27]) { \
      if (before) s << obj.delim;\
      s << obj.manip << '`' << obj.obj->names[27] << '`';\
      before = true; \
     } \
    if ((*obj.include)[28]) { \
      if (before) s << obj.delim;\
      s << obj.manip << '`' << obj.obj->names[28] << '`';\
      before = true; \
     } \
    if ((*obj.include)[29]) { \
      if (before) s << obj.delim;\
      s << obj.manip << '`' << obj.obj->names[29] << '`';\
      before = true; \
     } \
    if ((*obj.include)[30]) { \
      if (before) s << obj.delim;\
      s << obj.manip << '`' << obj.obj->names[30] << '`';\
      before = true; \
     } \
    if ((*obj.include)[31]) { \
      if (before) s << obj.delim;\
      s << obj.manip << '`' << obj.obj->names[31] << '`';\
      before = true; \
     } \
    if ((*obj.include)[32]) { \
      if (before) s << obj.delim;\
      s << obj.manip << '`' << obj.obj->names[32] << '`';\
      before = true; \
     } \
    if ((*obj.include)[33]) { \
      if (before) s << obj.delim;\
      s << obj.manip << '`' << obj.obj->names[33] << '`';\
      before = true; \
     } \
    if ((*obj.include)[34]) { \
      if (before) s << obj.delim;\
      s << obj.manip << '`' << obj.obj->names[34] << '`';\
      before = true; \
     } \
    if ((*obj.include)[35]) { \
      if (before) s << obj.delim;\
      s << obj.manip << '`' << obj.obj->names[35] << '`';\
      before = true; \
     } \
    if ((*obj.include)[36]) { \
      if (before) s << obj.delim;\
      s << obj.manip << '`' << obj.obj->names[36] << '`';\
      before = true; \
     } \
    if ((*obj.include)[37]) { \
      if (before) s << obj.delim;\
      s << obj.manip << '`' << obj.obj->names[37] << '`';\
      before = true; \
     } \
    if ((*obj.include)[38]) { \
      if (before) s << obj.delim;\
      s << obj.manip << '`' << obj.obj->names[38] << '`';\
      before = true; \
     } \
    if ((*obj.include)[39]) { \
      if (before) s << obj.delim;\
      s << obj.manip << '`' << obj.obj->names[39] << '`';\
      before = true; \
     } \
    if ((*obj.include)[40]) { \
      if (before) s << obj.delim;\
      s << obj.manip << '`' << obj.obj->names[40] << '`';\
      before = true; \
     } \
    if ((*obj.include)[41]) { \
      if (before) s << obj.delim;\
      s << obj.manip << '`' << obj.obj->names[41] << '`';\
      before = true; \
     } \
    if ((*obj.include)[42]) { \
      if (before) s << obj.delim;\
      s << obj.manip << '`' << obj.obj->names[42] << '`';\
      before = true; \
     } \
    if ((*obj.include)[43]) { \
      if (before) s << obj.delim;\
      s << obj.manip << '`' << obj.obj->names[43] << '`';\
      before = true; \
     } \
    if ((*obj.include)[44]) { \
      if (before) s << obj.delim;\
      s << obj.manip << '`' << obj.obj->names[44] << '`';\
      before = true; \
     } \
    if ((*obj.include)[45]) { \
      if (before) s << obj.delim;\
      s << obj.manip << '`' << obj.obj->names[45] << '`';\
      before = true; \
     } \
    if ((*obj.include)[46]) { \
      if (before) s << obj.delim;\
      s << obj.manip << '`' << obj.obj->names[46] << '`';\
      before = true; \
     } \
    if ((*obj.include)[47]) { \
      if (before) s << obj.delim;\
      s << obj.manip << '`' << obj.obj->names[47] << '`';\
      before = true; \
     } \
    if ((*obj.include)[48]) { \
      if (before) s << obj.delim;\
      s << obj.manip << '`' << obj.obj->names[48] << '`';\
      before = true; \
     } \
    if ((*obj.include)[49]) { \
      if (before) s << obj.delim;\
      s << obj.manip << '`' << obj.obj->names[49] << '`';\
      before = true; \
     } \
    if ((*obj.include)[50]) { \
      if (before) s << obj.delim;\
      s << obj.manip << '`' << obj.obj->names[50] << '`';\
      before = true; \
     } \
    if ((*obj.include)[51]) { \
      if (before) s << obj.delim;\
      s << obj.manip << '`' << obj.obj->names[51] << '`';\
      before = true; \
     } \
    if ((*obj.include)[52]) { \
      if (before) s << obj.delim;\
      s << obj.manip << '`' << obj.obj->names[52] << '`';\
      before = true; \
     } \
    if ((*obj.include)[53]) { \
      if (before) s << obj.delim;\
      s << obj.manip << '`' << obj.obj->names[53] << '`';\
      before = true; \
     } \
    if ((*obj.include)[54]) { \
      if (before) s << obj.delim;\
      s << obj.manip << '`' << obj.obj->names[54] << '`';\
      before = true; \
     } \
    if ((*obj.include)[55]) { \
      if (before) s << obj.delim;\
      s << obj.manip << '`' << obj.obj->names[55] << '`';\
      before = true; \
     } \
    if ((*obj.include)[56]) { \
      if (before) s << obj.delim;\
      s << obj.manip << '`' << obj.obj->names[56] << '`';\
      before = true; \
     } \
    if ((*obj.include)[57]) { \
      if (before) s << obj.delim;\
      s << obj.manip << '`' << obj.obj->names[57] << '`';\
      before = true; \
     } \
    if ((*obj.include)[58]) { \
      if (before) s << obj.delim;\
      s << obj.manip << '`' << obj.obj->names[58] << '`';\
      before = true; \
     } \
    if ((*obj.include)[59]) { \
      if (before) s << obj.delim;\
      s << obj.manip << '`' << obj.obj->names[59] << '`';\
      before = true; \
     } \
    if ((*obj.include)[60]) { \
      if (before) s << obj.delim;\
      s << obj.manip << '`' << obj.obj->names[60] << '`';\
      before = true; \
     } \
    if ((*obj.include)[61]) { \
      if (before) s << obj.delim;\
      s << obj.manip << '`' << obj.obj->names[61] << '`';\
      before = true; \
     } \
    if ((*obj.include)[62]) { \
      if (before) s << obj.delim;\
      s << obj.manip << '`' << obj.obj->names[62] << '`';\
      before = true; \
     } \
    if ((*obj.include)[63]) { \
      if (before) s << obj.delim;\
      s << obj.manip << '`' << obj.obj->names[63] << '`';\
      before = true; \
     } \
    if ((*obj.include)[64]) { \
      if (before) s << obj.delim;\
      s << obj.manip << '`' << obj.obj->names[64] << '`';\
      before = true; \
     } \
    if ((*obj.include)[65]) { \
      if (before) s << obj.delim;\
      s << obj.manip << '`' << obj.obj->names[65] << '`';\
      before = true; \
     } \
    if ((*obj.include)[66]) { \
      if (before) s << obj.delim;\
      s << obj.manip << '`' << obj.obj->names[66] << '`';\
      before = true; \
     } \
    if ((*obj.include)[67]) { \
      if (before) s << obj.delim;\
      s << obj.manip << '`' << obj.obj->names[67] << '`';\
      before = true; \
     } \
    if ((*obj.include)[68]) { \
      if (before) s << obj.delim;\
      s << obj.manip << '`' << obj.obj->names[68] << '`';\
      before = true; \
     } \
    if ((*obj.include)[69]) { \
      if (before) s << obj.delim;\
      s << obj.manip << '`' << obj.obj->names[69] << '`';\
      before = true; \
     } \
    if ((*obj.include)[70]) { \
      if (before) s << obj.delim;\
      s << obj.manip << '`' << obj.obj->names[70] << '`';\
      before = true; \
     } \
    if ((*obj.include)[71]) { \
      if (before) s << obj.delim;\
      s << obj.manip << '`' << obj.obj->names[71] << '`';\
      before = true; \
     } \
    if ((*obj.include)[72]) { \
      if (before) s << obj.delim;\
      s << obj.manip << '`' << obj.obj->names[72] << '`';\
      before = true; \
     } \
    if ((*obj.include)[73]) { \
      if (before) s << obj.delim;\
      s << obj.manip << '`' << obj.obj->names[73] << '`';\
      before = true; \
     } \
    if ((*obj.include)[74]) { \
      if (before) s << obj.delim;\
      s << obj.manip << '`' << obj.obj->names[74] << '`';\
      before = true; \
     } \
    if ((*obj.include)[75]) { \
      if (before) s << obj.delim;\
      s << obj.manip << '`' << obj.obj->names[75] << '`';\
     } \
		return s;\
	}\
	template <class Manip>\
	std::ostream& operator <<(std::ostream& s, const NAME##_cus_equal_list<Manip>& obj)\
	{\
		bool before = false;\
    if ((*obj.include)[0]) { \
      s << '`' << obj.obj->names[0] << '`' << obj.comp << obj.manip << obj.obj->I1;\
      before = true; \
     } \
    if ((*obj.include)[1]) { \
      if (before) s << obj.delim;\
      s << '`' << obj.obj->names[1] << '`' << obj.comp << obj.manip << obj.obj->I2;\
      before = true; \
     } \
    if ((*obj.include)[2]) { \
      if (before) s << obj.delim;\
      s << '`' << obj.obj->names[2] << '`' << obj.comp << obj.manip << obj.obj->I3;\
      before = true; \
     } \
    if ((*obj.include)[3]) { \
      if (before) s << obj.delim;\
      s << '`' << obj.obj->names[3] << '`' << obj.comp << obj.manip << obj.obj->I4;\
      before = true; \
     } \
    if ((*obj.include)[4]) { \
      if (before) s << obj.delim;\
      s << '`' << obj.obj->names[4] << '`' << obj.comp << obj.manip << obj.obj->I5;\
      before = true; \
     } \
    if ((*obj.include)[5]) { \
      if (before) s << obj.delim;\
      s << '`' << obj.obj->names[5] << '`' << obj.comp << obj.manip << obj.obj->I6;\
      before = true; \
     } \
    if ((*obj.include)[6]) { \
      if (before) s << obj.delim;\
      s << '`' << obj.obj->names[6] << '`' << obj.comp << obj.manip << obj.obj->I7;\
      before = true; \
     } \
    if ((*obj.include)[7]) { \
      if (before) s << obj.delim;\
      s << '`' << obj.obj->names[7] << '`' << obj.comp << obj.manip << obj.obj->I8;\
      before = true; \
     } \
    if ((*obj.include)[8]) { \
      if (before) s << obj.delim;\
      s << '`' << obj.obj->names[8] << '`' << obj.comp << obj.manip << obj.obj->I9;\
      before = true; \
     } \
    if ((*obj.include)[9]) { \
      if (before) s << obj.delim;\
      s << '`' << obj.obj->names[9] << '`' << obj.comp << obj.manip << obj.obj->I10;\
      before = true; \
     } \
    if ((*obj.include)[10]) { \
      if (before) s << obj.delim;\
      s << '`' << obj.obj->names[10] << '`' << obj.comp << obj.manip << obj.obj->I11;\
      before = true; \
     } \
    if ((*obj.include)[11]) { \
      if (before) s << obj.delim;\
      s << '`' << obj.obj->names[11] << '`' << obj.comp << obj.manip << obj.obj->I12;\
      before = true; \
     } \
    if ((*obj.include)[12]) { \
      if (before) s << obj.delim;\
      s << '`' << obj.obj->names[12] << '`' << obj.comp << obj.manip << obj.obj->I13;\
      before = true; \
     } \
    if ((*obj.include)[13]) { \
      if (before) s << obj.delim;\
      s << '`' << obj.obj->names[13] << '`' << obj.comp << obj.manip << obj.obj->I14;\
      before = true; \
     } \
    if ((*obj.include)[14]) { \
      if (before) s << obj.delim;\
      s << '`' << obj.obj->names[14] << '`' << obj.comp << obj.manip << obj.obj->I15;\
      before = true; \
     } \
    if ((*obj.include)[15]) { \
      if (before) s << obj.delim;\
      s << '`' << obj.obj->names[15] << '`' << obj.comp << obj.manip << obj.obj->I16;\
      before = true; \
     } \
    if ((*obj.include)[16]) { \
      if (before) s << obj.delim;\
      s << '`' << obj.obj->names[16] << '`' << obj.comp << obj.manip << obj.obj->I17;\
      before = true; \
     } \
    if ((*obj.include)[17]) { \
      if (before) s << obj.delim;\
      s << '`' << obj.obj->names[17] << '`' << obj.comp << obj.manip << obj.obj->I18;\
      before = true; \
     } \
    if ((*obj.include)[18]) { \
      if (before) s << obj.delim;\
      s << '`' << obj.obj->names[18] << '`' << obj.comp << obj.manip << obj.obj->I19;\
      before = true; \
     } \
    if ((*obj.include)[19]) { \
      if (before) s << obj.delim;\
      s << '`' << obj.obj->names[19] << '`' << obj.comp << obj.manip << obj.obj->I20;\
      before = true; \
     } \
    if ((*obj.include)[20]) { \
      if (before) s << obj.delim;\
      s << '`' << obj.obj->names[20] << '`' << obj.comp << obj.manip << obj.obj->I21;\
      before = true; \
     } \
    if ((*obj.include)[21]) { \
      if (before) s << obj.delim;\
      s << '`' << obj.obj->names[21] << '`' << obj.comp << obj.manip << obj.obj->I22;\
      before = true; \
     } \
    if ((*obj.include)[22]) { \
      if (before) s << obj.delim;\
      s << '`' << obj.obj->names[22] << '`' << obj.comp << obj.manip << obj.obj->I23;\
      before = true; \
     } \
    if ((*obj.include)[23]) { \
      if (before) s << obj.delim;\
      s << '`' << obj.obj->names[23] << '`' << obj.comp << obj.manip << obj.obj->I24;\
      before = true; \
     } \
    if ((*obj.include)[24]) { \
      if (before) s << obj.delim;\
      s << '`' << obj.obj->names[24] << '`' << obj.comp << obj.manip << obj.obj->I25;\
      before = true; \
     } \
    if ((*obj.include)[25]) { \
      if (before) s << obj.delim;\
      s << '`' << obj.obj->names[25] << '`' << obj.comp << obj.manip << obj.obj->I26;\
      before = true; \
     } \
    if ((*obj.include)[26]) { \
      if (before) s << obj.delim;\
      s << '`' << obj.obj->names[26] << '`' << obj.comp << obj.manip << obj.obj->I27;\
      before = true; \
     } \
    if ((*obj.include)[27]) { \
      if (before) s << obj.delim;\
      s << '`' << obj.obj->names[27] << '`' << obj.comp << obj.manip << obj.obj->I28;\
      before = true; \
     } \
    if ((*obj.include)[28]) { \
      if (before) s << obj.delim;\
      s << '`' << obj.obj->names[28] << '`' << obj.comp << obj.manip << obj.obj->I29;\
      before = true; \
     } \
    if ((*obj.include)[29]) { \
      if (before) s << obj.delim;\
      s << '`' << obj.obj->names[29] << '`' << obj.comp << obj.manip << obj.obj->I30;\
      before = true; \
     } \
    if ((*obj.include)[30]) { \
      if (before) s << obj.delim;\
      s << '`' << obj.obj->names[30] << '`' << obj.comp << obj.manip << obj.obj->I31;\
      before = true; \
     } \
    if ((*obj.include)[31]) { \
      if (before) s << obj.delim;\
      s << '`' << obj.obj->names[31] << '`' << obj.comp << obj.manip << obj.obj->I32;\
      before = true; \
     } \
    if ((*obj.include)[32]) { \
      if (before) s << obj.delim;\
      s << '`' << obj.obj->names[32] << '`' << obj.comp << obj.manip << obj.obj->I33;\
      before = true; \
     } \
    if ((*obj.include)[33]) { \
      if (before) s << obj.delim;\
      s << '`' << obj.obj->names[33] << '`' << obj.comp << obj.manip << obj.obj->I34;\
      before = true; \
     } \
    if ((*obj.include)[34]) { \
      if (before) s << obj.delim;\
      s << '`' << obj.obj->names[34] << '`' << obj.comp << obj.manip << obj.obj->I35;\
      before = true; \
     } \
    if ((*obj.include)[35]) { \
      if (before) s << obj.delim;\
      s << '`' << obj.obj->names[35] << '`' << obj.comp << obj.manip << obj.obj->I36;\
      before = true; \
     } \
    if ((*obj.include)[36]) { \
      if (before) s << obj.delim;\
      s << '`' << obj.obj->names[36] << '`' << obj.comp << obj.manip << obj.obj->I37;\
      before = true; \
     } \
    if ((*obj.include)[37]) { \
      if (before) s << obj.delim;\
      s << '`' << obj.obj->names[37] << '`' << obj.comp << obj.manip << obj.obj->I38;\
      before = true; \
     } \
    if ((*obj.include)[38]) { \
      if (before) s << obj.delim;\
      s << '`' << obj.obj->names[38] << '`' << obj.comp << obj.manip << obj.obj->I39;\
      before = true; \
     } \
    if ((*obj.include)[39]) { \
      if (before) s << obj.delim;\
      s << '`' << obj.obj->names[39] << '`' << obj.comp << obj.manip << obj.obj->I40;\
      before = true; \
     } \
    if ((*obj.include)[40]) { \
      if (before) s << obj.delim;\
      s << '`' << obj.obj->names[40] << '`' << obj.comp << obj.manip << obj.obj->I41;\
      before = true; \
     } \
    if ((*obj.include)[41]) { \
      if (before) s << obj.delim;\
      s << '`' << obj.obj->names[41] << '`' << obj.comp << obj.manip << obj.obj->I42;\
      before = true; \
     } \
    if ((*obj.include)[42]) { \
      if (before) s << obj.delim;\
      s << '`' << obj.obj->names[42] << '`' << obj.comp << obj.manip << obj.obj->I43;\
      before = true; \
     } \
    if ((*obj.include)[43]) { \
      if (before) s << obj.delim;\
      s << '`' << obj.obj->names[43] << '`' << obj.comp << obj.manip << obj.obj->I44;\
      before = true; \
     } \
    if ((*obj.include)[44]) { \
      if (before) s << obj.delim;\
      s << '`' << obj.obj->names[44] << '`' << obj.comp << obj.manip << obj.obj->I45;\
      before = true; \
     } \
    if ((*obj.include)[45]) { \
      if (before) s << obj.delim;\
      s << '`' << obj.obj->names[45] << '`' << obj.comp << obj.manip << obj.obj->I46;\
      before = true; \
     } \
    if ((*obj.include)[46]) { \
      if (before) s << obj.delim;\
      s << '`' << obj.obj->names[46] << '`' << obj.comp << obj.manip << obj.obj->I47;\
      before = true; \
     } \
    if ((*obj.include)[47]) { \
      if (before) s << obj.delim;\
      s << '`' << obj.obj->names[47] << '`' << obj.comp << obj.manip << obj.obj->I48;\
      before = true; \
     } \
    if ((*obj.include)[48]) { \
      if (before) s << obj.delim;\
      s << '`' << obj.obj->names[48] << '`' << obj.comp << obj.manip << obj.obj->I49;\
      before = true; \
     } \
    if ((*obj.include)[49]) { \
      if (before) s << obj.delim;\
      s << '`' << obj.obj->names[49] << '`' << obj.comp << obj.manip << obj.obj->I50;\
      before = true; \
     } \
    if ((*obj.include)[50]) { \
      if (before) s << obj.delim;\
      s << '`' << obj.obj->names[50] << '`' << obj.comp << obj.manip << obj.obj->I51;\
      before = true; \
     } \
    if ((*obj.include)[51]) { \
      if (before) s << obj.delim;\
      s << '`' << obj.obj->names[51] << '`' << obj.comp << obj.manip << obj.obj->I52;\
      before = true; \
     } \
    if ((*obj.include)[52]) { \
      if (before) s << obj.delim;\
      s << '`' << obj.obj->names[52] << '`' << obj.comp << obj.manip << obj.obj->I53;\
      before = true; \
     } \
    if ((*obj.include)[53]) { \
      if (before) s << obj.delim;\
      s << '`' << obj.obj->names[53] << '`' << obj.comp << obj.manip << obj.obj->I54;\
      before = true; \
     } \
    if ((*obj.include)[54]) { \
      if (before) s << obj.delim;\
      s << '`' << obj.obj->names[54] << '`' << obj.comp << obj.manip << obj.obj->I55;\
      before = true; \
     } \
    if ((*obj.include)[55]) { \
      if (before) s << obj.delim;\
      s << '`' << obj.obj->names[55] << '`' << obj.comp << obj.manip << obj.obj->I56;\
      before = true; \
     } \
    if ((*obj.include)[56]) { \
      if (before) s << obj.delim;\
      s << '`' << obj.obj->names[56] << '`' << obj.comp << obj.manip << obj.obj->I57;\
      before = true; \
     } \
    if ((*obj.include)[57]) { \
      if (before) s << obj.delim;\
      s << '`' << obj.obj->names[57] << '`' << obj.comp << obj.manip << obj.obj->I58;\
      before = true; \
     } \
    if ((*obj.include)[58]) { \
      if (before) s << obj.delim;\
      s << '`' << obj.obj->names[58] << '`' << obj.comp << obj.manip << obj.obj->I59;\
      before = true; \
     } \
    if ((*obj.include)[59]) { \
      if (before) s << obj.delim;\
      s << '`' << obj.obj->names[59] << '`' << obj.comp << obj.manip << obj.obj->I60;\
      before = true; \
     } \
    if ((*obj.include)[60]) { \
      if (before) s << obj.delim;\
      s << '`' << obj.obj->names[60] << '`' << obj.comp << obj.manip << obj.obj->I61;\
      before = true; \
     } \
    if ((*obj.include)[61]) { \
      if (before) s << obj.delim;\
      s << '`' << obj.obj->names[61] << '`' << obj.comp << obj.manip << obj.obj->I62;\
      before = true; \
     } \
    if ((*obj.include)[62]) { \
      if (before) s << obj.delim;\
      s << '`' << obj.obj->names[62] << '`' << obj.comp << obj.manip << obj.obj->I63;\
      before = true; \
     } \
    if ((*obj.include)[63]) { \
      if (before) s << obj.delim;\
      s << '`' << obj.obj->names[63] << '`' << obj.comp << obj.manip << obj.obj->I64;\
      before = true; \
     } \
    if ((*obj.include)[64]) { \
      if (before) s << obj.delim;\
      s << '`' << obj.obj->names[64] << '`' << obj.comp << obj.manip << obj.obj->I65;\
      before = true; \
     } \
    if ((*obj.include)[65]) { \
      if (before) s << obj.delim;\
      s << '`' << obj.obj->names[65] << '`' << obj.comp << obj.manip << obj.obj->I66;\
      before = true; \
     } \
    if ((*obj.include)[66]) { \
      if (before) s << obj.delim;\
      s << '`' << obj.obj->names[66] << '`' << obj.comp << obj.manip << obj.obj->I67;\
      before = true; \
     } \
    if ((*obj.include)[67]) { \
      if (before) s << obj.delim;\
      s << '`' << obj.obj->names[67] << '`' << obj.comp << obj.manip << obj.obj->I68;\
      before = true; \
     } \
    if ((*obj.include)[68]) { \
      if (before) s << obj.delim;\
      s << '`' << obj.obj->names[68] << '`' << obj.comp << obj.manip << obj.obj->I69;\
      before = true; \
     } \
    if ((*obj.include)[69]) { \
      if (before) s << obj.delim;\
      s << '`' << obj.obj->names[69] << '`' << obj.comp << obj.manip << obj.obj->I70;\
      before = true; \
     } \
    if ((*obj.include)[70]) { \
      if (before) s << obj.delim;\
      s << '`' << obj.obj->names[70] << '`' << obj.comp << obj.manip << obj.obj->I71;\
      before = true; \
     } \
    if ((*obj.include)[71]) { \
      if (before) s << obj.delim;\
      s << '`' << obj.obj->names[71] << '`' << obj.comp << obj.manip << obj.obj->I72;\
      before = true; \
     } \
    if ((*obj.include)[72]) { \
      if (before) s << obj.delim;\
      s << '`' << obj.obj->names[72] << '`' << obj.comp << obj.manip << obj.obj->I73;\
      before = true; \
     } \
    if ((*obj.include)[73]) { \
      if (before) s << obj.delim;\
      s << '`' << obj.obj->names[73] << '`' << obj.comp << obj.manip << obj.obj->I74;\
      before = true; \
     } \
    if ((*obj.include)[74]) { \
      if (before) s << obj.delim;\
      s << '`' << obj.obj->names[74] << '`' << obj.comp << obj.manip << obj.obj->I75;\
      before = true; \
     } \
    if ((*obj.include)[75]) { \
      if (before) s << obj.delim;\
      s << '`' << obj.obj->names[75] << '`' << obj.comp << obj.manip << obj.obj->I76;\
     } \
		return s;\
	}\
	template <class Manip>\
	inline NAME##_value_list<Manip> NAME::value_list(const char* d, Manip m) const\
			{ return NAME##_value_list<Manip> (this, d, m); } \
	template <class Manip>\
	inline NAME##_field_list<Manip> NAME::field_list(const char* d, Manip m) const\
			{ return NAME##_field_list<Manip> (this, d, m); } \
	template <class Manip>\
	inline NAME##_equal_list<Manip> NAME::equal_list(const char* d, const char* c, Manip m) const\
			{ return NAME##_equal_list<Manip> (this, d, c, m); } \
	template <class Manip>\
	inline NAME##_cus_value_list<Manip> NAME::value_list(const char* d, Manip m,\
			bool i1, bool i2, bool i3, bool i4, bool i5, bool i6, bool i7, bool i8, bool i9, bool i10, bool i11, bool i12, bool i13, bool i14, bool i15, bool i16, bool i17, bool i18, bool i19, bool i20, bool i21, bool i22, bool i23, bool i24, bool i25, bool i26, bool i27, bool i28, bool i29, bool i30, bool i31, bool i32, bool i33, bool i34, bool i35, bool i36, bool i37, bool i38, bool i39, bool i40, bool i41, bool i42, bool i43, bool i44, bool i45, bool i46, bool i47, bool i48, bool i49, bool i50, bool i51, bool i52, bool i53, bool i54, bool i55, bool i56, bool i57, bool i58, bool i59, bool i60, bool i61, bool i62, bool i63, bool i64, bool i65, bool i66, bool i67, bool i68, bool i69, bool i70, bool i71, bool i72, bool i73, bool i74, bool i75, bool i76) const\
			{ return NAME##_cus_value_list<Manip> (this, d, m, i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12, i13, i14, i15, i16, i17, i18, i19, i20, i21, i22, i23, i24, i25, i26, i27, i28, i29, i30, i31, i32, i33, i34, i35, i36, i37, i38, i39, i40, i41, i42, i43, i44, i45, i46, i47, i48, i49, i50, i51, i52, i53, i54, i55, i56, i57, i58, i59, i60, i61, i62, i63, i64, i65, i66, i67, i68, i69, i70, i71, i72, i73, i74, i75, i76); }\
	template <class Manip>\
	inline NAME##_cus_field_list<Manip> NAME::field_list(const char* d, Manip m,\
			bool i1, bool i2, bool i3, bool i4, bool i5, bool i6, bool i7, bool i8, bool i9, bool i10, bool i11, bool i12, bool i13, bool i14, bool i15, bool i16, bool i17, bool i18, bool i19, bool i20, bool i21, bool i22, bool i23, bool i24, bool i25, bool i26, bool i27, bool i28, bool i29, bool i30, bool i31, bool i32, bool i33, bool i34, bool i35, bool i36, bool i37, bool i38, bool i39, bool i40, bool i41, bool i42, bool i43, bool i44, bool i45, bool i46, bool i47, bool i48, bool i49, bool i50, bool i51, bool i52, bool i53, bool i54, bool i55, bool i56, bool i57, bool i58, bool i59, bool i60, bool i61, bool i62, bool i63, bool i64, bool i65, bool i66, bool i67, bool i68, bool i69, bool i70, bool i71, bool i72, bool i73, bool i74, bool i75, bool i76) const\
			{ return NAME##_cus_field_list<Manip> (this, d, m, i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12, i13, i14, i15, i16, i17, i18, i19, i20, i21, i22, i23, i24, i25, i26, i27, i28, i29, i30, i31, i32, i33, i34, i35, i36, i37, i38, i39, i40, i41, i42, i43, i44, i45, i46, i47, i48, i49, i50, i51, i52, i53, i54, i55, i56, i57, i58, i59, i60, i61, i62, i63, i64, i65, i66, i67, i68, i69, i70, i71, i72, i73, i74, i75, i76); }\
	template <class Manip>\
	inline NAME##_cus_equal_list<Manip> NAME::equal_list(const char* d, const char* c, Manip m,\
			bool i1, bool i2, bool i3, bool i4, bool i5, bool i6, bool i7, bool i8, bool i9, bool i10, bool i11, bool i12, bool i13, bool i14, bool i15, bool i16, bool i17, bool i18, bool i19, bool i20, bool i21, bool i22, bool i23, bool i24, bool i25, bool i26, bool i27, bool i28, bool i29, bool i30, bool i31, bool i32, bool i33, bool i34, bool i35, bool i36, bool i37, bool i38, bool i39, bool i40, bool i41, bool i42, bool i43, bool i44, bool i45, bool i46, bool i47, bool i48, bool i49, bool i50, bool i51, bool i52, bool i53, bool i54, bool i55, bool i56, bool i57, bool i58, bool i59, bool i60, bool i61, bool i62, bool i63, bool i64, bool i65, bool i66, bool i67, bool i68, bool i69, bool i70, bool i71, bool i72, bool i73, bool i74, bool i75, bool i76) const\
			{ return NAME##_cus_equal_list<Manip> (this, d, c, m, i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12, i13, i14, i15, i16, i17, i18, i19, i20, i21, i22, i23, i24, i25, i26, i27, i28, i29, i30, i31, i32, i33, i34, i35, i36, i37, i38, i39, i40, i41, i42, i43, i44, i45, i46, i47, i48, i49, i50, i51, i52, i53, i54, i55, i56, i57, i58, i59, i60, i61, i62, i63, i64, i65, i66, i67, i68, i69, i70, i71, i72, i73, i74, i75, i76); } \
	template <class Manip>\
	inline NAME##_cus_value_list<Manip> NAME::value_list(const char* d, Manip m,\
			NAME##_enum i1, NAME##_enum i2, NAME##_enum i3, NAME##_enum i4, NAME##_enum i5, NAME##_enum i6, NAME##_enum i7, NAME##_enum i8, NAME##_enum i9, NAME##_enum i10, NAME##_enum i11, NAME##_enum i12, NAME##_enum i13, NAME##_enum i14, NAME##_enum i15, NAME##_enum i16, NAME##_enum i17, NAME##_enum i18, NAME##_enum i19, NAME##_enum i20, NAME##_enum i21, NAME##_enum i22, NAME##_enum i23, NAME##_enum i24, NAME##_enum i25, NAME##_enum i26, NAME##_enum i27, NAME##_enum i28, NAME##_enum i29, NAME##_enum i30, NAME##_enum i31, NAME##_enum i32, NAME##_enum i33, NAME##_enum i34, NAME##_enum i35, NAME##_enum i36, NAME##_enum i37, NAME##_enum i38, NAME##_enum i39, NAME##_enum i40, NAME##_enum i41, NAME##_enum i42, NAME##_enum i43, NAME##_enum i44, NAME##_enum i45, NAME##_enum i46, NAME##_enum i47, NAME##_enum i48, NAME##_enum i49, NAME##_enum i50, NAME##_enum i51, NAME##_enum i52, NAME##_enum i53, NAME##_enum i54, NAME##_enum i55, NAME##_enum i56, NAME##_enum i57, NAME##_enum i58, NAME##_enum i59, NAME##_enum i60, NAME##_enum i61, NAME##_enum i62, NAME##_enum i63, NAME##_enum i64, NAME##_enum i65, NAME##_enum i66, NAME##_enum i67, NAME##_enum i68, NAME##_enum i69, NAME##_enum i70, NAME##_enum i71, NAME##_enum i72, NAME##_enum i73, NAME##_enum i74, NAME##_enum i75, NAME##_enum i76) const\
			{ return NAME##_cus_value_list<Manip> (this, d, m, i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12, i13, i14, i15, i16, i17, i18, i19, i20, i21, i22, i23, i24, i25, i26, i27, i28, i29, i30, i31, i32, i33, i34, i35, i36, i37, i38, i39, i40, i41, i42, i43, i44, i45, i46, i47, i48, i49, i50, i51, i52, i53, i54, i55, i56, i57, i58, i59, i60, i61, i62, i63, i64, i65, i66, i67, i68, i69, i70, i71, i72, i73, i74, i75, i76); } \
	template <class Manip>\
	inline NAME##_cus_field_list<Manip> NAME::field_list(const char* d, Manip m,\
			NAME##_enum i1, NAME##_enum i2, NAME##_enum i3, NAME##_enum i4, NAME##_enum i5, NAME##_enum i6, NAME##_enum i7, NAME##_enum i8, NAME##_enum i9, NAME##_enum i10, NAME##_enum i11, NAME##_enum i12, NAME##_enum i13, NAME##_enum i14, NAME##_enum i15, NAME##_enum i16, NAME##_enum i17, NAME##_enum i18, NAME##_enum i19, NAME##_enum i20, NAME##_enum i21, NAME##_enum i22, NAME##_enum i23, NAME##_enum i24, NAME##_enum i25, NAME##_enum i26, NAME##_enum i27, NAME##_enum i28, NAME##_enum i29, NAME##_enum i30, NAME##_enum i31, NAME##_enum i32, NAME##_enum i33, NAME##_enum i34, NAME##_enum i35, NAME##_enum i36, NAME##_enum i37, NAME##_enum i38, NAME##_enum i39, NAME##_enum i40, NAME##_enum i41, NAME##_enum i42, NAME##_enum i43, NAME##_enum i44, NAME##_enum i45, NAME##_enum i46, NAME##_enum i47, NAME##_enum i48, NAME##_enum i49, NAME##_enum i50, NAME##_enum i51, NAME##_enum i52, NAME##_enum i53, NAME##_enum i54, NAME##_enum i55, NAME##_enum i56, NAME##_enum i57, NAME##_enum i58, NAME##_enum i59, NAME##_enum i60, NAME##_enum i61, NAME##_enum i62, NAME##_enum i63, NAME##_enum i64, NAME##_enum i65, NAME##_enum i66, NAME##_enum i67, NAME##_enum i68, NAME##_enum i69, NAME##_enum i70, NAME##_enum i71, NAME##_enum i72, NAME##_enum i73, NAME##_enum i74, NAME##_enum i75, NAME##_enum i76) const\
			{ return NAME##_cus_field_list<Manip> (this, d, m, i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12, i13, i14, i15, i16, i17, i18, i19, i20, i21, i22, i23, i24, i25, i26, i27, i28, i29, i30, i31, i32, i33, i34, i35, i36, i37, i38, i39, i40, i41, i42, i43, i44, i45, i46, i47, i48, i49, i50, i51, i52, i53, i54, i55, i56, i57, i58, i59, i60, i61, i62, i63, i64, i65, i66, i67, i68, i69, i70, i71, i72, i73, i74, i75, i76); } \
	template <class Manip>\
	inline NAME##_cus_equal_list<Manip> NAME::equal_list(const char* d, const char* c, Manip m, \
			NAME##_enum i1, NAME##_enum i2, NAME##_enum i3, NAME##_enum i4, NAME##_enum i5, NAME##_enum i6, NAME##_enum i7, NAME##_enum i8, NAME##_enum i9, NAME##_enum i10, NAME##_enum i11, NAME##_enum i12, NAME##_enum i13, NAME##_enum i14, NAME##_enum i15, NAME##_enum i16, NAME##_enum i17, NAME##_enum i18, NAME##_enum i19, NAME##_enum i20, NAME##_enum i21, NAME##_enum i22, NAME##_enum i23, NAME##_enum i24, NAME##_enum i25, NAME##_enum i26, NAME##_enum i27, NAME##_enum i28, NAME##_enum i29, NAME##_enum i30, NAME##_enum i31, NAME##_enum i32, NAME##_enum i33, NAME##_enum i34, NAME##_enum i35, NAME##_enum i36, NAME##_enum i37, NAME##_enum i38, NAME##_enum i39, NAME##_enum i40, NAME##_enum i41, NAME##_enum i42, NAME##_enum i43, NAME##_enum i44, NAME##_enum i45, NAME##_enum i46, NAME##_enum i47, NAME##_enum i48, NAME##_enum i49, NAME##_enum i50, NAME##_enum i51, NAME##_enum i52, NAME##_enum i53, NAME##_enum i54, NAME##_enum i55, NAME##_enum i56, NAME##_enum i57, NAME##_enum i58, NAME##_enum i59, NAME##_enum i60, NAME##_enum i61, NAME##_enum i62, NAME##_enum i63, NAME##_enum i64, NAME##_enum i65, NAME##_enum i66, NAME##_enum i67, NAME##_enum i68, NAME##_enum i69, NAME##_enum i70, NAME##_enum i71, NAME##_enum i72, NAME##_enum i73, NAME##_enum i74, NAME##_enum i75, NAME##_enum i76) const\
			{ return NAME##_cus_equal_list<Manip> (this, d, c, m, i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12, i13, i14, i15, i16, i17, i18, i19, i20, i21, i22, i23, i24, i25, i26, i27, i28, i29, i30, i31, i32, i33, i34, i35, i36, i37, i38, i39, i40, i41, i42, i43, i44, i45, i46, i47, i48, i49, i50, i51, i52, i53, i54, i55, i56, i57, i58, i59, i60, i61, i62, i63, i64, i65, i66, i67, i68, i69, i70, i71, i72, i73, i74, i75, i76); } \
	template <class Manip>\
	inline NAME##_cus_value_list<Manip> NAME::value_list(const char* d, Manip m,\
			std::vector<bool> *i) const\
			{ return NAME##_cus_value_list<Manip> (this, d, m, i); }\
	template <class Manip>\
	inline NAME##_cus_field_list<Manip> NAME::field_list(const char* d, Manip m,\
			std::vector<bool> *i) const\
			{ return NAME##_cus_field_list<Manip> (this, d, m, i); }\
	template <class Manip>\
	inline NAME##_cus_equal_list<Manip> NAME::equal_list(const char* d, const char* c, Manip m,\
			std::vector<bool> *i) const\
			{ return NAME##_cus_equal_list<Manip> (this, d, c, m, i); }\
	template <class Manip>\
	inline NAME##_cus_value_list<Manip> \
	NAME::value_list(const char* d, Manip m, mysqlpp::sql_cmp_type /*sc*/) const\
			{ sql_compare_type_def_##CMP(NAME, value, NUM); }\
	template <class Manip>\
	inline NAME##_cus_field_list<Manip> \
	NAME::field_list(const char* d, Manip m, mysqlpp::sql_cmp_type /*sc*/) const\
			{ sql_compare_type_def_##CMP(NAME, field, NUM); }\
	template <class Manip>\
	inline NAME##_cus_equal_list<Manip> \
	NAME::equal_list(const char* d, const char* c, Manip m, mysqlpp::sql_cmp_type /*sc*/) const\
			{ sql_compare_type_defe_##CMP(NAME, equal, NUM); }\
	template <mysqlpp::sql_dummy_type dummy>\
	void populate_##NAME(NAME *s, const mysqlpp::Row &row)\
	{\
		mysqlpp::NoExceptions ignore_schema_mismatches(row);\
    s->I1 = row[N1].conv(T1());\
    s->I2 = row[N2].conv(T2());\
    s->I3 = row[N3].conv(T3());\
    s->I4 = row[N4].conv(T4());\
    s->I5 = row[N5].conv(T5());\
    s->I6 = row[N6].conv(T6());\
    s->I7 = row[N7].conv(T7());\
    s->I8 = row[N8].conv(T8());\
    s->I9 = row[N9].conv(T9());\
    s->I10 = row[N10].conv(T10());\
    s->I11 = row[N11].conv(T11());\
    s->I12 = row[N12].conv(T12());\
    s->I13 = row[N13].conv(T13());\
    s->I14 = row[N14].conv(T14());\
    s->I15 = row[N15].conv(T15());\
    s->I16 = row[N16].conv(T16());\
    s->I17 = row[N17].conv(T17());\
    s->I18 = row[N18].conv(T18());\
    s->I19 = row[N19].conv(T19());\
    s->I20 = row[N20].conv(T20());\
    s->I21 = row[N21].conv(T21());\
    s->I22 = row[N22].conv(T22());\
    s->I23 = row[N23].conv(T23());\
    s->I24 = row[N24].conv(T24());\
    s->I25 = row[N25].conv(T25());\
    s->I26 = row[N26].conv(T26());\
    s->I27 = row[N27].conv(T27());\
    s->I28 = row[N28].conv(T28());\
    s->I29 = row[N29].conv(T29());\
    s->I30 = row[N30].conv(T30());\
    s->I31 = row[N31].conv(T31());\
    s->I32 = row[N32].conv(T32());\
    s->I33 = row[N33].conv(T33());\
    s->I34 = row[N34].conv(T34());\
    s->I35 = row[N35].conv(T35());\
    s->I36 = row[N36].conv(T36());\
    s->I37 = row[N37].conv(T37());\
    s->I38 = row[N38].conv(T38());\
    s->I39 = row[N39].conv(T39());\
    s->I40 = row[N40].conv(T40());\
    s->I41 = row[N41].conv(T41());\
    s->I42 = row[N42].conv(T42());\
    s->I43 = row[N43].conv(T43());\
    s->I44 = row[N44].conv(T44());\
    s->I45 = row[N45].conv(T45());\
    s->I46 = row[N46].conv(T46());\
    s->I47 = row[N47].conv(T47());\
    s->I48 = row[N48].conv(T48());\
    s->I49 = row[N49].conv(T49());\
    s->I50 = row[N50].conv(T50());\
    s->I51 = row[N51].conv(T51());\
    s->I52 = row[N52].conv(T52());\
    s->I53 = row[N53].conv(T53());\
    s->I54 = row[N54].conv(T54());\
    s->I55 = row[N55].conv(T55());\
    s->I56 = row[N56].conv(T56());\
    s->I57 = row[N57].conv(T57());\
    s->I58 = row[N58].conv(T58());\
    s->I59 = row[N59].conv(T59());\
    s->I60 = row[N60].conv(T60());\
    s->I61 = row[N61].conv(T61());\
    s->I62 = row[N62].conv(T62());\
    s->I63 = row[N63].conv(T63());\
    s->I64 = row[N64].conv(T64());\
    s->I65 = row[N65].conv(T65());\
    s->I66 = row[N66].conv(T66());\
    s->I67 = row[N67].conv(T67());\
    s->I68 = row[N68].conv(T68());\
    s->I69 = row[N69].conv(T69());\
    s->I70 = row[N70].conv(T70());\
    s->I71 = row[N71].conv(T71());\
    s->I72 = row[N72].conv(T72());\
    s->I73 = row[N73].conv(T73());\
    s->I74 = row[N74].conv(T74());\
    s->I75 = row[N75].conv(T75());\
    s->I76 = row[N76].conv(T76());\
	}\
	inline NAME::NAME(const mysqlpp::Row& row) :\
	table_override_(0)\
			{ populate_##NAME<mysqlpp::sql_dummy>(this, row); }\
	inline void NAME::set(const mysqlpp::Row& row)\
	{\
		table_override_ = 0;\
		populate_##NAME<mysqlpp::sql_dummy>(this, row);\
	}\
	sql_COMPARE__##CMP(NAME, I1, I2, I3, I4, I5, I6, I7, I8, I9, I10, I11, I12, I13, I14, I15, I16, I17, I18, I19, I20, I21, I22, I23, I24, I25, I26, I27, I28, I29, I30, I31, I32, I33, I34, I35, I36, I37, I38, I39, I40, I41, I42, I43, I44, I45, I46, I47, I48, I49, I50, I51, I52, I53, I54, I55, I56, I57, I58, I59, I60, I61, I62, I63, I64, I65, I66, I67, I68, I69, I70, I71, I72, I73, I74, I75, I76, 0 )

#define sql_create_76(NAME, CMP, CONTR, T1, I1, T2, I2, T3, I3, T4, I4, T5, I5, T6, I6, T7, I7, T8, I8, T9, I9, T10, I10, T11, I11, T12, I12, T13, I13, T14, I14, T15, I15, T16, I16, T17, I17, T18, I18, T19, I19, T20, I20, T21, I21, T22, I22, T23, I23, T24, I24, T25, I25, T26, I26, T27, I27, T28, I28, T29, I29, T30, I30, T31, I31, T32, I32, T33, I33, T34, I34, T35, I35, T36, I36, T37, I37, T38, I38, T39, I39, T40, I40, T41, I41, T42, I42, T43, I43, T44, I44, T45, I45, T46, I46, T47, I47, T48, I48, T49, I49, T50, I50, T51, I51, T52, I52, T53, I53, T54, I54, T55, I55, T56, I56, T57, I57, T58, I58, T59, I59, T60, I60, T61, I61, T62, I62, T63, I63, T64, I64, T65, I65, T66, I66, T67, I67, T68, I68, T69, I69, T70, I70, T71, I71, T72, I72, T73, I73, T74, I74, T75, I75, T76, I76) \
		sql_create_complete_76(NAME, CMP, CONTR, T1, I1, #I1, T2, I2, #I2, T3, I3, #I3, T4, I4, #I4, T5, I5, #I5, T6, I6, #I6, T7, I7, #I7, T8, I8, #I8, T9, I9, #I9, T10, I10, #I10, T11, I11, #I11, T12, I12, #I12, T13, I13, #I13, T14, I14, #I14, T15, I15, #I15, T16, I16, #I16, T17, I17, #I17, T18, I18, #I18, T19, I19, #I19, T20, I20, #I20, T21, I21, #I21, T22, I22, #I22, T23, I23, #I23, T24, I24, #I24, T25, I25, #I25, T26, I26, #I26, T27, I27, #I27, T28, I28, #I28, T29, I29, #I29, T30, I30, #I30, T31, I31, #I31, T32, I32, #I32, T33, I33, #I33, T34, I34, #I34, T35, I35, #I35, T36, I36, #I36, T37, I37, #I37, T38, I38, #I38, T39, I39, #I39, T40, I40, #I40, T41, I41, #I41, T42, I42, #I42, T43, I43, #I43, T44, I44, #I44, T45, I45, #I45, T46, I46, #I46, T47, I47, #I47, T48, I48, #I48, T49, I49, #I49, T50, I50, #I50, T51, I51, #I51, T52, I52, #I52, T53, I53, #I53, T54, I54, #I54, T55, I55, #I55, T56, I56, #I56, T57, I57, #I57, T58, I58, #I58, T59, I59, #I59, T60, I60, #I60, T61, I61, #I61, T62, I62, #I62, T63, I63, #I63, T64, I64, #I64, T65, I65, #I65, T66, I66, #I66, T67, I67, #I67, T68, I68, #I68, T69, I69, #I69, T70, I70, #I70, T71, I71, #I71, T72, I72, #I72, T73, I73, #I73, T74, I74, #I74, T75, I75, #I75, T76, I76, #I76) \

// ---------------------------------------------------
//                  End Create 76
// ---------------------------------------------------
