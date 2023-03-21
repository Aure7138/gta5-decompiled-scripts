#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	float fLocal_43 = 0f;
	var uLocal_44 = 0;
	struct<3> Local_45 = { 0, 0, 0 } ;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	struct<3> Local_52 = { 0, 0, 0 } ;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	var uLocal_60[4] = { 0, 0, 0, 0 };
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	struct<3> Local_67 = { 0, 0, 0 } ;
	struct<3> Local_70 = { 0, 0, 0 } ;
	struct<3> Local_73 = { 0, 0, 0 } ;
	float fLocal_76 = 0f;
	struct<3> Local_77 = { 0, 0, 0 } ;
	struct<3> Local_80 = { 0, 0, 0 } ;
	struct<3> Local_83 = { 0, 0, 0 } ;
	float fLocal_86 = 0f;
	struct<3> Local_87 = { 0, 0, 0 } ;
	struct<3> Local_90 = { 0, 0, 0 } ;
	struct<3> Local_93 = { 0, 0, 0 } ;
	struct<3> Local_96 = { 0, 0, 0 } ;
	struct<3> Local_99 = { 0, 0, 0 } ;
	float fLocal_102 = 0f;
	struct<3> Local_103 = { 0, 0, 0 } ;
	struct<3> Local_106 = { 0, 0, 0 } ;
	struct<3> Local_109 = { 0, 0, 0 } ;
	float fLocal_112 = 0f;
	var uLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	bool bLocal_116 = 0;
	int iLocal_117 = 0;
	bool bLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	bool bLocal_121 = 0;
	int iLocal_122 = 0;
	bool bLocal_123 = 0;
	bool bLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 16;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	int iLocal_301 = 0;
	char* sLocal_302 = NULL;
	int iLocal_303 = 0;
	int iLocal_304 = 0;
	int iLocal_305 = 0;
	int iLocal_306 = 0;
	int iLocal_307 = 0;
	int iLocal_308 = 0;
	int iLocal_309 = 0;
	int iLocal_310 = 0;
	int iLocal_311 = 0;
	int iLocal_312 = 0;
	int iLocal_313 = 0;
	int iLocal_314 = 0;
	int iLocal_315 = 0;
	int iLocal_316 = 0;
	int iLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	struct<2> ScriptParam_0 = { 0, 5 } ;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 5;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
#endregion

void __EntryFunction__()
{
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	fLocal_43 = 20f;
	iLocal_117 = 1;
	iLocal_308 = 6000;
	Local_52 = { ScriptParam_0.f_1[0 /*3*/] };
	if (unk_0xBCA819F9975BEDFA(11))
	{
		if (!unk_0xCA41A00932714525(iLocal_55))
		{
			if (unk_0xF30AB065E07D2B0F(iLocal_55))
			{
				unk_0xFB2D342CDD441DD9(iLocal_55);
			}
		}
		if (!unk_0xCA41A00932714525(iLocal_57))
		{
			if (unk_0xF30AB065E07D2B0F(iLocal_57))
			{
				unk_0xFB2D342CDD441DD9(iLocal_57);
			}
		}
		func_177();
	}
	if (func_176(283, 1))
	{
		unk_0x921053BAF754303D();
	}
	if (func_147(Local_52, -1, 0, 0, 0))
	{
		if ((unk_0x80BC37C67CB292E5() > 2 && unk_0x80BC37C67CB292E5() < 15) && !unk_0x0DD3F4C17D207474(unk_0xBE369BE1BC57A796(), 0))
		{
		}
		else
		{
			unk_0x921053BAF754303D();
		}
		func_144(-1);
	}
	else
	{
		unk_0x921053BAF754303D();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x3291E05256869D44() || bLocal_116)
		{
			if (!func_143())
			{
				if (func_142())
				{
					func_177();
				}
			}
			unk_0x31683E0D6DBB707E("RE_SDRM", 0);
			switch (iLocal_48)
			{
				case 0:
					if (func_130())
					{
						func_177();
					}
					if (iLocal_50)
					{
						iLocal_51 = 1;
						iLocal_48 = 1;
					}
					else
					{
						func_121();
					}
					break;
				
				case 1:
					func_120();
					if (!iLocal_114)
					{
						func_119();
						func_116();
						func_105();
						if (!unk_0x00743AFDA92F3B04(uLocal_318))
						{
							func_104();
						}
					}
					else
					{
						func_101();
						if (!bLocal_124)
						{
							func_99();
						}
						func_91();
						func_89();
						func_73();
						func_72(iLocal_55, 0);
						if (!bLocal_121)
						{
						}
						if (iLocal_49 == 0 && !bLocal_118)
						{
							func_68();
							func_66();
						}
						else
						{
							func_61();
						}
						if (iLocal_49 == 3)
						{
							if (unk_0x3DC4639D5F23DEA2(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1), Local_87, 1) < 100f)
							{
								if (!unk_0x80A7A5165A9C7607())
								{
									unk_0xF7CF05FEB40E538B("sdrm_mcs_2", 8);
								}
								if (unk_0x80A7A5165A9C7607())
								{
									if (unk_0x6E5BBCE1B1E5B2EB())
									{
										if ((((!unk_0xCA41A00932714525(iLocal_55) && !unk_0xCA41A00932714525(iLocal_57)) && !unk_0xCA41A00932714525(iLocal_56)) && !unk_0xCA41A00932714525(iLocal_58)) && !unk_0xA929B2923D14E2F8(iLocal_132, 0))
										{
											unk_0x0A970CDB1CD24DA6("Groom", iLocal_55, 0);
											unk_0x0A970CDB1CD24DA6("Groomsman", iLocal_57, 0);
											unk_0x0A970CDB1CD24DA6("Bride", iLocal_56, 0);
											unk_0x0A970CDB1CD24DA6("Father_of_the_bride", iLocal_58, 0);
										}
									}
								}
							}
							else if (unk_0x80A7A5165A9C7607())
							{
								unk_0xB5BD48559882D958();
							}
							if (bLocal_118)
							{
								if (func_60(1, 0, 1))
								{
									func_25();
								}
							}
							else if (!unk_0xCA41A00932714525(iLocal_57))
							{
								if (unk_0xFD0FE723227D5AB6(iLocal_57, 0))
								{
									if (unk_0xA3794949321E107C(uLocal_322))
									{
										unk_0x020DF7300725ECAB(&uLocal_322);
										if (unk_0xA3794949321E107C(uLocal_320))
										{
											unk_0x020DF7300725ECAB(&uLocal_320);
										}
										if (!unk_0xA3794949321E107C(uLocal_320))
										{
											uLocal_320 = func_23(Local_67, 1);
										}
									}
								}
							}
						}
						if (func_3())
						{
							if (!unk_0xCA41A00932714525(iLocal_55))
							{
								unk_0xCA58071CE9CCE891(iLocal_55, unk_0x17B5CC8A8615737D(), 1000f, -1, 0, 0);
							}
							if (!unk_0xCA41A00932714525(iLocal_57))
							{
								unk_0xCA58071CE9CCE891(iLocal_57, unk_0x17B5CC8A8615737D(), 1000f, -1, 0, 0);
							}
							if (!unk_0xCA41A00932714525(iLocal_56))
							{
								unk_0xCA58071CE9CCE891(iLocal_56, unk_0x17B5CC8A8615737D(), 1000f, -1, 0, 0);
							}
							if (!unk_0xCA41A00932714525(iLocal_58))
							{
								unk_0xCA58071CE9CCE891(iLocal_58, unk_0x17B5CC8A8615737D(), 1000f, -1, 0, 0);
							}
							func_2();
						}
					}
					func_1();
					break;
			}
		}
		else
		{
			func_177();
		}
	}
}

void func_1()
{
}

void func_2()
{
	func_177();
}

int func_3()
{
	if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
	{
		if (unk_0xCA41A00932714525(iLocal_55))
		{
			return 1;
		}
		else
		{
			if (unk_0xC017443DBE6DA4D6(iLocal_55, unk_0x17B5CC8A8615737D(), 1) || unk_0xA77EE6C138A588EB(iLocal_55))
			{
				return 1;
			}
			if (bLocal_116)
			{
				if (unk_0x0DD3F4C17D207474(unk_0xBE369BE1BC57A796(), 0))
				{
					func_21();
					if (func_4(&uLocal_136, "stagdau", "stagd_police", 4, 0, 0, 0))
					{
						return 1;
					}
				}
			}
		}
	}
	if (!unk_0xA929B2923D14E2F8(iLocal_59, 0))
	{
		if ((!unk_0x45CD66F0A131E554(iLocal_59, 0) || unk_0x745DF692265C6509(iLocal_59)) || unk_0xA77EE6C138A588EB(iLocal_59))
		{
			func_21();
			if (func_4(&uLocal_136, "stagdau", "stagdwrcar", 4, 0, 0, 0))
			{
				return 1;
			}
		}
		if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
		{
			if (unk_0x0B231830DD7F8FD0(unk_0x17B5CC8A8615737D(), joaat("towtruck")) || unk_0x0B231830DD7F8FD0(unk_0x17B5CC8A8615737D(), joaat("towtruck2")))
			{
				if (unk_0x2AFFA8434FA2066D(unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0), iLocal_59))
				{
					func_21();
					if (func_4(&uLocal_136, "stagdau", "stagdwrcar", 4, 0, 0, 0))
					{
						return 1;
					}
				}
			}
		}
	}
	else
	{
		func_21();
		if (func_4(&uLocal_136, "stagdau", "stagdwrcar", 4, 0, 0, 0))
		{
			return 1;
		}
	}
	if (!unk_0xCA41A00932714525(iLocal_55))
	{
		if (!unk_0x4E84D2C9B54F79BA(iLocal_55, unk_0x17B5CC8A8615737D(), 150f, 150f, 150f, 0, 1, 0))
		{
			if (!unk_0xA929B2923D14E2F8(iLocal_59, 0))
			{
				if (unk_0x2315BB1606BC3DC3(unk_0x17B5CC8A8615737D(), iLocal_59, 0))
				{
					unk_0x2B46008B9EA5E05B(unk_0xBE369BE1BC57A796(), 1, 0);
					unk_0x4361500C7F56A212(unk_0xBE369BE1BC57A796(), 0f);
				}
			}
			return 1;
		}
	}
	if (iLocal_49 >= 1)
	{
		if (bLocal_123)
		{
			if (unk_0xCA41A00932714525(iLocal_57))
			{
				func_21();
				return 1;
			}
			else if (unk_0xC017443DBE6DA4D6(iLocal_57, unk_0x17B5CC8A8615737D(), 1))
			{
				func_21();
				return 1;
			}
		}
		if (!unk_0xA929B2923D14E2F8(iLocal_59, 0))
		{
			if (!unk_0x4E84D2C9B54F79BA(iLocal_59, unk_0x17B5CC8A8615737D(), 20f, 20f, 20f, 0, 1, 0))
			{
				if (!iLocal_126)
				{
					func_21();
					if (func_4(&uLocal_136, "stagdau", "stagd_comeba", 4, 0, 0, 0))
					{
						iLocal_126 = 1;
					}
				}
			}
			else
			{
				iLocal_126 = 0;
			}
			if (!unk_0x4E84D2C9B54F79BA(iLocal_59, unk_0x17B5CC8A8615737D(), 150f, 150f, 150f, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	if (iLocal_49 == 3)
	{
		if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
		{
			if (unk_0xCA41A00932714525(iLocal_56) || unk_0xCA41A00932714525(iLocal_58))
			{
				return 1;
			}
			else if (unk_0xC017443DBE6DA4D6(iLocal_56, unk_0x17B5CC8A8615737D(), 1) || unk_0xC017443DBE6DA4D6(iLocal_58, unk_0x17B5CC8A8615737D(), 1))
			{
				return 1;
			}
		}
		if (!unk_0xCA41A00932714525(iLocal_57))
		{
			if (!unk_0x4E84D2C9B54F79BA(iLocal_57, unk_0x17B5CC8A8615737D(), 20f, 20f, 20f, 0, 1, 0) && iLocal_310)
			{
				if (!iLocal_127)
				{
					func_21();
					if (func_4(&uLocal_136, "stagdau", "stagd_nobest", 4, 0, 0, 0))
					{
						iLocal_127 = 1;
					}
				}
			}
			else
			{
				iLocal_127 = 0;
			}
			if (!unk_0x4E84D2C9B54F79BA(iLocal_57, unk_0x17B5CC8A8615737D(), 150f, 150f, 150f, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_4(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_20(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15752 = 0;
	Global_15754 = 0;
	Global_15759 = 0;
	Global_16736 = 0;
	Global_16738 = 0;
	Global_16742 = 0;
	Global_2621441 = 0;
	return func_5(sParam2, iParam3, 0);
}

int func_5(char* sParam0, int iParam1, bool bParam2)
{
	Global_15746 = 0;
	if (Global_15745 == 0 || Global_15747 == 2)
	{
		if (Global_15745 != 0)
		{
			if (iParam1 > Global_15747)
			{
				if (Global_15752 == 0)
				{
					unk_0x660E8E7836E95077(0);
					Global_14443.f_1 = 3;
					Global_15745 = 0;
					Global_15746 = 1;
					Global_15798 = 0;
					Global_15741 = 0;
					Global_15742 = 0;
					Global_15756 = 0;
					Global_15755 = 0;
					Global_14442 = 0;
				}
				else
				{
					func_19();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x55C74612BE548D78())
		{
			return 0;
		}
		if (func_18(8, -1))
		{
			return 0;
		}
		Global_15821 = { Global_15815 };
		func_17();
		Global_15034 = { Global_15199 };
		Global_15751 = Global_15752;
		Global_15758 = Global_15759;
		Global_2621442 = Global_2621441;
		Global_15760 = { Global_15776 };
		Global_15753 = Global_15754;
		Global_16735 = Global_16736;
		Global_16743 = { Global_16749 };
		Global_16737 = Global_16738;
		Global_16739 = Global_16740;
		Global_16741 = Global_16742;
		Global_15364.f_370 = Global_16734;
		Global_15364.f_368 = Global_16732;
		Global_15364.f_369 = Global_16733;
		Global_15741 = Global_15742;
		if (Global_15751)
		{
			unk_0x21E7933CCC7B3724(&Global_2313, 20);
			unk_0x21E7933CCC7B3724(&Global_2314, 17);
			unk_0x21E7933CCC7B3724(&Global_2315, 0);
			if (bParam2)
			{
				func_10();
				if (Global_3118[Global_14443 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14443.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14409 == 1)
			{
				return 0;
			}
			if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
			{
				if (unk_0x658CF746EFCB633E(unk_0x17B5CC8A8615737D()))
				{
					return 0;
				}
				if (func_9())
				{
					return 0;
				}
				if (unk_0x9D317EC24D9CDD2F(unk_0x17B5CC8A8615737D()))
				{
					return 0;
				}
				if (unk_0x7F4AE93855973529(unk_0x17B5CC8A8615737D()))
				{
					return 0;
				}
				if (unk_0xC3B1F1C9A58948C2(unk_0x17B5CC8A8615737D()))
				{
					return 0;
				}
				if (unk_0xBA11591586E3ABFF(unk_0x17B5CC8A8615737D(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69702)
				{
					if (unk_0xA77EE6C138A588EB(unk_0x17B5CC8A8615737D()))
					{
						return 0;
					}
					if (unk_0xA4FEB0448027296A(unk_0xBE369BE1BC57A796()))
					{
						return 0;
					}
					if (unk_0x95E290AF7BCBF364(unk_0x17B5CC8A8615737D()))
					{
						return 0;
					}
					if (unk_0xDB3C032119056A8B(unk_0xBE369BE1BC57A796()))
					{
						return 0;
					}
				}
			}
			if (func_8())
			{
				return 0;
			}
			else
			{
				switch (Global_14443.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (unk_0x48B8265059381CD0(Global_2313, 9))
				{
					return 0;
				}
			}
			func_7();
			Global_15755 = bParam2;
		}
		Global_15747 = iParam1;
		StringCopy(&Global_15364, sParam0, 24);
		Global_14611 = 0;
		func_6();
		return 1;
	}
	if (Global_15745 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15747 || iParam1 == Global_15747)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_19();
	}
	return 0;
}

void func_6()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14613[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x660E8E7836E95077(0);
	Global_15745 = 1;
}

void func_7()
{
	Global_15798 = Global_15797;
	Global_15792 = Global_15793;
	Global_15839 = { Global_15827 };
	Global_15845 = { Global_15833 };
	Global_15800 = Global_15799;
	Global_15869 = { Global_15851 };
	Global_15875 = { Global_15857 };
	Global_15881 = { Global_15863 };
	Global_15887 = { Global_15893 };
	Global_1628 = Global_1629;
	Global_1630 = Global_1631;
	Global_15756 = Global_15757;
	Global_15758 = Global_15759;
	Global_15760 = { Global_15776 };
	Global_15749 = Global_15750;
	Global_16761 = 0;
	Global_15794 = 0;
	Global_15795 = 0;
	unk_0x21E7933CCC7B3724(&Global_2314, 16);
}

int func_8()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_9()
{
	int iVar0;
	int iVar1;
	
	if (Global_69702)
	{
		iVar0 = 0;
		unk_0x5CD8291F2C5E0AD1(unk_0x17B5CC8A8615737D(), &iVar1, 1);
		if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x5053725CE851B850() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
	{
		if (unk_0x780A193B53AF21CF(unk_0x17B5CC8A8615737D(), 78, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_10()
{
	if (func_16(14))
	{
		if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
		{
			if (unk_0x0324EEB10F81965F(unk_0x17B5CC8A8615737D()) == Global_101700.f_27009[0 /*29*/])
			{
				Global_14443 = 0;
			}
			else if (unk_0x0324EEB10F81965F(unk_0x17B5CC8A8615737D()) == Global_101700.f_27009[1 /*29*/])
			{
				Global_14443 = 1;
			}
			else if (unk_0x0324EEB10F81965F(unk_0x17B5CC8A8615737D()) == Global_101700.f_27009[2 /*29*/])
			{
				Global_14443 = 2;
			}
			else
			{
				Global_14443 = 0;
			}
		}
	}
	else
	{
		Global_14443 = func_11();
		if (Global_14443 == 145)
		{
			Global_14443 = 3;
		}
		if (Global_69702)
		{
			Global_14443 = 3;
		}
		if (Global_14443 > 3)
		{
			Global_14443 = 3;
		}
	}
}

int func_11()
{
	func_12();
	return Global_101700.f_2095.f_539.f_3549;
}

void func_12()
{
	int iVar0;
	
	if (unk_0x23E9113C762466ED(unk_0x17B5CC8A8615737D()))
	{
		if (func_15(Global_101700.f_2095.f_539.f_3549) != unk_0x0324EEB10F81965F(unk_0x17B5CC8A8615737D()))
		{
			iVar0 = func_14(unk_0x17B5CC8A8615737D());
			if (func_13(iVar0) && (!func_16(14) || Global_100652))
			{
				if (Global_101700.f_2095.f_539.f_3549 != iVar0 && func_13(Global_101700.f_2095.f_539.f_3549))
				{
					Global_101700.f_2095.f_539.f_3550 = Global_101700.f_2095.f_539.f_3549;
				}
				Global_101700.f_2095.f_539.f_3551 = iVar0;
				Global_101700.f_2095.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_101700.f_2095.f_539.f_3549 != 145)
			{
				Global_101700.f_2095.f_539.f_3551 = Global_101700.f_2095.f_539.f_3549;
			}
			return;
		}
	}
	Global_101700.f_2095.f_539.f_3549 = 145;
}

bool func_13(int iParam0)
{
	return iParam0 < 3;
}

int func_14(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x23E9113C762466ED(iParam0))
	{
		iVar1 = unk_0x0324EEB10F81965F(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_15(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_15(int iParam0)
{
	if (func_13(iParam0))
	{
		return Global_101700.f_27009[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_16(int iParam0)
{
	return Global_35781 == iParam0;
}

void func_17()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15034[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15034[iVar0 /*10*/].f_1), "", 24);
		Global_15034[iVar0 /*10*/].f_7 = 0;
		Global_15034[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15034.f_161 = -99;
	Global_15034.f_162 = { 0f, 0f, 0f };
}

bool func_18(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1353070.f_203[iParam1];
			}
			break;
	}
	return unk_0x48B8265059381CD0(Global_1353070.f_1015, iParam0);
}

void func_19()
{
	unk_0x5FB0B609B3A49840();
	Global_16756 = 0;
	if ((unk_0x3ED8A07C6FA41E1B() || Global_14443.f_1 == 9) || Global_14442 == 1)
	{
		unk_0x660E8E7836E95077(0);
		Global_15745 = 6;
		Global_14443.f_1 = 3;
		return;
	}
	if (unk_0x55C74612BE548D78())
	{
		unk_0x660E8E7836E95077(1);
		Global_15745 = 6;
		return;
	}
}

void func_20(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15199 = { *uParam0 };
	Global_1629 = iParam1;
	StringCopy(&Global_15815, sParam2, 24);
	Global_16734 = iParam5;
	if (iParam3 == 0)
	{
		Global_16732 = 1;
		Global_16730 = 0;
	}
	else
	{
		Global_16732 = 0;
		Global_16730 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16733 = 1;
		Global_16731 = 0;
	}
	else
	{
		Global_16733 = 0;
		Global_16731 = 1;
	}
}

void func_21()
{
	Global_14611 = 0;
	func_22();
}

void func_22()
{
	unk_0x5FB0B609B3A49840();
	Global_16756 = 0;
	if (unk_0x55C74612BE548D78())
	{
		unk_0x660E8E7836E95077(0);
		Global_15745 = 6;
	}
}

var func_23(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x9213703D695C6A7A(Param0);
	unk_0x00EA14207118EEE2(uVar0, func_24(unk_0x63C468D583002D23(), 1f, 1f));
	unk_0x5ACBCE67F0494242(uVar0, iParam3);
	return uVar0;
}

float func_24(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_25()
{
	switch (iLocal_131)
	{
		case 0:
			func_21();
			unk_0x4EDE34FBADD967A6(0);
			func_52(1, 1, 1, 0);
			unk_0x14416EDB64E4D05E(0);
			iLocal_310 = 0;
			iLocal_131++;
			break;
		
		case 1:
			iLocal_131++;
			break;
		
		case 2:
			if ((((!unk_0xCA41A00932714525(iLocal_55) && !unk_0xCA41A00932714525(iLocal_57)) && !unk_0xCA41A00932714525(iLocal_56)) && !unk_0xCA41A00932714525(iLocal_58)) && !unk_0xA929B2923D14E2F8(iLocal_132, 0))
			{
				if (func_51())
				{
					unk_0xD9C496FEAA81FF4A(iLocal_132, "SDRM_Car", 0, 0, 0);
					unk_0xD9C496FEAA81FF4A(iLocal_55, "Groom", 0, 0, 0);
					unk_0xD9C496FEAA81FF4A(iLocal_57, "Groomsman", 0, 0, 0);
					unk_0xD9C496FEAA81FF4A(iLocal_56, "Bride", 0, 0, 0);
					unk_0xD9C496FEAA81FF4A(iLocal_58, "Father_of_the_bride", 0, 0, 0);
					unk_0x51C344BE3DCB5CB5(4);
					iLocal_131++;
				}
			}
			break;
		
		case 3:
			if (unk_0x66FBC42991B0D41E(0))
			{
				if (!unk_0xA929B2923D14E2F8(iLocal_132, 0))
				{
					unk_0x482AE8C0EAF5AE07(iLocal_132, 1084227584);
					unk_0x016C65ED12A14D44(iLocal_132, 1);
					unk_0xE418A8E16B02C0AC(1);
					unk_0x2D28D5B324F77D2D(1);
					unk_0xBA7CD73403732191(0f);
					unk_0x503F20CB07C55470(-7f, 1065353216);
				}
				iLocal_131++;
			}
			break;
		
		case 4:
			unk_0x478AE709A466CB7E(&iLocal_55);
			unk_0x478AE709A466CB7E(&iLocal_57);
			unk_0x478AE709A466CB7E(&iLocal_56);
			unk_0x478AE709A466CB7E(&iLocal_58);
			func_52(0, 1, 1, 0);
			unk_0x14416EDB64E4D05E(1);
			func_26();
			break;
	}
}

void func_26()
{
	while (!func_50())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_30(-1, 0);
	func_27();
	func_177();
}

void func_27()
{
	func_28();
}

int func_28()
{
	if (func_29(0))
	{
		return 0;
	}
	if (Global_91530.f_8)
	{
		if (Global_91530.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_91530.f_10 > 1)
	{
		return 0;
	}
	Global_91530.f_10++;
	return 1;
}

bool func_29(bool bParam0)
{
	if (!bParam0 && unk_0x82F1A060D8F4583B(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x48B8265059381CD0(Global_69950, 0);
}

void func_30(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_48();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_47(iParam0))
	{
		func_46(iParam0, iParam1);
		if (!func_45(51))
		{
			func_41("RE_REWARD", 1, 0, 4000, 10000, func_44(), 0, 138, 0);
			func_40(51);
		}
		if (func_39(iParam0))
		{
			Global_101700.f_23954.f_2 = 3;
		}
		if (func_38(iParam0, iParam1) != 322)
		{
			func_32(func_38(iParam0, iParam1), Local_45.f_0, Local_45.f_1);
		}
		Global_101688 = iParam1;
		if (Global_101686 == 0)
		{
			if (((Global_101689 == 1 || Global_101689 == 5) || Global_101689 == 11) || Global_101689 == 25)
			{
				func_31(2);
			}
			else if ((Global_101689 == 26 || Global_101689 == 8) || Global_101689 == 17)
			{
				func_31(7);
			}
			else
			{
				func_31(1);
			}
		}
	}
}

void func_31(int iParam0)
{
	Global_101686 = iParam0;
}

void func_32(int iParam0, var uParam1, var uParam2)
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_36((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_101700.f_9153[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_101700.f_9153[iParam0 /*12*/].f_6 == 11 || Global_101700.f_9153[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_101700.f_9153[iParam0 /*12*/].f_5 = 1;
		Global_101700.f_9153[iParam0 /*12*/].f_10 = uParam1;
		Global_101700.f_9153[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			unk_0x76FDB94571A85364(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x76FDB94571A85364(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x76FDB94571A85364(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_33();
	}
}

void func_33()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_101436 = 0;
	Global_101437 = 0;
	Global_101438 = 0;
	Global_101439 = 0;
	Global_101440 = 0;
	Global_101441 = 0;
	Global_101442 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_101700.f_9153.f_3853;
	Global_101700.f_9153.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_101700.f_9153[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_101700.f_9153[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_101436++;
					fVar1 = (fVar1 + Global_101700.f_9153[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_101437++;
					fVar2 = (fVar2 + Global_101700.f_9153[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_101438++;
					fVar3 = (fVar3 + Global_101700.f_9153[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_101439++;
					fVar4 = (fVar4 + Global_101700.f_9153[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_101440++;
					fVar5 = (fVar5 + (Global_101700.f_9153[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_101441++;
					fVar6 = (fVar6 + Global_101700.f_9153[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_101442++;
					fVar7 = (fVar7 + Global_101700.f_9153[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_101419 > 0)
	{
		if (Global_101436 == Global_101419)
		{
			fVar1 = 55f;
		}
	}
	if (Global_101420 > 0)
	{
		if (Global_101437 == Global_101420)
		{
			fVar2 = 10f;
		}
	}
	if (Global_101421 > 0)
	{
		if (Global_101438 == Global_101421)
		{
			fVar3 = 0f;
		}
	}
	if (Global_101422 > 0)
	{
		if (Global_101439 == Global_101422)
		{
			fVar4 = 10f;
		}
	}
	if (Global_101423 > 0)
	{
		if (((Global_101440 == Global_101423 || (Global_101423 * 10 / Global_101440) < 41) || Global_101440 > Global_101426) || Global_101440 == Global_101426)
		{
			if (!unk_0x48B8265059381CD0(Global_101700.f_9153.f_3856, 14))
			{
				if (Global_101440 == Global_101423)
				{
					unk_0x76FDB94571A85364(joaat("num_rndevents_completed"), Global_101423, 0);
					unk_0xEB79FECD9022AAF0(&(Global_101700.f_9153.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_101424 > 0)
	{
		if (Global_101441 == Global_101424)
		{
			fVar6 = 15f;
		}
	}
	if (Global_101425 > 0)
	{
		if (Global_101442 == Global_101425)
		{
			fVar7 = 5f;
		}
	}
	Global_101700.f_9153.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_101440 > Global_101426 || Global_101440 == Global_101426)
	{
		iVar9 = Global_101426;
	}
	else
	{
		iVar9 = Global_101440;
	}
	unk_0x731753D8494ABECD(joaat("num_missions_completed"), Global_101436, 1);
	unk_0x731753D8494ABECD(joaat("num_missions_available"), Global_101419, 1);
	unk_0x731753D8494ABECD(joaat("num_minigames_completed"), Global_101437, 1);
	unk_0x731753D8494ABECD(joaat("num_minigames_available"), Global_101420, 1);
	unk_0x731753D8494ABECD(joaat("num_oddjobs_completed"), Global_101438, 1);
	unk_0x731753D8494ABECD(joaat("num_oddjobs_available"), Global_101421, 1);
	unk_0x731753D8494ABECD(joaat("num_rndpeople_completed"), Global_101439, 1);
	unk_0x731753D8494ABECD(joaat("num_rndpeople_available"), Global_101422, 1);
	unk_0x731753D8494ABECD(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x731753D8494ABECD(joaat("num_rndevents_available"), Global_101426, 1);
	unk_0x731753D8494ABECD(joaat("num_misc_completed"), (Global_101442 + Global_101441), 1);
	unk_0x731753D8494ABECD(joaat("num_misc_available"), (Global_101425 + Global_101424), 1);
	Global_101443 = (Global_101436 * 100 / Global_101419);
	Global_101445 = ((Global_101438 + Global_101437) * 100 / (Global_101421 + Global_101420));
	Global_101444 = ((Global_101439 + iVar9) * 100 / (Global_101422 + Global_101426));
	Global_101446 = ((Global_101441 + Global_101442) * 100 / (Global_101424 + Global_101425));
	unk_0x098CDAAE6268B0D0(joaat("total_progress_made"), Global_101700.f_9153.f_3853, 1);
	unk_0x731753D8494ABECD(joaat("percent_story_missions"), Global_101443, 1);
	unk_0x731753D8494ABECD(joaat("percent_ambient_missions"), Global_101444, 1);
	unk_0x731753D8494ABECD(joaat("percent_oddjobs"), Global_101445, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_101700.f_9153.f_3853))
	{
		func_35(13, unk_0xF34EE736CF047844(Global_101700.f_9153.f_3853));
	}
	if (!unk_0x9710FEDD2413A882())
	{
		if (!Global_69702)
		{
			if (func_34() == 2 == 0 && !unk_0x63C468D583002D23())
			{
				if (unk_0x877FC5FAF7DC9BC5())
				{
					Global_101434 = 0;
				}
				if (!Global_55822)
				{
					func_28();
				}
			}
		}
	}
}

int func_34()
{
	return Global_25190;
}

int func_35(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 70)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0x71AAA4D97165244D(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xA1657EA7F5F15A59(iParam0, iParam1);
	}
	return 0;
}

int func_36(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	var uVar13;
	
	if (iParam2 == -1)
	{
		iParam2 = func_37();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0xB14C33EF6CDC31A6((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xEC40FF50D6867780((iParam0 - 0)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0xB14C33EF6CDC31A6((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xEC40FF50D6867780((iParam0 - 192)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0xB14C33EF6CDC31A6((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xEC40FF50D6867780((iParam0 - 513)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0xB14C33EF6CDC31A6((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xEC40FF50D6867780((iParam0 - 705)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x7425761F86762FAD((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xEC40FF50D6867780((iParam0 - 3111)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x7425761F86762FAD((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xEC40FF50D6867780((iParam0 - 2919)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x8C3FF8187D011700((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xEC40FF50D6867780((iParam0 - 4207)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x8C3FF8187D011700((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xEC40FF50D6867780((iParam0 - 4335)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0x8C3FF8187D011700((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0xEC40FF50D6867780((iParam0 - 6029)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = unk_0x8C3FF8187D011700((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0xEC40FF50D6867780((iParam0 - 7385)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = unk_0x8C3FF8187D011700((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0xEC40FF50D6867780((iParam0 - 7321)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		uVar13 = unk_0x8C3FF8187D011700((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0xEC40FF50D6867780((iParam0 - 9361)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar13, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_37()
{
	return Global_1312735;
}

int func_38(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 250;
			break;
		
		case 1:
			return 226;
			break;
		
		case 2:
			return 243;
			break;
		
		case 3:
			return 256;
			break;
		
		case 4:
			return 259;
			break;
		
		case 5:
			if (iParam1 == 1)
			{
				return 281;
			}
			if (iParam1 == 2)
			{
				return 282;
			}
			break;
		
		case 6:
			return 265;
			break;
		
		case 7:
			return 218;
			break;
		
		case 9:
			if (iParam1 == 1)
			{
				return 271;
			}
			if (iParam1 == 2)
			{
				return 272;
			}
			if (iParam1 == 3)
			{
				return 273;
			}
			if (iParam1 == 4)
			{
				return 274;
			}
			if (iParam1 == 5)
			{
				return 275;
			}
			if (iParam1 == 6)
			{
				return 276;
			}
			if (iParam1 == 7)
			{
				return 277;
			}
			if (iParam1 == 8)
			{
				return 278;
			}
			if (iParam1 == 9)
			{
				return 279;
			}
			if (iParam1 == 10)
			{
				return 280;
			}
			break;
		
		case 10:
			return 219;
			break;
		
		case 11:
			if (iParam1 == 1)
			{
				return 246;
			}
			if (iParam1 == 2)
			{
				return 247;
			}
			if (iParam1 == 3)
			{
				return 248;
			}
			if (iParam1 == 4)
			{
				return 249;
			}
			break;
		
		case 12:
			return 254;
			break;
		
		case 13:
			if (iParam1 == 1)
			{
				return 260;
			}
			if (iParam1 == 2)
			{
				return 261;
			}
			if (iParam1 == 3)
			{
				return 262;
			}
			if (iParam1 == 4)
			{
				return 264;
			}
			break;
		
		case 14:
			return 283;
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 224;
			}
			if (iParam1 == 2)
			{
				return 225;
			}
			break;
		
		case 16:
			return 252;
			break;
		
		case 17:
			if (iParam1 == 1)
			{
				return 244;
			}
			if (iParam1 == 2)
			{
				return 245;
			}
			break;
		
		case 18:
			return 253;
			break;
		
		case 19:
			return 215;
			break;
		
		case 20:
			return 216;
			break;
		
		case 21:
			return 251;
			break;
		
		case 22:
			if (iParam1 == 1)
			{
				return 221;
			}
			if (iParam1 == 2)
			{
				return 222;
			}
			break;
		
		case 23:
			if (iParam1 == 1)
			{
				return 213;
			}
			if (iParam1 == 2)
			{
				return 214;
			}
			break;
		
		case 24:
			return 242;
			break;
		
		case 25:
			if (iParam1 == 1)
			{
				return 267;
			}
			if (iParam1 == 2)
			{
				return 268;
			}
			if (iParam1 == 3)
			{
				return 269;
			}
			break;
		
		case 8:
			return 255;
			break;
		
		case 26:
			if (iParam1 == 1)
			{
				return 227;
			}
			if (iParam1 == 2)
			{
				return 228;
			}
			break;
		
		case 27:
			if (iParam1 == 1)
			{
				return 257;
			}
			if (iParam1 == 2)
			{
				return 258;
			}
			break;
		
		case 28:
			return 217;
			break;
		
		case 29:
			if (iParam1 == 1)
			{
				return 229;
			}
			if (iParam1 == 2)
			{
				return 230;
			}
			if (iParam1 == 3)
			{
				return 231;
			}
			break;
		
		case 30:
			return 285;
			break;
		
		case 31:
			return 318;
			break;
		
		case 32:
			return 319;
			break;
		
		case 33:
			return 320;
			break;
	}
	return 322;
}

int func_39(int iParam0)
{
	switch (iParam0)
	{
		case 29:
		case 30:
		case 2:
		case 18:
			return 0;
			break;
	}
	return 1;
}

void func_40(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		unk_0xEB79FECD9022AAF0(&(Global_101700.f_19369.f_150[iVar1]), iVar0);
	}
}

void func_41(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_42(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_42(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x6A7B0D91FD88D9EE(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_101700.f_19369.f_145)
	{
		if (unk_0x6A7B0D91FD88D9EE(&(Global_101700.f_19369[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_101700.f_19369.f_145 < 9)
	{
		StringCopy(&(Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_4), sParam1, 16);
		Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_8 = (unk_0x94E3E074F38DF86C() + iParam3);
		Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_9 = iParam5;
		Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_11 = iParam6;
		Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_12 = uParam2;
		Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_13 = iParam7;
		Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_14 = iParam8;
		Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_10 = ((unk_0x94E3E074F38DF86C() + iParam3) + iParam4);
		}
		else
		{
			Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_10 = -1;
		}
		Global_101700.f_19369.f_145++;
		func_43();
	}
}

void func_43()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_101700.f_19369.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_101700.f_19369.f_145)
	{
		if (unk_0x48B8265059381CD0(Global_101700.f_19369[iVar0 /*16*/].f_11, 0))
		{
			if (Global_101700.f_19369[iVar0 /*16*/].f_12 > Global_101700.f_19369.f_146[0])
			{
				Global_101700.f_19369.f_146[0] = Global_101700.f_19369[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x48B8265059381CD0(Global_101700.f_19369[iVar0 /*16*/].f_11, 1))
		{
			if (Global_101700.f_19369[iVar0 /*16*/].f_12 > Global_101700.f_19369.f_146[1])
			{
				Global_101700.f_19369.f_146[1] = Global_101700.f_19369[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x48B8265059381CD0(Global_101700.f_19369[iVar0 /*16*/].f_11, 2))
		{
			if (Global_101700.f_19369[iVar0 /*16*/].f_12 > Global_101700.f_19369.f_146[2])
			{
				Global_101700.f_19369.f_146[2] = Global_101700.f_19369[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_44()
{
	func_12();
	switch (Global_101700.f_2095.f_539.f_3549)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 4;
			break;
	}
	return 0;
}

int func_45(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return unk_0x48B8265059381CD0(Global_101700.f_19369.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_46(int iParam0, int iParam1)
{
	unk_0xEB79FECD9022AAF0(&(Global_101700.f_23954.f_8[iParam0]), iParam1);
}

int func_47(int iParam0)
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 1:
			iVar0 = 5;
			break;
		
		case 5:
			iVar0 = 2;
			break;
		
		case 9:
			iVar0 = 10;
			break;
		
		case 11:
			iVar0 = 4;
			break;
		
		case 13:
			iVar0 = 4;
			break;
		
		case 15:
			iVar0 = 2;
			break;
		
		case 17:
			iVar0 = 2;
			break;
		
		case 22:
			iVar0 = 2;
			break;
		
		case 23:
			iVar0 = 2;
			break;
		
		case 25:
			iVar0 = 3;
			break;
		
		case 26:
			iVar0 = 2;
			break;
		
		case 27:
			iVar0 = 2;
			break;
		
		case 29:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

int func_48()
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, unk_0x6AF6B39BFDB53CB5(), 64);
	uVar16 = func_49(Var0);
	return uVar16;
}

int func_49(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0x765F5B806B517045(&cParam0))
	{
		case joaat("re_abandonedcar"):
			return 23;
			break;
		
		case joaat("re_accident"):
			return 0;
			break;
		
		case joaat("re_arrests"):
			return 15;
			break;
		
		case joaat("re_atmrobbery"):
			return 1;
			break;
		
		case joaat("re_bikethief"):
			return 26;
			break;
		
		case joaat("re_border"):
			return 29;
			break;
		
		case joaat("re_burials"):
			return 24;
			break;
		
		case joaat("re_bus_tours"):
			return 2;
			break;
		
		case joaat("re_cartheft"):
			return 17;
			break;
		
		case joaat("re_chasethieves"):
			return 11;
			break;
		
		case joaat("re_crashrescue"):
			return 16;
			break;
		
		case joaat("re_cultshootout"):
			return 18;
			break;
		
		case joaat("re_dealgonewrong"):
			return 12;
			break;
		
		case joaat("re_domestic"):
			return 3;
			break;
		
		case joaat("re_drunkdriver"):
			return 27;
			break;
		
		case joaat("re_gang_intimidation"):
			return 20;
			break;
		
		case joaat("re_gangfight"):
			return 19;
			break;
		
		case joaat("re_getaway_driver"):
			return 4;
			break;
		
		case joaat("re_hitch_lift"):
			return 13;
			break;
		
		case joaat("re_homeland_security"):
			return 28;
			break;
		
		case joaat("re_lured"):
			return 7;
			break;
		
		case joaat("re_muggings"):
			return 25;
			break;
		
		case joaat("re_paparazzi"):
			return 10;
			break;
		
		case joaat("re_prisonerlift"):
			return 22;
			break;
		
		case joaat("re_prisonvanbreak"):
			return 21;
			break;
		
		case joaat("re_securityvan"):
			return 9;
			break;
		
		case joaat("re_shoprobbery"):
			return 5;
			break;
		
		case joaat("re_snatched"):
			return 6;
			break;
		
		case joaat("re_stag_do"):
			return 14;
			break;
		
		case joaat("re_yetarian"):
			return 30;
			break;
		
		case joaat("re_duel"):
			return 31;
			break;
		
		case joaat("re_seaplane"):
			return 32;
			break;
		
		case joaat("re_monkey"):
			return 33;
			break;
	}
	return -1;
}

int func_50()
{
	return 1;
}

bool func_51()
{
	bool bVar0;
	
	bVar0 = unk_0x77888DFE5B94E7E5();
	if (!Global_69701)
	{
		if (!bVar0)
		{
			Global_69701 = 1;
		}
	}
	return bVar0;
}

void func_52(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0x75416EE69CE8B797(unk_0xBE369BE1BC57A796());
		unk_0xC8F90C1233866A01(unk_0xBE369BE1BC57A796(), 1);
		unk_0x60040905B2978982(unk_0xBE369BE1BC57A796(), 1);
		func_59(1);
		unk_0x9FB8515100F82AFB();
		unk_0xD57128A757C0216E();
		if (Global_14443.f_1 > 3)
		{
			if (unk_0x3ED8A07C6FA41E1B())
			{
				unk_0x660E8E7836E95077(0);
			}
			if (!func_8())
			{
				Global_14443.f_1 = 3;
			}
			Global_15745 = 5;
		}
		func_58(1, iParam3, iParam2, 0);
		Global_55828 = 1;
		Global_68134 = 1;
		Global_69700 = 1;
	}
	else
	{
		func_59(0);
		unk_0x42DE1068884C3BE9();
		Global_55828 = 0;
		if (bParam1)
		{
			unk_0x093227ED19D84FB6();
		}
		unk_0xC8F90C1233866A01(unk_0xBE369BE1BC57A796(), 0);
		unk_0x60040905B2978982(unk_0xBE369BE1BC57A796(), 0);
		func_58(0, iParam3, iParam2, 0);
		if (unk_0x63C468D583002D23())
		{
			if (((!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()) && !func_56(unk_0xBE369BE1BC57A796())) && !func_54(unk_0xBE369BE1BC57A796(), 0)) && !func_53())
			{
				unk_0xC6042F55A6EA17B2(unk_0x17B5CC8A8615737D(), 0);
			}
		}
		else if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()) && !func_56(unk_0xBE369BE1BC57A796()))
		{
			unk_0xC6042F55A6EA17B2(unk_0x17B5CC8A8615737D(), 0);
		}
		Global_69700 = 0;
	}
}

bool func_53()
{
	return unk_0x48B8265059381CD0(Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_39.f_18, 14);
}

bool func_54(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xBE369BE1BC57A796())
	{
		bVar0 = func_55(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1591201[iParam0 /*602*/].f_203 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x7268A1112372AA44(iParam0))
		{
			bVar0 = unk_0xB58DEBB81964A4E9(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_55(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_37();
	}
	if (Global_1315213[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312729[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_56(int iParam0)
{
	if (func_54(iParam0, 0))
	{
		return 1;
	}
	if (func_57())
	{
		if (iParam0 == unk_0xBE369BE1BC57A796())
		{
			return 1;
		}
	}
	if (unk_0x48B8265059381CD0(Global_2421664[iParam0 /*358*/].f_198, 2))
	{
		return 1;
	}
	return 0;
}

bool func_57()
{
	return unk_0x48B8265059381CD0(Global_2359301, 3);
}

int func_58(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xEF4E5E47AF0D4480())
	{
		if (unk_0x5E9889CF18601D1C() != iParam0 && uParam2)
		{
			unk_0xCE7A426067C66E84(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_59(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xEB79FECD9022AAF0(&Global_2313, 13);
	}
	else
	{
		unk_0x21E7933CCC7B3724(&Global_2313, 13);
	}
}

int func_60(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0xBDEC9B948A62578A())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
	{
		if (!unk_0xD035C652F0986F10(unk_0x17B5CC8A8615737D()))
		{
			return 0;
		}
		iVar0 = unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0);
		if (bParam0)
		{
			if (unk_0xA929B2923D14E2F8(iVar0, 0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0xA929B2923D14E2F8(iVar0, 0))
			{
				if (unk_0x17206B315923243C(iVar0, -1, 0) != unk_0x17B5CC8A8615737D())
				{
					return 0;
				}
			}
		}
		if (!unk_0xA929B2923D14E2F8(iVar0, 0))
		{
			if (unk_0x2BB7527A68E10019(iVar0) < 0.95f || unk_0x2BB7527A68E10019(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0x3D6EEB2BAADEC759(unk_0xBE369BE1BC57A796()))
	{
		return 0;
	}
	if (!unk_0xD37F3675F4465D41(unk_0xBE369BE1BC57A796()))
	{
		return 0;
	}
	return 1;
}

void func_61()
{
	if (!unk_0xA929B2923D14E2F8(iLocal_59, 0) && !unk_0xA929B2923D14E2F8(iLocal_55, 0))
	{
		if (!iLocal_117)
		{
			if (unk_0x2315BB1606BC3DC3(unk_0x17B5CC8A8615737D(), iLocal_59, 0) && unk_0x2315BB1606BC3DC3(iLocal_55, iLocal_59, 0))
			{
				iLocal_117 = 1;
				if (unk_0xA3794949321E107C(uLocal_319))
				{
					unk_0x020DF7300725ECAB(&uLocal_319);
				}
				if (iLocal_122 && !bLocal_118)
				{
					if (!unk_0xA3794949321E107C(uLocal_320))
					{
						uLocal_320 = func_23(Local_67, 1);
					}
				}
				if (!func_65())
				{
				}
			}
		}
		if (!iLocal_117 && !iLocal_119)
		{
			if (unk_0x2315BB1606BC3DC3(unk_0x17B5CC8A8615737D(), iLocal_59, 0))
			{
				if (!unk_0x2315BB1606BC3DC3(iLocal_55, iLocal_59, 0))
				{
					if (!func_65())
					{
					}
					if (unk_0xA3794949321E107C(uLocal_319))
					{
						unk_0x020DF7300725ECAB(&uLocal_319);
					}
					if (!unk_0xA3794949321E107C(uLocal_319))
					{
						uLocal_319 = func_64(iLocal_55, 0, 145);
						unk_0xB8F5F7438C07CC5E(uLocal_319, 1);
					}
					iLocal_117 = 0;
					iLocal_119 = 1;
				}
			}
		}
		if (iLocal_117)
		{
			if (!unk_0x2315BB1606BC3DC3(unk_0x17B5CC8A8615737D(), iLocal_59, 0))
			{
				if (!func_65())
				{
				}
				if (!unk_0xA3794949321E107C(uLocal_319))
				{
					uLocal_319 = func_62(iLocal_59, 0, 0);
					unk_0xB8F5F7438C07CC5E(uLocal_319, 1);
				}
				if (unk_0xA3794949321E107C(uLocal_320))
				{
					unk_0x020DF7300725ECAB(&uLocal_320);
				}
				iLocal_117 = 0;
			}
			if (!unk_0x2315BB1606BC3DC3(unk_0x17B5CC8A8615737D(), iLocal_59, 0) && !unk_0x2315BB1606BC3DC3(iLocal_55, iLocal_59, 0))
			{
				if (!func_65())
				{
				}
				if (!unk_0xA3794949321E107C(uLocal_319))
				{
					uLocal_319 = func_62(iLocal_59, 0, 0);
					unk_0xB8F5F7438C07CC5E(uLocal_319, 1);
				}
				if (unk_0xA3794949321E107C(uLocal_320))
				{
					unk_0x020DF7300725ECAB(&uLocal_320);
				}
				iLocal_117 = 0;
			}
		}
	}
}

int func_62(int iParam0, bool bParam1, bool bParam2)
{
	return func_63(iParam0, !bParam1, bParam2);
}

int func_63(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x23E9113C762466ED(iParam0))
	{
		return 0;
	}
	uVar0 = unk_0xF1FE04D602EA392E(iParam0);
	if (unk_0x3983CCB0D958159C(iParam0))
	{
		unk_0x00EA14207118EEE2(uVar0, func_24(unk_0x63C468D583002D23(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xB8F5F7438C07CC5E(uVar0, bParam1);
		}
		else
		{
			unk_0xCC930AE12D020496(uVar0, 2);
		}
	}
	else if (unk_0x80E9CA64E9C8E070(iParam0))
	{
		unk_0x00EA14207118EEE2(uVar0, func_24(unk_0x63C468D583002D23(), 0.7f, 0.7f));
		unk_0xB8F5F7438C07CC5E(uVar0, bParam1);
	}
	else if (unk_0x1461B0B259D86067(iParam0))
	{
		unk_0x00EA14207118EEE2(uVar0, func_24(unk_0x63C468D583002D23(), 0.7f, 0.7f));
	}
	return uVar0;
}

var func_64(int iParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_63(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xA3794949321E107C(uVar0)) && unk_0x63A528817609801B(&(Global_101700.f_27009[iParam2 /*29*/].f_3)))
	{
		unk_0xAAF15482D9DB27D9(uVar0, &(Global_101700.f_27009[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_65()
{
	if (Global_15745 != 0 || unk_0x55C74612BE548D78())
	{
		return 1;
	}
	return 0;
}

void func_66()
{
	if (unk_0x23E9113C762466ED(iLocal_55))
	{
		if (!unk_0xCA41A00932714525(iLocal_55))
		{
			if (unk_0x4E84D2C9B54F79BA(iLocal_55, unk_0x17B5CC8A8615737D(), 4f, 4f, 4f, 0, 1, 0))
			{
				if ((!unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0) && !unk_0xFD0FE723227D5AB6(iLocal_55, 0)) || unk_0x9CE8181CB6710437(unk_0x17B5CC8A8615737D()))
				{
					if (unk_0xA3794949321E107C(uLocal_321))
					{
						unk_0x020DF7300725ECAB(&uLocal_321);
						if (!unk_0xA3794949321E107C(uLocal_320))
						{
							uLocal_320 = func_23(Local_67, 1);
						}
					}
				}
				else if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0) && unk_0xFD0FE723227D5AB6(iLocal_55, 0))
				{
					if (unk_0xA3794949321E107C(uLocal_321))
					{
						unk_0x020DF7300725ECAB(&uLocal_321);
						if (!unk_0xA3794949321E107C(uLocal_320))
						{
							uLocal_320 = func_23(Local_67, 1);
						}
					}
				}
				else if (unk_0xA3794949321E107C(uLocal_320))
				{
					unk_0x020DF7300725ECAB(&uLocal_320);
					if (!unk_0xA3794949321E107C(uLocal_321))
					{
						uLocal_321 = func_64(iLocal_55, 0, 145);
					}
				}
				if (unk_0x72FC030E928A5207(unk_0x17B5CC8A8615737D()))
				{
				}
			}
			else if (unk_0xA3794949321E107C(uLocal_320))
			{
				unk_0x020DF7300725ECAB(&uLocal_320);
				if (!unk_0xA3794949321E107C(uLocal_321))
				{
					uLocal_321 = func_64(iLocal_55, 0, 145);
				}
			}
			if (!unk_0xF30AB065E07D2B0F(iLocal_55))
			{
				if (!unk_0x4E84D2C9B54F79BA(unk_0x17B5CC8A8615737D(), iLocal_55, 10f, 10f, 10f, 0, 1, 0))
				{
					unk_0x15848523A8959DBC(iLocal_55);
					unk_0xD25D00F8613DE69F(iLocal_55, func_67());
					unk_0xE4FFBEDDCAF2776A(iLocal_55, 1);
					unk_0x346D6A5BC2F879E2(iLocal_55, 0);
				}
				if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 1))
				{
					unk_0x15848523A8959DBC(iLocal_55);
					unk_0xD25D00F8613DE69F(iLocal_55, func_67());
					unk_0xE4FFBEDDCAF2776A(iLocal_55, 1);
					unk_0x346D6A5BC2F879E2(iLocal_55, 0);
				}
			}
		}
	}
}

var func_67()
{
	return unk_0xDC8370280C455166(unk_0x592069F95C314814());
}

void func_68()
{
	if (!unk_0xCA41A00932714525(iLocal_55))
	{
		if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 1))
		{
			if (!func_71())
			{
				if (unk_0xF30AB065E07D2B0F(iLocal_55))
				{
					unk_0xFB2D342CDD441DD9(iLocal_55);
				}
				if (unk_0x1F8F07D86DA1A701(iLocal_55, 1227113341) != 1 && unk_0x1F8F07D86DA1A701(iLocal_55, 1227113341) != 0)
				{
					unk_0x834EF3BF2E6A8D29(iLocal_55, unk_0x17B5CC8A8615737D(), -1, 6f, 1073741824, 1073741824, 0);
				}
				if (unk_0xFD0FE723227D5AB6(iLocal_55, 0))
				{
					unk_0x83150B7E65C16AFE(iLocal_55, 0, 0);
				}
				if (!iLocal_125)
				{
					if (!func_65())
					{
						iLocal_125 = 1;
						if (func_70())
						{
							func_69(&uLocal_136, "stagdau", "stagd_nogood", "stagd_nogood_1", 4, 0, 0);
						}
						else
						{
							func_69(&uLocal_136, "stagdau", "stagd_nogood", "stagd_nogood_2", 4, 0, 0);
						}
					}
				}
			}
			else
			{
				iLocal_125 = 0;
				if (((unk_0x1F8F07D86DA1A701(iLocal_55, 1227113341) == 1 || unk_0x1F8F07D86DA1A701(iLocal_55, 1227113341) == 0) || unk_0x1F8F07D86DA1A701(iLocal_55, 242628503) == 1) || unk_0x1F8F07D86DA1A701(iLocal_55, 242628503) == 0)
				{
					unk_0x15848523A8959DBC(iLocal_55);
					if (!unk_0xF30AB065E07D2B0F(iLocal_55))
					{
						unk_0xD25D00F8613DE69F(iLocal_55, func_67());
						unk_0xE4FFBEDDCAF2776A(iLocal_55, 1);
						unk_0x346D6A5BC2F879E2(iLocal_55, 0);
					}
				}
			}
		}
		else if (((!unk_0xF30AB065E07D2B0F(iLocal_55) && !unk_0xFD0FE723227D5AB6(iLocal_55, 0)) && unk_0x1F8F07D86DA1A701(iLocal_55, 242628503) != 1) && unk_0x1F8F07D86DA1A701(iLocal_55, 242628503) != 0)
		{
			unk_0xD25D00F8613DE69F(iLocal_55, func_67());
			unk_0xE4FFBEDDCAF2776A(iLocal_55, 1);
			unk_0x346D6A5BC2F879E2(iLocal_55, 0);
		}
	}
}

int func_69(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_20(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15752 = 0;
	Global_15759 = 0;
	Global_15754 = 0;
	Global_16736 = 1;
	Global_16738 = 0;
	Global_16742 = 0;
	StringCopy(&Global_16749, sParam3, 24);
	Global_2621441 = 0;
	return func_5(sParam2, iParam4, 0);
}

int func_70()
{
	if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 1))
	{
		if (unk_0x45CD66F0A131E554(unk_0xFD05A5AA90984873(unk_0x17B5CC8A8615737D()), 1))
		{
			if ((unk_0x4A0388DBE0CE87AA(unk_0x0324EEB10F81965F(unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 1))) || unk_0xD28959FE5BC2D14D(unk_0x0324EEB10F81965F(unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 1)))) || unk_0xBA3A0947FBDD9ADD(unk_0x0324EEB10F81965F(unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 1))))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_71()
{
	if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
	{
		if (unk_0x45CD66F0A131E554(unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0), 0))
		{
			if (((((!unk_0x72FC030E928A5207(unk_0x17B5CC8A8615737D()) && !unk_0x8EC3C2BC25ED8ECA(unk_0x17B5CC8A8615737D())) && !unk_0xE40FC0529CC75B0F(unk_0x17B5CC8A8615737D())) && !unk_0xC5DC3C111D329A7C(unk_0x17B5CC8A8615737D())) && !unk_0xA66773CB22F42448(unk_0x17B5CC8A8615737D())) && !unk_0x0B231830DD7F8FD0(unk_0x17B5CC8A8615737D(), joaat("rhino")))
			{
				if (unk_0x58060A1B26EA2597(unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0)) >= 1)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 1))
	{
		if (unk_0x45CD66F0A131E554(unk_0xF566689615D97192(unk_0x17B5CC8A8615737D()), 0))
		{
			if ((((!unk_0xA55B002FED5A9858(unk_0x0324EEB10F81965F(unk_0xF566689615D97192(unk_0x17B5CC8A8615737D()))) && !unk_0xC5082382D5482C0C(unk_0x0324EEB10F81965F(unk_0xF566689615D97192(unk_0x17B5CC8A8615737D())))) && !unk_0x8432EA469FDB418D(unk_0x0324EEB10F81965F(unk_0xF566689615D97192(unk_0x17B5CC8A8615737D())))) && !unk_0x3B548F49528B5FA7(unk_0x0324EEB10F81965F(unk_0xF566689615D97192(unk_0x17B5CC8A8615737D())))) && unk_0x0324EEB10F81965F(unk_0xF566689615D97192(unk_0x17B5CC8A8615737D())) != joaat("rhino"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_72(int iParam0, bool bParam1)
{
	bool bVar0;
	
	if (!unk_0xCA41A00932714525(iParam0))
	{
		bVar0 = false;
		if (bParam1)
		{
			if (unk_0xD035C652F0986F10(unk_0x17B5CC8A8615737D()) && unk_0xD035C652F0986F10(iParam0))
			{
				if (unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0) == unk_0x60604E51E30D25B8(iParam0, 0))
				{
					bVar0 = true;
				}
			}
		}
		else
		{
			bVar0 = false;
		}
		if (!unk_0x3D6623406E6D16C8(iParam0, unk_0x17B5CC8A8615737D()))
		{
			if (!bVar0)
			{
				unk_0x4718A774D9248520(iParam0, unk_0x17B5CC8A8615737D(), -1, 2049, 2);
			}
		}
		else if (bVar0)
		{
			if (!unk_0x0850C577FB0C352A(iParam0))
			{
				unk_0xEF9294ED57E4AC3D(iParam0);
			}
		}
	}
}

void func_73()
{
	if (unk_0x23E9113C762466ED(iLocal_55))
	{
		if (!unk_0xA929B2923D14E2F8(iLocal_55, 0) && !unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
		{
			if (func_87("stagd_chape_1"))
			{
				if (!unk_0xA3794949321E107C(uLocal_320))
				{
					uLocal_320 = func_23(Local_67, 1);
				}
				iLocal_122 = 1;
			}
			if (func_87("stagd_chape_3"))
			{
				unk_0xEF9294ED57E4AC3D(unk_0x17B5CC8A8615737D());
				if (!unk_0xCA41A00932714525(iLocal_55))
				{
					if (unk_0xFD0FE723227D5AB6(iLocal_55, 0))
					{
						unk_0x86DD54980FE55567(&uLocal_113);
						unk_0xEF9294ED57E4AC3D(0);
						unk_0x61B5A2C8D0F2B440(0, 30600);
						unk_0x007AE2AA9E15FA7B(uLocal_113);
						unk_0x00E85C3B3BD34B10(iLocal_55, uLocal_113);
						unk_0x08377FB2AE4C6899(&uLocal_113);
					}
				}
			}
			if (unk_0x4E84D2C9B54F79BA(unk_0x17B5CC8A8615737D(), iLocal_55, 13.5f, 13.5f, 13.5f, 0, 1, 0) && unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
			{
				if (unk_0x2315BB1606BC3DC3(iLocal_55, unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0), 0))
				{
					if (iLocal_49 == 0)
					{
						if (unk_0xC9D9444186B5A374() > 5000)
						{
							if (iLocal_130 == 0)
							{
								if (!func_65())
								{
									func_86();
									if (func_4(&uLocal_136, "stagdau", sLocal_302, 4, 0, 0, 0))
									{
										iLocal_310 = 1;
									}
									bLocal_121 = true;
									iLocal_130++;
									unk_0x5AE11BC36633DE4E(0);
								}
							}
						}
						if (unk_0xC9D9444186B5A374() > 5000)
						{
							if (iLocal_130 == 1)
							{
								if (!func_65())
								{
									unk_0xE418A8E16B02C0AC(1);
									unk_0x2D28D5B324F77D2D(1);
									iLocal_130++;
									unk_0x5AE11BC36633DE4E(0);
								}
							}
						}
						if (unk_0xC9D9444186B5A374() > 2500)
						{
							if (iLocal_130 == 2)
							{
								if (!func_65())
								{
									func_86();
									if (func_11() == 0)
									{
										func_4(&uLocal_136, "stagdau", "stagd_tailM", 4, 0, 0, 0);
									}
									if (func_11() == 1)
									{
										func_4(&uLocal_136, "stagdau", "stagd_tailF", 4, 0, 0, 0);
									}
									if (func_11() == 2)
									{
										func_4(&uLocal_136, "stagdau", "stagd_tailT", 4, 0, 0, 0);
									}
									iLocal_130++;
									unk_0x5AE11BC36633DE4E(0);
								}
							}
						}
					}
					if (!bLocal_124)
					{
						if (iLocal_49 == 3)
						{
							if (!func_65())
							{
								if (iLocal_130 == 0)
								{
									func_4(&uLocal_136, "stagdau", "stagd_enough", 4, 0, 0, 0);
									iLocal_130++;
								}
							}
						}
						if (iLocal_49 == 3)
						{
							if (unk_0xC9D9444186B5A374() > 5000)
							{
								if (iLocal_130 == 0)
								{
									if (!func_65())
									{
										iLocal_130++;
									}
								}
							}
						}
						if (!unk_0x1C34CE8087E3897C(unk_0x17B5CC8A8615737D(), Local_87, 150f, 150f, 150f, 0, 1, 0))
						{
							if (iLocal_303 == 0)
							{
								if (iLocal_307 == func_74(func_75()) + 11)
								{
									if (!func_65())
									{
										func_4(&uLocal_136, "stagdau", "stagd_time10", 4, 0, 0, 0);
										iLocal_303 = 1;
									}
								}
							}
							if (iLocal_303 < 2)
							{
								if (iLocal_307 == func_74(func_75()) + 10)
								{
									if (!func_65())
									{
										func_4(&uLocal_136, "stagdau", "stagd_time9", 4, 0, 0, 0);
										iLocal_303 = 2;
									}
								}
							}
							if (iLocal_303 < 3)
							{
								if (iLocal_307 == func_74(func_75()) + 9)
								{
									if (!func_65())
									{
										func_4(&uLocal_136, "stagdau", "stagd_time8", 4, 0, 0, 0);
										iLocal_303 = 3;
									}
								}
							}
							if (iLocal_303 < 4)
							{
								if (iLocal_307 == func_74(func_75()) + 8)
								{
									if (!func_65())
									{
										func_4(&uLocal_136, "stagdau", "stagd_time7", 4, 0, 0, 0);
										iLocal_303 = 4;
									}
								}
							}
							if (iLocal_303 < 5)
							{
								if (iLocal_307 == func_74(func_75()) + 7)
								{
									if (!func_65())
									{
										iLocal_303 = 5;
									}
								}
							}
							if (iLocal_303 < 6)
							{
								if (iLocal_307 == func_74(func_75()) + 6)
								{
									if (!func_65())
									{
										iLocal_303 = 6;
									}
								}
							}
							if (iLocal_303 < 7)
							{
								if (iLocal_307 == func_74(func_75()) + 5)
								{
									if (!func_65())
									{
										iLocal_303 = 7;
									}
								}
							}
							if (iLocal_303 < 8)
							{
								if (iLocal_307 == func_74(func_75()) + 4)
								{
									if (!func_65())
									{
										iLocal_303 = 8;
									}
								}
							}
							if (iLocal_303 < 9)
							{
								if (iLocal_307 == func_74(func_75()) + 3)
								{
									if (!func_65())
									{
										func_4(&uLocal_136, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_303 = 9;
									}
								}
							}
							if (iLocal_303 < 10)
							{
								if (iLocal_307 == func_74(func_75()) + 2)
								{
									if (!func_65())
									{
										func_4(&uLocal_136, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_303 = 10;
									}
								}
							}
							if (iLocal_303 < 11)
							{
								if (iLocal_307 == func_74(func_75()) + 1)
								{
									if (!func_65())
									{
										func_4(&uLocal_136, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_303 = 11;
									}
								}
							}
						}
						else
						{
							if (iLocal_303 < 6)
							{
								if (iLocal_307 == func_74(func_75()) + 6)
								{
									if (!func_65())
									{
										func_4(&uLocal_136, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_303++;
									}
								}
							}
							if (iLocal_303 < 7)
							{
								if (iLocal_307 == func_74(func_75()) + 5)
								{
									if (!func_65())
									{
										func_4(&uLocal_136, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_303++;
									}
								}
							}
							if (iLocal_303 < 8)
							{
								if (iLocal_307 == func_74(func_75()) + 4)
								{
									if (!func_65())
									{
										func_4(&uLocal_136, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_303++;
									}
								}
							}
							if (iLocal_303 < 9)
							{
								if (iLocal_307 == func_74(func_75()) + 3)
								{
									if (!func_65())
									{
										func_4(&uLocal_136, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_303++;
									}
								}
							}
							if (iLocal_303 < 10)
							{
								if (iLocal_307 == func_74(func_75()) + 2)
								{
									if (!func_65())
									{
										func_4(&uLocal_136, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_303++;
									}
								}
							}
							if (iLocal_303 < 11)
							{
								if (iLocal_307 == func_74(func_75()) + 1)
								{
									if (!func_65())
									{
										func_4(&uLocal_136, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_303++;
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_74(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_75()
{
	var uVar0;
	
	func_85(&uVar0, unk_0x0956E4296D9CC40A());
	func_84(&uVar0, unk_0x32883EAC7DC86C40());
	func_83(&uVar0, unk_0x80BC37C67CB292E5());
	func_78(&uVar0, unk_0x202B089E6328ABFA());
	func_77(&uVar0, unk_0xCD8338A83E1BCC14());
	func_76(&uVar0, unk_0x1BBFD9409EC2598C());
	return uVar0;
}

void func_76(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_77(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_78(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_82(*uParam0);
	iVar1 = func_80(*uParam0);
	if (iParam1 < 1 || iParam1 > func_79(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

int func_79(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

int func_80(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_81(unk_0x48B8265059381CD0(iParam0, 31), -1, 1)) + 2011;
}

int func_81(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_82(int iParam0)
{
	return iParam0 & 15;
}

void func_83(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_84(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_85(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

void func_86()
{
	Global_14611 = 0;
	func_19();
}

int func_87(char* sParam0)
{
	var uVar0;
	
	if (func_65())
	{
		MemCopy(&uVar0, {func_88()}, 4);
		if (unk_0x6A7B0D91FD88D9EE(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

struct<6> func_88()
{
	struct<6> Var0;
	int iVar6;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15745 == 4)
	{
		iVar6 = unk_0xD8D502167864F70D();
		iVar6 = (iVar6 + Global_16755);
		if (iVar6 > -1)
		{
			return Global_14613[iVar6 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

void func_89()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (unk_0x23E9113C762466ED(iLocal_55))
	{
		if (!unk_0xA929B2923D14E2F8(iLocal_55, 0))
		{
			if (!unk_0xCA41A00932714525(iLocal_55))
			{
				if (!iLocal_129 && bLocal_118)
				{
					unk_0xD1BB2AD73E7FC3A7(0, 75, 1);
					unk_0xD1BB2AD73E7FC3A7(0, 80, 1);
					iVar0 = unk_0xB2CED41F4337ED8B();
					if (iVar0 != 0)
					{
						iVar1 = unk_0xB866C0EABE959340(iVar0);
						if (iVar1 != 4)
						{
							unk_0xD1BB2AD73E7FC3A7(0, 79, 1);
							unk_0xD1BB2AD73E7FC3A7(0, 286, 1);
							unk_0xD1BB2AD73E7FC3A7(0, 287, 1);
							unk_0xD1BB2AD73E7FC3A7(0, 26, 1);
							unk_0xD1BB2AD73E7FC3A7(0, 273, 1);
							unk_0xD1BB2AD73E7FC3A7(0, 4, 1);
							unk_0xD1BB2AD73E7FC3A7(0, 270, 1);
							unk_0xD1BB2AD73E7FC3A7(0, 5, 1);
							unk_0xD1BB2AD73E7FC3A7(0, 1, 1);
							unk_0xD1BB2AD73E7FC3A7(0, 271, 1);
							unk_0xD1BB2AD73E7FC3A7(0, 6, 1);
							unk_0xD1BB2AD73E7FC3A7(0, 2, 1);
							unk_0xD1BB2AD73E7FC3A7(0, 272, 1);
							unk_0xD1BB2AD73E7FC3A7(0, 3, 1);
						}
					}
					if (unk_0x70A9F320A34FAC28(iLocal_55, -2002.008f, 455.58f, 101.0381f, -2009.761f, 453.2027f, 105.9135f, 12.4375f, 0, 1, 0) || unk_0x83666F9FB8FEBD4B() > 5000)
					{
						iLocal_129 = 1;
						unk_0xC1B1E9A034A63A62(0);
						func_52(1, 1, 1, 0);
						unk_0x2E2945F5602A744F(1);
						unk_0xE418A8E16B02C0AC(0);
						unk_0x2D28D5B324F77D2D(0);
						unk_0xC8C3338D4DBC00FE(unk_0xBE369BE1BC57A796(), 0, 0);
						unk_0xA56CF5F719228F25(joaat("superd"), 3);
						while (!unk_0x18EE473F859D0FB2(joaat("superd")))
						{
							unk_0x4EDE34FBADD967A6(0);
						}
						uLocal_134 = unk_0x71877D18957B1679("DEFAULT_SCRIPTED_CAMERA", -2014.228f, 456.4961f, 103.5524f, -6.509435f, -0.037031f, -95.98762f, 29.00143f, 0, 2);
						uLocal_135 = unk_0x71877D18957B1679("DEFAULT_SCRIPTED_CAMERA", -2014.334f, 456.418f, 103.3152f, -6.198685f, -0.037031f, -100.5736f, 29.00143f, 0, 2);
						unk_0x2F0C4DC7A4D75C2E(uLocal_134, "HAND_SHAKE", 0.25f);
						unk_0x2F0C4DC7A4D75C2E(uLocal_135, "HAND_SHAKE", 0.25f);
						unk_0xA652CA24468EC747(uLocal_134, 1);
						unk_0x9274EF97A90581BE(1, 0, 3000, 1, 0, 0);
						unk_0x4EDE34FBADD967A6(1000);
						unk_0x6530B35F40F7E78B(uLocal_135, uLocal_134, 4000, 1, 1);
						unk_0x9274EF97A90581BE(1, 0, 3000, 1, 0, 0);
						unk_0x0668B21A0C3A4821(Local_99, 10f, 0, 0, 0, 0, 0);
						if (!unk_0xA929B2923D14E2F8(unk_0x0C00E753D78DEA62(), 0))
						{
							unk_0xA5A55E27B5DAA4C2(unk_0x0C00E753D78DEA62());
							if (unk_0x1C34CE8087E3897C(unk_0x0C00E753D78DEA62(), Local_99, 8f, 8f, 8f, 0, 1, 0))
							{
								iLocal_133 = unk_0x0C00E753D78DEA62();
								unk_0xF0F77C99098F999B(iLocal_133, 1, 0);
								unk_0x813865264334331D(&iLocal_133);
							}
						}
						if (!unk_0xA929B2923D14E2F8(iLocal_59, 0))
						{
							unk_0xD602D152E57C823D(iLocal_59, 1);
							if (!unk_0xA3794949321E107C(uLocal_319))
							{
								uLocal_319 = func_62(iLocal_59, 0, 0);
								unk_0xB8F5F7438C07CC5E(uLocal_319, true);
							}
						}
						iLocal_117 = 0;
					}
				}
				if (iLocal_129 && unk_0x0F1BF24ED3B7ED40(uLocal_134))
				{
					if (unk_0x83666F9FB8FEBD4B() > 5700 && !iLocal_317)
					{
						if ((unk_0x9EFEA3B33DE2B966(unk_0x17B5CC8A8615737D()) && unk_0x1066E7A58E2A0D9D() == 4) || (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0) && unk_0x428CA09FA2E92B87() == 4))
						{
							unk_0x9AF1ABF0E97411BF("CamPushInNeutral", 0, 0);
							unk_0x4988C48537D1AE4F(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
							iLocal_317 = 1;
						}
					}
					if (unk_0x83666F9FB8FEBD4B() > 6000)
					{
						if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
						{
							unk_0x83150B7E65C16AFE(unk_0x17B5CC8A8615737D(), 0, 0);
						}
						unk_0xC8C3338D4DBC00FE(unk_0xBE369BE1BC57A796(), 1, 0);
						unk_0xE418A8E16B02C0AC(1);
						unk_0x2D28D5B324F77D2D(1);
						func_52(0, 1, 1, 0);
						unk_0xA652CA24468EC747(uLocal_134, 0);
						unk_0x9274EF97A90581BE(0, 0, 3000, 1, 0, 0);
						unk_0x2BC4A4AFFC2D937D(uLocal_134, 0);
						unk_0x72B6EAB729050F5B(0);
					}
				}
				if (unk_0x1C34CE8087E3897C(unk_0x17B5CC8A8615737D(), -2201.417f, 4296.06f, 47.5076f, 100f, 100f, 100f, 0, 1, 0))
				{
					unk_0x0668B21A0C3A4821(Local_87, 5f, 0, 0, 0, 0, 0);
				}
			}
			if (!bLocal_123)
			{
				if (unk_0x1C34CE8087E3897C(unk_0x17B5CC8A8615737D(), Local_103, 100f, 100f, 100f, 0, 1, 0))
				{
					unk_0xE1324F59713746FA(joaat("ig_bestmen"));
					if (unk_0x9F746898F7881612(joaat("ig_bestmen")))
					{
						iLocal_57 = unk_0x2AD5F4170F4ACBEB(4, joaat("ig_bestmen"), -2202.747f, 4299.008f, 47.4293f, 73.0028f, 1, 1);
						func_90(&uLocal_136, 4, iLocal_57, "BESTMAN", 0, 1);
						unk_0x2F933BB106547968(iLocal_57, 0, 0, 0, 0);
						unk_0x3BB70315907D9456(iLocal_57, joaat("player"));
						unk_0xCC61640A821F277C(iLocal_57, 1);
						unk_0x6018E338F7ABCE75(iLocal_57, 185, 1);
						unk_0x86DD54980FE55567(&uLocal_113);
						unk_0x6349785089ED32B4(0, unk_0x17B5CC8A8615737D(), -1);
						unk_0x4718A774D9248520(0, unk_0x17B5CC8A8615737D(), -1, 2048, 2);
						unk_0x007AE2AA9E15FA7B(uLocal_113);
						unk_0x00E85C3B3BD34B10(iLocal_57, uLocal_113);
						unk_0x08377FB2AE4C6899(&uLocal_113);
						bLocal_123 = true;
					}
				}
			}
			if (!bLocal_124)
			{
				if (unk_0x1C34CE8087E3897C(unk_0x17B5CC8A8615737D(), Local_77, 20f, 20f, 20f, 0, 1, 0))
				{
					func_21();
					if (!func_65())
					{
						func_4(&uLocal_136, "stagdau", "stagd_spot", 4, 0, 0, 0);
						bLocal_124 = true;
					}
				}
			}
			if (((unk_0x70A9F320A34FAC28(unk_0x17B5CC8A8615737D(), Local_70, Local_73, fLocal_76, 0, 1, 0) && unk_0x70A9F320A34FAC28(iLocal_55, Local_70, Local_73, fLocal_76, 0, 1, 0)) || (unk_0x1C34CE8087E3897C(iLocal_55, Local_67, 0f, 0f, 2f, 1, 1, 0) && func_60(1, 0, 1))) || bLocal_118)
			{
				switch (iLocal_49)
				{
					case 0:
						unk_0x020DF7300725ECAB(&uLocal_320);
						if (!bLocal_118)
						{
							Local_67 = { Local_103 };
							if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
							{
								if (!unk_0xA929B2923D14E2F8(unk_0x0C00E753D78DEA62(), 0))
								{
									unk_0xEEA9C8F490BB3507(unk_0x0C00E753D78DEA62(), 10.5f, 4, 0);
								}
							}
							if (!unk_0xA929B2923D14E2F8(iLocal_59, 0))
							{
								iVar2 = unk_0xB2CED41F4337ED8B();
								if (iVar2 != 0)
								{
									iVar3 = unk_0xB866C0EABE959340(iVar2);
									if (iVar3 == 4)
									{
										unk_0x4718A774D9248520(unk_0x17B5CC8A8615737D(), iLocal_55, 5000, 0, 2);
									}
									else
									{
										unk_0x4718A774D9248520(unk_0x17B5CC8A8615737D(), iLocal_59, 5000, 2052, 4);
										unk_0x7311F9D2C4E44EDB(iLocal_59, 0f, 0f, 0f, 1, -1, 3000, 2000);
									}
								}
							}
							func_21();
							if (!func_65())
							{
								func_4(&uLocal_136, "stagdau", "stagd_wait1", 4, 0, 0, 0);
								if (!unk_0xCA41A00932714525(iLocal_55))
								{
									unk_0x15848523A8959DBC(iLocal_55);
									unk_0x86DD54980FE55567(&uLocal_113);
									unk_0x084522380FECC554(0, -2013.094f, 460.3515f, 101.8024f, 2f, 20000, 1048576000, 0, 1193033728);
									unk_0x084522380FECC554(0, Local_99, 3f, 20000, 1048576000, 0, 1193033728);
									unk_0x6349785089ED32B4(0, unk_0x17B5CC8A8615737D(), -1);
									unk_0x4718A774D9248520(0, unk_0x17B5CC8A8615737D(), -1, 2048, 2);
									unk_0x007AE2AA9E15FA7B(uLocal_113);
									unk_0x00E85C3B3BD34B10(iLocal_55, uLocal_113);
									unk_0x08377FB2AE4C6899(&uLocal_113);
									unk_0x650BB0E111420EAF(iLocal_55, 1);
								}
								bLocal_118 = true;
								unk_0xC1B1E9A034A63A62(0);
							}
						}
						if (!unk_0xCA41A00932714525(iLocal_55) && !unk_0xA929B2923D14E2F8(iLocal_59, 0))
						{
							if ((bLocal_118 && unk_0x1C34CE8087E3897C(iLocal_55, Local_99, 1f, 1f, 1f, 0, 1, 0)) && !unk_0xFD0FE723227D5AB6(iLocal_55, 0))
							{
								if (unk_0xF30AB065E07D2B0F(iLocal_55))
								{
									if (!func_65())
									{
										if (func_11() == 2)
										{
											func_4(&uLocal_136, "stagdau", "stagd_reply", 4, 0, 0, 0);
										}
									}
									unk_0xFB2D342CDD441DD9(iLocal_55);
								}
								if (unk_0xF6563E19EDE84B8C(iLocal_55))
								{
									if (!unk_0xCA41A00932714525(iLocal_55))
									{
										unk_0x027DB6817AB239EB(iLocal_55, 0, 0);
										unk_0xCEDF2A713644AEDA(iLocal_55, 0, 0);
										unk_0xC6042F55A6EA17B2(iLocal_55, 1);
										unk_0x98F0FA127445E343(iLocal_55, 1);
									}
									if (unk_0x83666F9FB8FEBD4B() > 15000)
									{
										if (!unk_0xCA41A00932714525(iLocal_55))
										{
											unk_0x2F933BB106547968(iLocal_55, 2, 1, 0, 0);
											unk_0x2F933BB106547968(iLocal_55, 0, 0, 1, 0);
											unk_0x2F933BB106547968(iLocal_55, 3, 1, 0, 0);
											unk_0x2F933BB106547968(iLocal_55, 4, 1, 0, 0);
											unk_0x2F933BB106547968(iLocal_55, 11, 0, 0, 0);
											unk_0x027DB6817AB239EB(iLocal_55, 1, 0);
											unk_0xCEDF2A713644AEDA(iLocal_55, 1, 0);
											unk_0xC6042F55A6EA17B2(iLocal_55, 0);
											unk_0x98F0FA127445E343(iLocal_55, 0);
											unk_0x5DC8C2F2F8A363C2(iLocal_55, Local_99, 1, 0, 0, 1);
											unk_0x0608D50823C6AA6D(iLocal_55, 106.5078f);
											unk_0x346D6A5BC2F879E2(iLocal_55, 0);
											unk_0xC96275575DC981A9(iLocal_55, 17, 1);
											unk_0x7CA9312EDAAC4056(iLocal_55, 1);
											unk_0x4718A774D9248520(unk_0x17B5CC8A8615737D(), iLocal_55, -1, 2048, 4);
											if (!unk_0xA929B2923D14E2F8(iLocal_59, 0))
											{
												unk_0x86DD54980FE55567(&uLocal_113);
												unk_0x4718A774D9248520(0, unk_0x17B5CC8A8615737D(), -1, 2052, 4);
												unk_0x3AD5401AC8DD9226(0, iLocal_59, -1, 0, 2f, 1, 0);
												unk_0x007AE2AA9E15FA7B(uLocal_113);
												unk_0x00E85C3B3BD34B10(iLocal_55, uLocal_113);
												unk_0x08377FB2AE4C6899(&uLocal_113);
											}
										}
										unk_0xC1B1E9A034A63A62(0);
										Local_67 = { Local_103 };
										Local_70 = { Local_106 };
										Local_73 = { Local_109 };
										fLocal_76 = fLocal_112;
										iLocal_49 = 1;
									}
								}
							}
						}
						break;
					
					case 1:
						if (!unk_0xCA41A00932714525(iLocal_55) && !unk_0xA929B2923D14E2F8(iLocal_59, 0))
						{
							if (unk_0x4E84D2C9B54F79BA(iLocal_55, iLocal_59, 5f, 5f, 5f, 0, 1, 0) && !iLocal_128)
							{
								func_4(&uLocal_136, "stagdau", "stagd_suit", 4, 0, 0, 0);
								iLocal_128 = 1;
							}
							if (unk_0xFD0FE723227D5AB6(iLocal_55, 0))
							{
								if (unk_0x2315BB1606BC3DC3(unk_0x17B5CC8A8615737D(), iLocal_59, 0))
								{
									if (func_4(&uLocal_136, "stagdau", "stagd_chape", 4, 0, 0, 0))
									{
										iLocal_49 = 2;
										bLocal_118 = false;
										iLocal_130 = 0;
									}
								}
								else
								{
									if (iLocal_308 == 0)
									{
										iLocal_308 = unk_0x94E3E074F38DF86C();
									}
									if (iLocal_308 != 0 && unk_0x94E3E074F38DF86C() > iLocal_308 + 6000)
									{
										func_4(&uLocal_136, "stagdau", "stagd_getin", 4, 0, 0, 0);
										iLocal_308 = 0;
									}
									unk_0xC1B1E9A034A63A62(0);
								}
							}
						}
						break;
					
					case 2:
						if (!bLocal_118)
						{
							func_21();
							if (func_4(&uLocal_136, "stagdau", "stagd_hairc", 4, 0, 0, 0))
							{
								if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
								{
									if (!unk_0xA929B2923D14E2F8(unk_0x0C00E753D78DEA62(), 0))
									{
										iLocal_132 = unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0);
										unk_0xEEA9C8F490BB3507(unk_0x0C00E753D78DEA62(), 10.5f, 2, 0);
									}
								}
								if (!unk_0xCA41A00932714525(iLocal_57) && !unk_0xCA41A00932714525(iLocal_55))
								{
									if (unk_0xFD0FE723227D5AB6(iLocal_55, 0))
									{
										iLocal_132 = unk_0x60604E51E30D25B8(iLocal_55, 0);
										unk_0x86DD54980FE55567(&uLocal_113);
										unk_0x3AD5401AC8DD9226(0, iLocal_132, -1, 2, 1f, 1, 0);
										unk_0xEF9294ED57E4AC3D(0);
										unk_0x007AE2AA9E15FA7B(uLocal_113);
										unk_0x00E85C3B3BD34B10(iLocal_57, uLocal_113);
										unk_0x6018E338F7ABCE75(iLocal_57, 185, 0);
									}
									else
									{
										unk_0x834EF3BF2E6A8D29(iLocal_57, iLocal_55, -1, 8f, 1073741824, 1073741824, 0);
									}
									if (!unk_0xA3794949321E107C(uLocal_322))
									{
										uLocal_322 = func_64(iLocal_57, 0, 145);
									}
									if (unk_0xA3794949321E107C(uLocal_320))
									{
										unk_0x020DF7300725ECAB(&uLocal_320);
									}
								}
								unk_0xC1B1E9A034A63A62(0);
								iLocal_120 = 1;
								bLocal_118 = true;
							}
						}
						if (bLocal_118 && !unk_0xCA41A00932714525(iLocal_55))
						{
							if (unk_0x1F8F07D86DA1A701(iLocal_55, 242628503) == 7 || unk_0x83666F9FB8FEBD4B() > 12000)
							{
								Local_67 = { Local_77 };
								Local_70 = { Local_80 };
								Local_73 = { Local_83 };
								fLocal_76 = fLocal_86;
								unk_0xE1324F59713746FA(joaat("ig_bride"));
								unk_0xE1324F59713746FA(joaat("washington"));
								unk_0xE1324F59713746FA(joaat("baller2"));
								unk_0xE1324F59713746FA(joaat("primo"));
								if (((unk_0x9F746898F7881612(joaat("ig_bride")) && unk_0x9F746898F7881612(joaat("washington"))) && unk_0x9F746898F7881612(joaat("baller2"))) && unk_0x9F746898F7881612(joaat("primo")))
								{
									iLocal_56 = unk_0x2AD5F4170F4ACBEB(5, joaat("ig_bride"), -330.36f, 6154.03f, 30.8f, 90f, 1, 1);
									unk_0xCC61640A821F277C(iLocal_56, 1);
									unk_0x86DD54980FE55567(&uLocal_113);
									unk_0x6349785089ED32B4(0, unk_0x17B5CC8A8615737D(), -1);
									unk_0x007AE2AA9E15FA7B(uLocal_113);
									unk_0x00E85C3B3BD34B10(iLocal_56, uLocal_113);
									unk_0x08377FB2AE4C6899(&uLocal_113);
									iLocal_58 = unk_0x2AD5F4170F4ACBEB(4, joaat("ig_bestmen"), -333.3692f, 6157.644f, 30.489f, 83.2763f, 1, 1);
									unk_0xCC61640A821F277C(iLocal_58, 1);
									unk_0x6349785089ED32B4(iLocal_58, unk_0x17B5CC8A8615737D(), -1);
									unk_0x2F933BB106547968(iLocal_58, 0, 1, 0, 0);
									uLocal_60[0] = unk_0x692A2891A2BA7352(joaat("washington"), -342.1295f, 6141.404f, 30.4839f, 133.4604f, 1, 1);
									uLocal_60[1] = unk_0x692A2891A2BA7352(joaat("baller2"), -338.3777f, 6137.41f, 30.476f, 135.6866f, 1, 1);
									uLocal_60[2] = unk_0x692A2891A2BA7352(joaat("primo"), -329.4687f, 6143.247f, 30.4893f, 313.82f, 1, 1);
									uLocal_60[3] = unk_0x692A2891A2BA7352(joaat("washington"), -322.3235f, 6135.427f, 30.4924f, 316.5898f, 1, 1);
									unk_0x357EE036FE09513D(uLocal_60[0], unk_0x0E29C61F26D96FDB(0, 127), 0);
									unk_0x357EE036FE09513D(uLocal_60[1], unk_0x0E29C61F26D96FDB(0, 127), 0);
									unk_0x357EE036FE09513D(uLocal_60[2], unk_0x0E29C61F26D96FDB(0, 127), 0);
									unk_0x357EE036FE09513D(uLocal_60[3], unk_0x0E29C61F26D96FDB(0, 127), 0);
									iLocal_49 = 3;
									bLocal_118 = false;
									iLocal_130 = 0;
								}
							}
						}
						break;
					
					case 3:
						if (!bLocal_118)
						{
							if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
							{
								if (!unk_0xA929B2923D14E2F8(unk_0x0C00E753D78DEA62(), 0))
								{
									unk_0xEEA9C8F490BB3507(unk_0x0C00E753D78DEA62(), 10.5f, 2, 0);
									bLocal_118 = true;
									unk_0x4EDE34FBADD967A6(3000);
									func_21();
									unk_0x4EDE34FBADD967A6(0);
								}
							}
						}
						break;
					}
			}
		}
		else if (unk_0xA929B2923D14E2F8(iLocal_55, 0))
		{
			func_177();
		}
	}
}

void func_90(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_69702)
	{
		if (!unk_0xCA41A00932714525(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xFB616ABA635A95B3(iParam2, 0);
			}
			else
			{
				unk_0xFB616ABA635A95B3(iParam2, 1);
			}
		}
		if (!unk_0xCA41A00932714525(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x8E601051A3FDE8ED(iParam2, 0);
			}
			else
			{
				unk_0x8E601051A3FDE8ED(iParam2, 1);
			}
		}
	}
}

void func_91()
{
	if ((iLocal_310 && iLocal_307 != func_74(func_75())) && !unk_0x0F1BF24ED3B7ED40(uLocal_134))
	{
		func_95(((iLocal_307 * 1000 * 60 - func_74(func_75()) * 1000 * 60) + (iLocal_306 * 1000 - func_98(func_75()) * 1000)), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	if (iLocal_306 == 0)
	{
		if (iLocal_307 == func_74(func_75()) + 1 && ((((iLocal_306 == (func_98(func_75()) - 55) || iLocal_306 == (func_98(func_75()) - 56)) || iLocal_306 == (func_98(func_75()) - 57)) || iLocal_306 == (func_98(func_75()) - 58)) || iLocal_306 == (func_98(func_75()) - 59)))
		{
			func_94();
		}
	}
	if (iLocal_307 == func_74(func_75()))
	{
		func_94();
		func_92();
		if (!func_65())
		{
			func_4(&uLocal_136, "stagdau", "stagd_failti", 4, 0, 0, 0);
			if (!unk_0xCA41A00932714525(iLocal_55))
			{
				unk_0xD11C043590A1D7B7(iLocal_55, 1, 1);
			}
			if (!unk_0xCA41A00932714525(iLocal_56))
			{
				unk_0xCA58071CE9CCE891(iLocal_56, unk_0x17B5CC8A8615737D(), 300f, -1, 0, 0);
			}
			if (!unk_0xCA41A00932714525(iLocal_58))
			{
				unk_0xCA58071CE9CCE891(iLocal_58, unk_0x17B5CC8A8615737D(), 300f, -1, 0, 0);
			}
			unk_0x4EDE34FBADD967A6(8500);
			if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
			{
				if (!unk_0xA929B2923D14E2F8(unk_0x0C00E753D78DEA62(), 0))
				{
					unk_0xEEA9C8F490BB3507(unk_0x0C00E753D78DEA62(), 10.5f, 3, 0);
				}
			}
			unk_0x4EDE34FBADD967A6(2000);
			if (!unk_0xA929B2923D14E2F8(iLocal_55, 0))
			{
				unk_0x15848523A8959DBC(iLocal_55);
				unk_0x4718A774D9248520(unk_0x17B5CC8A8615737D(), iLocal_55, 5000, 2048, 2);
				unk_0x4718A774D9248520(iLocal_55, unk_0x17B5CC8A8615737D(), 5000, 2048, 2);
				unk_0x83150B7E65C16AFE(iLocal_55, 0, 0);
				unk_0xFB2D342CDD441DD9(iLocal_55);
			}
			if (!unk_0xA929B2923D14E2F8(iLocal_57, 0))
			{
				unk_0x4718A774D9248520(unk_0x17B5CC8A8615737D(), iLocal_55, 5000, 0, 2);
				unk_0x83150B7E65C16AFE(iLocal_57, 500, 0);
			}
			unk_0x4EDE34FBADD967A6(1000);
			if (!unk_0xA929B2923D14E2F8(iLocal_59, 0))
			{
				if (unk_0x2315BB1606BC3DC3(unk_0x17B5CC8A8615737D(), iLocal_59, 0))
				{
					unk_0x83150B7E65C16AFE(unk_0x17B5CC8A8615737D(), 0, 0);
				}
			}
			if (!unk_0xA929B2923D14E2F8(iLocal_55, 0) && !unk_0xA929B2923D14E2F8(unk_0x0C00E753D78DEA62(), 0))
			{
				unk_0x86DD54980FE55567(&uLocal_113);
				if (unk_0x0C00E753D78DEA62() == iLocal_59)
				{
					unk_0x3AD5401AC8DD9226(0, iLocal_59, -1, -1, 1f, 8, 0);
					unk_0xA0F84EA3D7C06982(0, iLocal_59, unk_0x17B5CC8A8615737D(), 8, 15f, 786469, 10f, 10f, 1);
				}
				else
				{
					unk_0xCA58071CE9CCE891(0, unk_0x17B5CC8A8615737D(), 300f, -1, 0, 0);
				}
				unk_0x007AE2AA9E15FA7B(uLocal_113);
				unk_0x00E85C3B3BD34B10(iLocal_55, uLocal_113);
				unk_0x08377FB2AE4C6899(&uLocal_113);
				unk_0x650BB0E111420EAF(iLocal_55, 1);
				if (!unk_0xA929B2923D14E2F8(iLocal_57, 0))
				{
					unk_0x86DD54980FE55567(&uLocal_113);
					if (unk_0x0C00E753D78DEA62() == iLocal_59)
					{
						unk_0x3AD5401AC8DD9226(0, iLocal_59, -1, 0, 2f, 1, 0);
						unk_0xC47A71ED8C26841E(0, 100000);
					}
					else
					{
						unk_0xCA58071CE9CCE891(0, unk_0x17B5CC8A8615737D(), 300f, -1, 0, 0);
					}
					unk_0x007AE2AA9E15FA7B(uLocal_113);
					unk_0x00E85C3B3BD34B10(iLocal_57, uLocal_113);
					unk_0x08377FB2AE4C6899(&uLocal_113);
					unk_0x650BB0E111420EAF(iLocal_57, 1);
				}
			}
			unk_0xC8C3338D4DBC00FE(unk_0xBE369BE1BC57A796(), 1, 0);
			while (func_65())
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			func_2();
		}
	}
}

void func_92()
{
	Global_14611 = 0;
	func_93();
}

void func_93()
{
	if (unk_0x55C74612BE548D78())
	{
		unk_0x5FB0B609B3A49840();
		Global_16756 = 0;
		unk_0x660E8E7836E95077(1);
		Global_15745 = 6;
		return;
	}
}

void func_94()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = unk_0x80BC37C67CB292E5();
	iVar1 = unk_0x32883EAC7DC86C40();
	iVar2 = unk_0x0956E4296D9CC40A();
	if (iLocal_309 == 0)
	{
		if (iVar1 == 55 && iVar2 >= 30)
		{
			unk_0x4988C48537D1AE4F(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_309++;
		}
	}
	else if (iLocal_309 == 1)
	{
		if (iVar1 == 56 && iVar2 >= 0)
		{
			unk_0x4988C48537D1AE4F(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_309++;
		}
	}
	else if (iLocal_309 == 2)
	{
		if (iVar1 == 56 && iVar2 >= 30)
		{
			unk_0x4988C48537D1AE4F(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_309++;
		}
	}
	else if (iLocal_309 == 3)
	{
		if (iVar1 == 57 && iVar2 >= 0)
		{
			unk_0x4988C48537D1AE4F(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_309++;
		}
	}
	else if (iLocal_309 == 4)
	{
		if (iVar1 == 57 && iVar2 >= 30)
		{
			unk_0x4988C48537D1AE4F(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_309++;
		}
	}
	else if (iLocal_309 == 5)
	{
		if (iVar1 == 58 && iVar2 >= 0)
		{
			unk_0x4988C48537D1AE4F(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_309++;
		}
	}
	else if (iLocal_309 == 6)
	{
		if (iVar1 == 58 && iVar2 >= 15)
		{
			unk_0x4988C48537D1AE4F(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_309++;
		}
	}
	else if (iLocal_309 == 7)
	{
		if (iVar1 == 58 && iVar2 >= 30)
		{
			unk_0x4988C48537D1AE4F(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_309++;
		}
	}
	else if (iLocal_309 == 8)
	{
		if (iVar1 == 58 && iVar2 >= 45)
		{
			unk_0x4988C48537D1AE4F(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_309++;
		}
	}
	else if (iLocal_309 == 9)
	{
		if (iVar1 == 59 && iVar2 >= 0)
		{
			unk_0x4988C48537D1AE4F(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_309++;
		}
	}
	else if (iLocal_309 == 10)
	{
		if (iVar1 == 59 && iVar2 >= 15)
		{
			unk_0x4988C48537D1AE4F(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_309++;
		}
	}
	else if (iLocal_309 == 11)
	{
		if (iVar1 == 59 && iVar2 >= 30)
		{
			unk_0x4988C48537D1AE4F(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_309++;
		}
	}
	else if (iLocal_309 == 12)
	{
		if (iVar1 == 59 && iVar2 >= 45)
		{
			unk_0x4988C48537D1AE4F(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_309++;
		}
	}
	else if (iLocal_309 == 13)
	{
		if (iVar1 >= 0 && iVar0 == iLocal_307)
		{
			unk_0x4988C48537D1AE4F(-1, "TIMER_STOP", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_309++;
		}
	}
}

void func_95(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_97(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1354542.f_1 = 1;
		func_96(7, iVar0);
		Global_1354542.f_4282[iVar0] = iParam0;
		StringCopy(&(Global_1354542.f_4282.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1354542.f_4282.f_172[iVar0] = iParam2;
		Global_1354542.f_4282.f_216[iVar0] = iParam3;
		Global_1354542.f_4282.f_183[iVar0] = iParam4;
		Global_1354542.f_4282.f_194[iVar0] = iParam5;
		Global_1354542.f_4282.f_249[iVar0] = iParam6;
		Global_1354542.f_4282.f_260[iVar0] = iParam7;
		Global_1354542.f_4282.f_205[iVar0] = iParam8;
		Global_1354542.f_4282.f_314[iVar0] = iParam9;
		Global_1354542.f_4282.f_325[iVar0] = iParam10;
		Global_1354542.f_4282.f_357[iVar0] = iParam11;
		Global_1354542.f_4282.f_238[iVar0] = iParam12;
		Global_1354542.f_4282.f_271[iVar0] = iParam13;
		Global_1354542.f_4282.f_368[iVar0] = iParam14;
		Global_1354542.f_4282.f_379[iVar0] = iParam15;
		Global_1354542.f_4282.f_390[iVar0] = iParam16;
	}
}

void func_96(int iParam0, int iParam1)
{
	unk_0xEB79FECD9022AAF0(&(Global_1354542.f_5703[iParam0]), iParam1);
}

bool func_97(int iParam0, int iParam1)
{
	return unk_0x48B8265059381CD0(Global_1354542.f_5703[iParam0], iParam1);
}

int func_98(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

void func_99()
{
	if (!unk_0xCA41A00932714525(iLocal_55))
	{
		if (!unk_0xA929B2923D14E2F8(iLocal_59, 0) && unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
		{
			if (unk_0x2315BB1606BC3DC3(iLocal_55, iLocal_59, 0) && unk_0xDF0087E7822095AA(iLocal_59))
			{
				if (!func_65())
				{
					if (func_100())
					{
						func_4(&uLocal_136, "stagdau", "stagd_crash", 4, 0, 0, 0);
					}
					else
					{
						func_4(&uLocal_136, "stagdau", "stagd_bump1", 4, 0, 0, 0);
					}
				}
			}
			else if (unk_0x2315BB1606BC3DC3(iLocal_55, unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0), 0) && unk_0xDF0087E7822095AA(unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0)))
			{
				if (!func_65())
				{
					func_4(&uLocal_136, "stagdau", "stagd_bump1", 4, 0, 0, 0);
				}
			}
		}
	}
}

int func_100()
{
	if (unk_0x48B8265059381CD0(unk_0x0E29C61F26D96FDB(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_101()
{
	if (!unk_0xCA41A00932714525(iLocal_55))
	{
		unk_0xEABCB9D3B3CDC77E(iLocal_55, 0);
	}
	if (!unk_0xCA41A00932714525(iLocal_57))
	{
		unk_0xEABCB9D3B3CDC77E(iLocal_57, 0);
	}
	if (((((unk_0x4E84D2C9B54F79BA(iLocal_55, unk_0x17B5CC8A8615737D(), 4f, 4f, 4f, 0, 1, 0) || iLocal_49 == 1) || iLocal_126) || iLocal_127) || iLocal_125) || bLocal_118)
	{
		if ((((((iLocal_49 >= 2 && iLocal_120) && iLocal_49 != 1) && !iLocal_126) && !iLocal_127) && !iLocal_125) && !bLocal_118)
		{
			if (unk_0x4E84D2C9B54F79BA(iLocal_57, unk_0x17B5CC8A8615737D(), 4f, 4f, 4f, 0, 1, 0))
			{
				if (func_103())
				{
					func_102(0);
				}
			}
			else if (func_65() && !func_103())
			{
				func_102(1);
			}
		}
		else if (func_103())
		{
			func_102(0);
		}
	}
	else if (func_65() && !func_103())
	{
		func_102(1);
	}
}

void func_102(int iParam0)
{
	Global_16756 = iParam0;
}

int func_103()
{
	if (Global_16756 == 1)
	{
		return 1;
	}
	return 0;
}

void func_104()
{
	if ((unk_0x80BC37C67CB292E5() > 2 && unk_0x80BC37C67CB292E5() < 15) && !unk_0x0DD3F4C17D207474(unk_0xBE369BE1BC57A796(), 0))
	{
	}
	else
	{
		if (!unk_0xCA41A00932714525(iLocal_55))
		{
			unk_0x15848523A8959DBC(iLocal_55);
			func_21();
			unk_0x4EDE34FBADD967A6(0);
			func_4(&uLocal_136, "stagdau", "stagd_failda", 4, 0, 0, 0);
			if (unk_0x23E9113C762466ED(iLocal_66))
			{
				unk_0xB2E72B5CFE1EC372(iLocal_66, 1, 1);
			}
		}
		while (func_65())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		func_2();
	}
}

void func_105()
{
	if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()) && !unk_0xCA41A00932714525(iLocal_55))
	{
		if (!iLocal_115)
		{
			if ((unk_0x4E84D2C9B54F79BA(unk_0x17B5CC8A8615737D(), iLocal_55, 130f, 60f, 50f, 0, 1, 0) && !unk_0xF6563E19EDE84B8C(iLocal_55)) || unk_0x4E84D2C9B54F79BA(unk_0x17B5CC8A8615737D(), iLocal_55, 10f, 10f, 10f, 0, 1, 0))
			{
				if (!unk_0xA3794949321E107C(uLocal_321))
				{
					uLocal_321 = func_64(iLocal_55, 0, 145);
					unk_0x1441D969BF79AD61(uLocal_321, 0);
					unk_0x4718A774D9248520(iLocal_55, unk_0x17B5CC8A8615737D(), -1, 2052, 4);
				}
				if (unk_0x4E84D2C9B54F79BA(unk_0x17B5CC8A8615737D(), iLocal_55, 10f, 10f, 10f, 0, 1, 0))
				{
					if (unk_0xA3794949321E107C(uLocal_321))
					{
						unk_0x1441D969BF79AD61(uLocal_321, 1);
					}
					unk_0x5AE11BC36633DE4E(0);
					func_92();
					while (func_65())
					{
						unk_0x4EDE34FBADD967A6(0);
					}
					if (!func_65())
					{
						if (func_11() == 0)
						{
							func_4(&uLocal_136, "stagdau", "stagd_greetM", 4, 0, 0, 0);
						}
						if (func_11() == 1)
						{
							func_4(&uLocal_136, "stagdau", "stagd_greetF", 4, 0, 0, 0);
						}
						if (func_11() == 2)
						{
							func_4(&uLocal_136, "stagdau", "stagd_greetT", 4, 0, 0, 0);
						}
					}
					iLocal_115 = 1;
				}
			}
			if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()) && !unk_0xCA41A00932714525(iLocal_55))
			{
				if ((!func_143() && unk_0x70A9F320A34FAC28(unk_0x17B5CC8A8615737D(), -1131.777f, 2636.418f, 15.589f, -1040.995f, 2717.077f, 31.715f, 60.75f, 0, 1, 0)) && unk_0xA3794949321E107C(uLocal_321))
				{
					if (!func_65())
					{
						func_4(&uLocal_136, "stagdau", "stagd_greet2", 4, 0, 0, 0);
					}
					if (!unk_0xA929B2923D14E2F8(unk_0x0C00E753D78DEA62(), 0))
					{
						iLocal_65 = unk_0x0C00E753D78DEA62();
					}
					func_106(1);
				}
			}
		}
		else if (!iLocal_301)
		{
			if (!unk_0xCA41A00932714525(iLocal_55))
			{
				if (!unk_0x4E84D2C9B54F79BA(unk_0x17B5CC8A8615737D(), iLocal_55, 25f, 25f, 25f, 0, 1, 0))
				{
					func_21();
					unk_0x4EDE34FBADD967A6(0);
					func_4(&uLocal_136, "stagdau", "stagd_leave", 4, 0, 0, 0);
					iLocal_301 = 1;
				}
			}
		}
	}
}

int func_106(int iParam0)
{
	if (func_110())
	{
		Global_101690 = 1;
		Global_101687 = unk_0x94E3E074F38DF86C();
		if (func_39(Global_101689))
		{
			func_107(0);
		}
		unk_0x2A8465C4D16098B7(1, "RE_TITLE");
		if (iParam0 && func_39(Global_101689))
		{
			unk_0x3CB6B08E51C56965();
		}
		return 1;
	}
	return 0;
}

void func_107(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_101700.f_23954.f_2 < 3)
			{
				if (!unk_0x7AED88F5CDBFFB3C())
				{
					func_108(func_109(iParam0), -1);
					Global_101700.f_23954.f_2++;
					unk_0xEB79FECD9022AAF0(&Global_101696, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0x48B8265059381CD0(Global_101696, 1))
			{
				if (!unk_0x7AED88F5CDBFFB3C())
				{
					func_108(func_109(iParam0), -1);
					Global_101700.f_23954.f_3++;
					unk_0xEB79FECD9022AAF0(&Global_101696, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0x48B8265059381CD0(Global_101696, 2))
			{
				if (!unk_0x7AED88F5CDBFFB3C())
				{
					func_108(func_109(iParam0), -1);
					Global_101700.f_23954.f_4++;
					unk_0xEB79FECD9022AAF0(&Global_101696, 2);
				}
			}
			break;
	}
}

void func_108(var uParam0, int iParam1)
{
	unk_0x252D021C9D92DBA9(uParam0);
	unk_0x8B1500AADBA665BD(0, 0, 1, iParam1);
}

char* func_109(int iParam0)
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "AM_H_REFS";
			break;
		
		case 1:
			sVar0 = "RE_FLASHBLIP";
			break;
		
		case 2:
			sVar0 = "RE_HANDOVER";
			break;
	}
	return sVar0;
}

int func_110()
{
	switch (func_111(&Global_25249, 0, 5, 0, unk_0xE9A5FDFDC239B2ED()))
	{
		case 1:
			return 1;
			break;
		
		case 0:
			return 1;
			break;
	}
	return 0;
}

int func_111(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_89302.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_115(0))
		{
			return 0;
		}
		Global_35745++;
		*uParam0 = Global_35745;
		unk_0xF7A1A67D26D29975(unk_0x592069F95C314814(), 0);
		Global_17151.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0xBED07ACDB4C03BB0(8);
		}
		Global_35781 = iParam2;
		Global_35743 = *uParam0;
		Global_35744 = iParam4;
		Global_35742 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_35742 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_35742)
			{
				if (Global_35748[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_35743 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_113(iParam2))
		{
			return 0;
		}
		if (Global_35742 == 8)
		{
			return 0;
		}
		Global_35745++;
		*uParam0 = Global_35745;
		Global_35748[Global_35742 /*4*/] = Global_35745;
		Global_35748[Global_35742 /*4*/].f_1 = iParam1;
		Global_35748[Global_35742 /*4*/].f_2 = iParam2;
		Global_35748[Global_35742 /*4*/].f_3 = 0;
		Global_35742++;
		if (iParam4 != 0)
		{
			func_112(uParam0, iParam4);
		}
	}
	return 2;
}

void func_112(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_35742 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_35742)
	{
		if (Global_35748[iVar0 /*4*/] == *uParam0)
		{
			Global_35748[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_113(int iParam0)
{
	return func_114(iParam0, Global_35781);
}

int func_114(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

int func_115(int iParam0)
{
	if (Global_35781 == 15)
	{
		return 0;
	}
	if (func_113(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_116()
{
	if (unk_0x23E9113C762466ED(iLocal_55))
	{
		if (!unk_0xCA41A00932714525(iLocal_55))
		{
			if (unk_0x3C04DDC5730997E5(-1, unk_0x57240623C1BC6E88(iLocal_55, 1), 3f))
			{
				unk_0xBC8C26E1CC191108(iLocal_55);
				unk_0x4B04B4FAE554FA03(iLocal_55, 99);
			}
			if (!unk_0xA929B2923D14E2F8(unk_0x0C00E753D78DEA62(), 0))
			{
				if (unk_0x13B7ACE69D27E3E4(unk_0x0C00E753D78DEA62()) < 3f)
				{
					unk_0x98F0FA127445E343(iLocal_55, 1);
				}
				else
				{
					unk_0x98F0FA127445E343(iLocal_55, 0);
					if (unk_0xB42101338C533CB4(unk_0x0C00E753D78DEA62(), iLocal_55))
					{
						unk_0xBC8C26E1CC191108(iLocal_55);
						unk_0x4B04B4FAE554FA03(iLocal_55, 99);
					}
				}
			}
			if (unk_0x4E84D2C9B54F79BA(unk_0x17B5CC8A8615737D(), iLocal_55, 2f, 2f, 2f, 0, 1, 0))
			{
				if (!unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
				{
					if (func_60(1, 0, 1))
					{
						if (!iLocal_311)
						{
							func_106(1);
							func_52(1, 1, 1, 0);
							unk_0xC8C3338D4DBC00FE(unk_0xBE369BE1BC57A796(), 0, 0);
							unk_0x774537030DC49089(unk_0x17B5CC8A8615737D(), 1);
							unk_0x2E2945F5602A744F(1);
							unk_0xE418A8E16B02C0AC(0);
							unk_0x2D28D5B324F77D2D(0);
							if (!unk_0xCA41A00932714525(iLocal_55))
							{
								unk_0x1B60289D0F2A2E3C(unk_0x57240623C1BC6E88(iLocal_55, 1), 5f, 1, 0, 0, 0);
								unk_0x38130BEB2174F958(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1), 5f);
							}
							if (!unk_0xA929B2923D14E2F8(unk_0x0C00E753D78DEA62(), 0))
							{
								if (unk_0x4E84D2C9B54F79BA(unk_0x0C00E753D78DEA62(), iLocal_55, 5f, 5f, 5f, 0, 1, 0))
								{
									unk_0x5DC8C2F2F8A363C2(unk_0x0C00E753D78DEA62(), unk_0x57240623C1BC6E88(iLocal_55, 1) - Vector(1.5f, 4f, 3f), 1, 0, 0, 1);
									unk_0x482AE8C0EAF5AE07(unk_0x0C00E753D78DEA62(), 1084227584);
								}
							}
							if (!unk_0xCA41A00932714525(iLocal_55))
							{
								uLocal_318 = unk_0x356EABB012B22D07(-935.57f, 2767.616f, 24.448f, 2.433f, 0.152f, 53.743f, 2);
								uLocal_134 = unk_0xBD7A488D61CE4287("DEFAULT_ANIMATED_CAMERA", 0);
								unk_0xCE49D4A5BC766F78(uLocal_318, 0.158f);
								unk_0x563AC676C8BDAD48(uLocal_134, uLocal_318, "untie_cam", "re@stag_do@");
								unk_0xBC8C26E1CC191108(unk_0x17B5CC8A8615737D());
								unk_0xBC8C26E1CC191108(iLocal_55);
								unk_0xA17D768ED938600C(iLocal_55, uLocal_318, "re@stag_do@", "untie_ped", 1000f, -1000f, 4, 0, 1148846080, 0);
								unk_0xDEAF24B058321A05(iLocal_55, 0, 0);
								unk_0xA17D768ED938600C(unk_0x17B5CC8A8615737D(), uLocal_318, "re@stag_do@", "untie_player", 1000f, -1000f, 0, 0, 1148846080, 0);
								unk_0xDEAF24B058321A05(unk_0x17B5CC8A8615737D(), 0, 0);
								unk_0xA652CA24468EC747(uLocal_134, 1);
								unk_0x9274EF97A90581BE(1, 0, 3000, 1, 0, 0);
								iLocal_311 = 1;
							}
						}
					}
				}
			}
		}
		else
		{
			func_2();
		}
	}
	if (iLocal_311 && !iLocal_313)
	{
		func_21();
		unk_0x4EDE34FBADD967A6(0);
		if (func_11() == 0)
		{
			func_4(&uLocal_136, "stagdau", "stagd_untieM", 4, 0, 0, 0);
		}
		if (func_11() == 1)
		{
			func_4(&uLocal_136, "stagdau", "stagd_untieF", 4, 0, 0, 0);
		}
		if (func_11() == 2)
		{
			func_4(&uLocal_136, "stagdau", "stagd_untieT", 4, 0, 0, 0);
		}
		iLocal_313 = 1;
	}
	if (iLocal_311 && !iLocal_312)
	{
		if (!iLocal_316)
		{
			if (unk_0x96F65998C0685177(uLocal_318) > 0.2f && unk_0x96F65998C0685177(uLocal_318) < 0.3f)
			{
				unk_0xEE4ED1F88396A702(-1, "ROPE_CUT", unk_0x17B5CC8A8615737D(), "ROPE_CUT_SOUNDSET", 0, 0);
				iLocal_316 = 1;
			}
		}
		if (unk_0x96F65998C0685177(uLocal_318) > 0.4647059f && !iLocal_317)
		{
			if (unk_0x1066E7A58E2A0D9D() == 4)
			{
				unk_0x9AF1ABF0E97411BF("CamPushInNeutral", 0, 0);
				unk_0x4988C48537D1AE4F(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
				iLocal_317 = 1;
			}
		}
		if (unk_0x96F65998C0685177(uLocal_318) > 0.5f)
		{
			iLocal_312 = 1;
		}
		if (func_117(1000))
		{
			unk_0x50FD1894558DE186(800);
			while (unk_0x46EEE08565CE19CA())
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			iLocal_312 = 1;
			iLocal_315 = 1;
		}
	}
	if (iLocal_312 && !iLocal_314)
	{
		if (unk_0x23E9113C762466ED(iLocal_66))
		{
			unk_0xB2E72B5CFE1EC372(iLocal_66, 1, 1);
		}
		unk_0xBC8C26E1CC191108(unk_0x17B5CC8A8615737D());
		unk_0x5DC8C2F2F8A363C2(unk_0x17B5CC8A8615737D(), -936.6537f, 2767.497f, 24.4289f, 1, 0, 0, 1);
		unk_0x0608D50823C6AA6D(unk_0x17B5CC8A8615737D(), 208.4017f);
		unk_0xDEAF24B058321A05(unk_0x17B5CC8A8615737D(), 0, 0);
		unk_0xA652CA24468EC747(uLocal_134, 0);
		unk_0x9274EF97A90581BE(0, 0, 3000, 1, 0, 0);
		unk_0x2BC4A4AFFC2D937D(uLocal_134, 0);
		unk_0xBA7CD73403732191(0f);
		unk_0x503F20CB07C55470(-7f, 1065353216);
		func_52(0, 1, 1, 0);
		unk_0x774537030DC49089(unk_0x17B5CC8A8615737D(), 0);
		unk_0xE418A8E16B02C0AC(1);
		unk_0x2D28D5B324F77D2D(1);
		if (!unk_0xCA41A00932714525(iLocal_55))
		{
			unk_0x98F0FA127445E343(iLocal_55, 0);
			unk_0xBC8C26E1CC191108(iLocal_55);
			unk_0x78F48B47DB1C3316(iLocal_55, 1);
			unk_0x5DC8C2F2F8A363C2(iLocal_55, -935.6716f, 2767.772f, 24.4289f, 1, 0, 0, 1);
			unk_0x0608D50823C6AA6D(iLocal_55, 136.9073f);
			unk_0xDEAF24B058321A05(iLocal_55, 0, 0);
		}
		if (iLocal_315)
		{
			unk_0xC7845898207D067F(800);
			while (unk_0x5C0856D86B18EE57())
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			iLocal_315 = 0;
		}
		iLocal_317 = 0;
		iLocal_314 = 1;
	}
	if (iLocal_314 && !unk_0xCA41A00932714525(iLocal_55))
	{
		if (unk_0x45CD66F0A131E554(unk_0x0C00E753D78DEA62(), 0))
		{
			if ((((((unk_0x4E84D2C9B54F79BA(iLocal_55, unk_0x0C00E753D78DEA62(), 20f, 20f, 20f, 0, 1, 0) && unk_0x58060A1B26EA2597(unk_0x0C00E753D78DEA62()) >= 1) && !unk_0xA55B002FED5A9858(unk_0x0324EEB10F81965F(unk_0x0C00E753D78DEA62()))) && !unk_0xC5082382D5482C0C(unk_0x0324EEB10F81965F(unk_0x0C00E753D78DEA62()))) && !unk_0x8432EA469FDB418D(unk_0x0324EEB10F81965F(unk_0x0C00E753D78DEA62()))) && !unk_0x3B548F49528B5FA7(unk_0x0324EEB10F81965F(unk_0x0C00E753D78DEA62()))) && unk_0x0324EEB10F81965F(unk_0x0C00E753D78DEA62()) != joaat("rhino"))
			{
				unk_0x86DD54980FE55567(&uLocal_113);
				unk_0x4718A774D9248520(0, unk_0x17B5CC8A8615737D(), 10000, 2048, 3);
				unk_0x6349785089ED32B4(0, unk_0x17B5CC8A8615737D(), 6500);
				unk_0x3AD5401AC8DD9226(0, unk_0x0C00E753D78DEA62(), -1, 0, 1f, 1, 0);
				unk_0x007AE2AA9E15FA7B(uLocal_113);
				unk_0x00E85C3B3BD34B10(iLocal_55, uLocal_113);
				unk_0x08377FB2AE4C6899(&uLocal_113);
			}
			else if (!unk_0xF30AB065E07D2B0F(iLocal_55))
			{
				unk_0xD25D00F8613DE69F(iLocal_55, func_67());
				unk_0xE4FFBEDDCAF2776A(iLocal_55, 1);
				unk_0x346D6A5BC2F879E2(iLocal_55, 0);
			}
		}
		else if (!unk_0xF30AB065E07D2B0F(iLocal_55))
		{
			unk_0xD25D00F8613DE69F(iLocal_55, func_67());
			unk_0xE4FFBEDDCAF2776A(iLocal_55, 1);
			unk_0x346D6A5BC2F879E2(iLocal_55, 0);
		}
		unk_0xCC61640A821F277C(iLocal_55, 0);
		unk_0xC8C3338D4DBC00FE(unk_0xBE369BE1BC57A796(), 1, 0);
		uLocal_320 = func_23(Local_67, 1);
		iLocal_114 = 1;
		bLocal_116 = true;
		unk_0xF9FFB9857F3120F8("re@stag_do@");
		unk_0xF9FFB9857F3120F8("re@stag_do@idle_a");
		iLocal_305 = func_74(func_75());
		iLocal_307 = iLocal_305 + 5;
		iLocal_304 = func_98(func_75());
		if (iLocal_304 >= 30)
		{
			iLocal_306 = 0;
			iLocal_307++;
		}
		if (iLocal_307 > 24)
		{
			iLocal_307 = (iLocal_307 - 24);
		}
		if (iLocal_307 == 0)
		{
			sLocal_302 = "stagd_ptime0";
		}
		else if (iLocal_307 == 1)
		{
			sLocal_302 = "stagd_ptime1";
		}
		else if (iLocal_307 == 2)
		{
			sLocal_302 = "stagd_ptime2";
		}
		else if (iLocal_307 == 3)
		{
			sLocal_302 = "stagd_ptime3";
		}
		else if (iLocal_307 == 4)
		{
			sLocal_302 = "stagd_ptime4";
		}
		else if (iLocal_307 == 5)
		{
			sLocal_302 = "stagd_ptime5";
		}
		else if (iLocal_307 == 6)
		{
			sLocal_302 = "stagd_ptime6";
		}
		else if (iLocal_307 == 7)
		{
			sLocal_302 = "stagd_ptime7";
		}
		else if (iLocal_307 == 8)
		{
			sLocal_302 = "stagd_ptime8";
		}
		else if (iLocal_307 == 9)
		{
			sLocal_302 = "stagd_ptime9";
		}
		else if (iLocal_307 == 10)
		{
			sLocal_302 = "stagd_ptim10";
		}
		else if (iLocal_307 == 11)
		{
			sLocal_302 = "stagd_ptim11";
		}
		else if (iLocal_307 == 12)
		{
			sLocal_302 = "stagd_ptim12";
		}
		else if (iLocal_307 == 13)
		{
			sLocal_302 = "stagd_ptim13";
		}
		else if (iLocal_307 == 14)
		{
			sLocal_302 = "stagd_ptim14";
		}
		else if (iLocal_307 == 15)
		{
			sLocal_302 = "stagd_ptim15";
		}
		else if (iLocal_307 == 16)
		{
			sLocal_302 = "stagd_ptim16";
		}
		else if (iLocal_307 == 17)
		{
			sLocal_302 = "stagd_ptim17";
		}
		else if (iLocal_307 == 18)
		{
			sLocal_302 = "stagd_ptim18";
		}
		else if (iLocal_307 == 19)
		{
			sLocal_302 = "stagd_ptim19";
		}
		else if (iLocal_307 == 20)
		{
			sLocal_302 = "stagd_ptim20";
		}
		else if (iLocal_307 == 21)
		{
			sLocal_302 = "stagd_ptim21";
		}
		else if (iLocal_307 == 22)
		{
			sLocal_302 = "stagd_ptim22";
		}
		else if (iLocal_307 == 23)
		{
			sLocal_302 = "stagd_ptim23";
		}
	}
}

int func_117(int iParam0)
{
	if (unk_0x30F06AB0772AFB80())
	{
		if ((unk_0x94E3E074F38DF86C() - Global_28) > iParam0)
		{
			Global_27 = unk_0x94E3E074F38DF86C();
		}
		Global_28 = unk_0x94E3E074F38DF86C();
		if ((unk_0x94E3E074F38DF86C() - Global_27) > iParam0)
		{
			if (func_118())
			{
				Global_27 = unk_0x94E3E074F38DF86C();
				return 1;
			}
		}
	}
	return 0;
}

int func_118()
{
	if (unk_0x95DBE123BC2DB80B())
	{
		return 0;
	}
	if (unk_0x4B972043966C2EB8(0, 18) || unk_0x4B972043966C2EB8(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_119()
{
	if (!unk_0xCA41A00932714525(iLocal_55))
	{
		if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
		{
			if (!unk_0xC26429B504BA534D(unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0)))
			{
				unk_0xF0F77C99098F999B(unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0), 1, 0);
			}
		}
		iLocal_133 = unk_0xFEDFCE97371B9236(unk_0x57240623C1BC6E88(iLocal_55, 0), 30f, 0, 4);
		if (!unk_0xA929B2923D14E2F8(iLocal_133, 0))
		{
			if (!unk_0xC0FA8EEF6413F866(iLocal_133, -1, 0))
			{
				if (unk_0x4E84D2C9B54F79BA(iLocal_133, iLocal_55, 30f, 30f, 30f, 0, 1, 0))
				{
					unk_0xF0F77C99098F999B(iLocal_133, 1, 0);
					if (unk_0x45CD66F0A131E554(iLocal_133, 0))
					{
						unk_0x64A46E3DF379F29C(iLocal_133, 3000, 0, 0);
						if (!unk_0xCA41A00932714525(iLocal_55))
						{
							if (!func_65() && !iLocal_115)
							{
								func_4(&uLocal_136, "stagdau", "stagd_greet2", 4, 0, 0, 0);
							}
						}
					}
				}
				else
				{
					unk_0x921CF98C637B0043(&iLocal_133);
				}
			}
		}
	}
}

void func_120()
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 1))
	{
		iVar0 = unk_0xF566689615D97192(unk_0x17B5CC8A8615737D());
		if (unk_0x45CD66F0A131E554(iVar0, 0))
		{
			iVar1 = unk_0x17206B315923243C(iVar0, 0, 0);
			if (!unk_0xCA41A00932714525(iVar1))
			{
				if (iVar1 != unk_0x17B5CC8A8615737D())
				{
					if (unk_0xC26429B504BA534D(iVar1))
					{
						if (!unk_0x3D6623406E6D16C8(iVar1, unk_0x17B5CC8A8615737D()))
						{
							unk_0x4718A774D9248520(iVar1, unk_0x17B5CC8A8615737D(), 2000, 2048, 2);
						}
					}
				}
			}
		}
	}
}

void func_121()
{
	func_122(39, 1);
	func_122(40, 1);
	func_122(41, 1);
	func_122(42, 1);
	func_122(43, 1);
	func_122(44, 1);
	unk_0xE1324F59713746FA(joaat("u_m_y_staggrm_01"));
	unk_0xE1324F59713746FA(joaat("superd"));
	unk_0xE1324F59713746FA(joaat("prop_stag_do_rope"));
	while ((!unk_0x9F746898F7881612(joaat("u_m_y_staggrm_01")) || !unk_0x9F746898F7881612(joaat("superd"))) || !unk_0x9F746898F7881612(joaat("prop_stag_do_rope")))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0xA0E7D0E8FE126EE8("re@stag_do@");
	unk_0xA0E7D0E8FE126EE8("re@stag_do@idle_a");
	unk_0x985A2515CBAF7290("ROPE_CUT", 0, -1);
	while ((!unk_0xF4F8AE8DD0F08C1E("re@stag_do@") || !unk_0xF4F8AE8DD0F08C1E("re@stag_do@idle_a")) || !unk_0x985A2515CBAF7290("ROPE_CUT", 0, -1))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	iLocal_55 = unk_0x2AD5F4170F4ACBEB(26, joaat("u_m_y_staggrm_01"), -935.57f, 2767.616f, 24.448f, 140.5f, 1, 1);
	unk_0xA0E70AC53ABAB207(iLocal_55, "GROOM");
	unk_0x3BB70315907D9456(iLocal_55, joaat("player"));
	unk_0xCC61640A821F277C(iLocal_55, 1);
	unk_0x4DF0B516187EED5A(iLocal_55, 0);
	unk_0x2F933BB106547968(iLocal_55, 2, 0, 0, 0);
	unk_0x2F933BB106547968(iLocal_55, 0, 0, 0, 0);
	unk_0x2F933BB106547968(iLocal_55, 3, 0, 0, 0);
	unk_0x2F933BB106547968(iLocal_55, 4, 0, 0, 0);
	unk_0x2F933BB106547968(iLocal_55, 11, 1, 0, 0);
	unk_0x62096F14272BAF35(iLocal_55, joaat("empty"));
	unk_0x2937901439E611F5(iLocal_55, 3);
	unk_0x6018E338F7ABCE75(iLocal_55, 206, 1);
	unk_0x6018E338F7ABCE75(iLocal_55, 134, 1);
	iLocal_66 = unk_0x521A82CF998EDB21(joaat("prop_stag_do_rope"), unk_0x57240623C1BC6E88(iLocal_55, 1), 1, 1, 0);
	unk_0x593C85206F061E3E(iLocal_66, iLocal_55, unk_0x0FC45085FB4E85B8(iLocal_55, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
	iLocal_59 = unk_0x692A2891A2BA7352(joaat("superd"), -2009.015f, 455.3556f, 101.6528f, 274.8103f, 0, 0);
	unk_0x2B9B4DCEF80D1566(iLocal_59, 1);
	unk_0xC2BFC2AEE65D5595(iLocal_59, 0f);
	unk_0xD602D152E57C823D(iLocal_59, 3);
	unk_0x5991FAEA924B5EE0(iLocal_59, 0);
	unk_0x23B8F6AE6ED8C09D(iLocal_59, 0, 73, 0);
	unk_0xD06C0702F595828B(iLocal_59, 2, 48);
	unk_0xE8BE9EFA248A9414(iLocal_59, 11, 1, 0);
	unk_0xE8BE9EFA248A9414(iLocal_59, 12, 1, 0);
	unk_0xA56CF5F719228F25(joaat("superd"), 3);
	unk_0x2380074FC04D1644(iLocal_59, 10000);
	unk_0x9665F5FB3A8B2550(iLocal_59, 5f);
	unk_0x26C9531CF391AB1D(iLocal_59);
	Local_77 = { -352.88f, 6164.31f, 30.5f };
	Local_80 = { -355.2565f, 6164.931f, 30.2944f };
	Local_83 = { -330.5575f, 6139.852f, 34.4886f };
	fLocal_86 = 25.375f;
	Local_87 = { -343.5804f, 6156.198f, 30.489f };
	Local_90 = { -1991.126f, 457.991f, 101.1808f };
	Local_93 = { -2002.69f, 460.539f, 99.828f };
	Local_96 = { -1997.605f, 445.6651f, 105.0519f };
	Local_99 = { -2026.817f, 450.3329f, 104.8771f };
	fLocal_102 = 24.6875f;
	Local_103 = { -2205.351f, 4298.79f, 47.265f };
	Local_106 = { -2207.525f, 4301.697f, 47.1803f };
	Local_109 = { -2195.637f, 4295.407f, 51.1889f };
	fLocal_112 = 12.5625f;
	Local_67 = { Local_90 };
	Local_70 = { Local_93 };
	Local_73 = { Local_96 };
	fLocal_76 = fLocal_102;
	unk_0xD90CB3CF9A40791C(joaat("superd"), 1);
	unk_0xB82FD68B5DE68F01(Local_87 - Vector(10f, 10f, 10f), Local_87 + Vector(10f, 10f, 10f), 0, 1);
	unk_0xD1D19967E553E144(Local_87 - Vector(20f, 20f, 20f), Local_87 + Vector(20f, 20f, 20f), 0, 1, 1, 1);
	unk_0xD1D19967E553E144(unk_0x57240623C1BC6E88(iLocal_55, 0) - Vector(10f, 10f, 10f), unk_0x57240623C1BC6E88(iLocal_55, 0) + Vector(10f, 10f, 10f), 0, 1, 1, 1);
	unk_0xD1D19967E553E144(Vector(101.6406f, 455.1994f, -2007.751f) - Vector(15f, 15f, 15f), Vector(101.6406f, 455.1994f, -2007.751f) + Vector(15f, 15f, 15f), 0, 1, 1, 1);
	unk_0xD1D19967E553E144(Vector(47.4293f, 4299.008f, -2202.747f) - Vector(15f, 25f, 25f), Vector(47.4293f, 4299.008f, -2202.747f) + Vector(15f, 25f, 25f), 0, 1, 1, 1);
	unk_0x26D48449559660BA(unk_0x57240623C1BC6E88(iLocal_55, 1), 10f, 0);
	if (!unk_0xA929B2923D14E2F8(iLocal_55, 0))
	{
		unk_0x86DD54980FE55567(&uLocal_113);
		unk_0xEB1EFACA68933402(0, "re@stag_do@idle_a", "idle_a_ped", 8f, -8f, -1, 9, 0, 0, 0, 0);
		unk_0x007AE2AA9E15FA7B(uLocal_113);
		unk_0x00E85C3B3BD34B10(iLocal_55, uLocal_113);
		unk_0x08377FB2AE4C6899(&uLocal_113);
		unk_0x650BB0E111420EAF(iLocal_55, 1);
	}
	if (func_11() == 0)
	{
		func_90(&uLocal_136, 0, unk_0x17B5CC8A8615737D(), "MICHAEL", 0, 1);
	}
	if (func_11() == 1)
	{
		func_90(&uLocal_136, 0, unk_0x17B5CC8A8615737D(), "FRANKLIN", 0, 1);
	}
	if (func_11() == 2)
	{
		func_90(&uLocal_136, 0, unk_0x17B5CC8A8615737D(), "TREVOR", 0, 1);
	}
	func_90(&uLocal_136, 3, iLocal_55, "GROOM", 0, 1);
	iLocal_50 = 1;
}

void func_122(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_129(iParam0, 2, 1))
		{
			func_128(iParam0, 2, 1);
		}
	}
	else if (func_129(iParam0, 2, 1))
	{
		func_123(iParam0, 2, 1);
	}
}

void func_123(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0x21E7933CCC7B3724(&(Global_91543.f_1308[iParam0]), iParam1);
	}
	else if (unk_0x63C468D583002D23())
	{
		if (func_34() == 0)
		{
			uVar0 = func_126(func_127(iParam0), -1, 0);
			unk_0x21E7933CCC7B3724(&uVar0, iParam1);
			func_124(func_127(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x21E7933CCC7B3724(&(Global_101700.f_668[iParam0]), iParam1);
	}
}

void func_124(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2503826[iParam0 /*3*/][func_125(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x731753D8494ABECD(iVar0, uParam1, iParam3);
	}
}

int func_125(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_37();
		if (iVar1 > -1)
		{
			Global_2503539 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2503539 = 1;
		}
	}
	return iVar0;
}

int func_126(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2503826[iParam0 /*3*/][func_125(iParam1)];
	if (unk_0x7FE4F330D3D74809(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_127(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 822;
			break;
		
		case 1:
			return 823;
			break;
		
		case 2:
			return 824;
			break;
		
		case 3:
			return 825;
			break;
		
		case 4:
			return 826;
			break;
		
		case 5:
			return 827;
			break;
		
		case 6:
			return 828;
			break;
		
		case 7:
			return 829;
			break;
		
		case 8:
			return 830;
			break;
		
		case 9:
			return 831;
			break;
		
		case 10:
			return 832;
			break;
		
		case 11:
			return 833;
			break;
		
		case 12:
			return 834;
			break;
		
		case 13:
			return 835;
			break;
		
		case 14:
			return 836;
			break;
		
		case 15:
			return 838;
			break;
		
		case 16:
			return 839;
			break;
		
		case 17:
			return 840;
			break;
		
		case 18:
			return 841;
			break;
		
		case 19:
			return 842;
			break;
		
		case 20:
			return 843;
			break;
		
		case 21:
			return 844;
			break;
		
		case 22:
			return 845;
			break;
		
		case 23:
			return 846;
			break;
		
		case 24:
			return 847;
			break;
		
		case 25:
			return 848;
			break;
		
		case 26:
			return 849;
			break;
		
		case 27:
			return 850;
			break;
		
		case 28:
			return 851;
			break;
		
		case 29:
			return 852;
			break;
		
		case 30:
			return 853;
			break;
		
		case 31:
			return 854;
			break;
		
		case 32:
			return 855;
			break;
		
		case 33:
			return 856;
			break;
		
		case 34:
			return 857;
			break;
		
		case 35:
			return 858;
			break;
		
		case 36:
			return 859;
			break;
		
		case 37:
			return 860;
			break;
		
		case 38:
			return 861;
			break;
		
		case 39:
			return 862;
			break;
		
		case 40:
			return 866;
			break;
		
		case 41:
			return 867;
			break;
		
		case 42:
			return 868;
			break;
		
		case 43:
			return 869;
			break;
		
		case 44:
			return 5847;
			break;
		
		case 45:
			return 3780;
			break;
		
		default:
			break;
	}
	return 6022;
}

void func_128(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0xEB79FECD9022AAF0(&(Global_91543.f_1308[iParam0]), iParam1);
	}
	else if (unk_0x63C468D583002D23())
	{
		if (func_34() == 0)
		{
			uVar0 = func_126(func_127(iParam0), -1, 0);
			unk_0xEB79FECD9022AAF0(&uVar0, iParam1);
			func_124(func_127(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0xEB79FECD9022AAF0(&(Global_101700.f_668[iParam0]), iParam1);
	}
}

int func_129(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0x48B8265059381CD0(Global_91543.f_1308[iParam0], iParam1);
	}
	else if (unk_0x63C468D583002D23())
	{
		if (func_34() == 0)
		{
			return unk_0x48B8265059381CD0(func_126(func_127(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0x48B8265059381CD0(Global_101700.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_130()
{
	if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()) && !unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1), Local_45) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0xACA666C39EA49E82(unk_0x17B5CC8A8615737D())) > 1369f && !func_141())
		{
			return 0;
		}
	}
	if (func_137())
	{
		return 1;
	}
	if (func_131(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_131(float fParam0, bool bParam1)
{
	struct<27> Var0;
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	int iVar36;
	int iVar37;
	bool bVar38;
	
	iVar33 = -1;
	fVar34 = fParam0;
	if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
	{
		if (func_13(func_11()))
		{
			iVar36 = func_44();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0x48B8265059381CD0(Global_101700.f_17533[iVar32 /*6*/], 2) && !unk_0x48B8265059381CD0(Global_101700.f_17533[iVar32 /*6*/], 3))
				{
					func_132(iVar32, &Var0);
					fVar35 = unk_0x3DC4639D5F23DEA2(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 0), Var0.f_6, 1);
					if (fVar35 < fVar34)
					{
						bVar38 = true;
						if (bParam1)
						{
							if (iVar36 != Var0.f_26)
							{
								bVar38 = false;
							}
						}
						if (bVar38)
						{
							iVar33 = iVar32;
							fVar34 = fVar35;
						}
					}
				}
				iVar37++;
			}
		}
	}
	return iVar33;
}

void func_132(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_133(uParam1, "Abigail1", func_135(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_134(iParam0), 1, 0);
			break;
		
		case 1:
			func_133(uParam1, "Abigail2", func_135(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_134(iParam0), 1, 0);
			break;
		
		case 2:
			func_133(uParam1, "Barry1", func_135(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_134(iParam0), 1, 0);
			break;
		
		case 3:
			func_133(uParam1, "Barry2", func_135(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_134(iParam0), 1, 1);
			break;
		
		case 4:
			func_133(uParam1, "Barry3", func_135(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_134(iParam0), 0, 0);
			break;
		
		case 5:
			func_133(uParam1, "Barry3A", func_135(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_134(iParam0), 0, 1);
			break;
		
		case 6:
			func_133(uParam1, "Barry3C", func_135(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_134(iParam0), 0, 1);
			break;
		
		case 7:
			func_133(uParam1, "Barry4", func_135(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_134(iParam0), 0, 0);
			break;
		
		case 8:
			func_133(uParam1, "Dreyfuss1", func_135(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_134(iParam0), 0, 0);
			break;
		
		case 9:
			func_133(uParam1, "Epsilon1", func_135(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_134(iParam0), 0, 0);
			break;
		
		case 10:
			func_133(uParam1, "Epsilon2", func_135(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_134(iParam0), 1, 0);
			break;
		
		case 11:
			func_133(uParam1, "Epsilon3", func_135(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_134(iParam0), 0, 0);
			break;
		
		case 12:
			func_133(uParam1, "Epsilon4", func_135(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_134(iParam0), 0, 0);
			break;
		
		case 13:
			func_133(uParam1, "Epsilon5", func_135(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_134(iParam0), 1, 0);
			break;
		
		case 14:
			func_133(uParam1, "Epsilon6", func_135(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_134(iParam0), 0, 1);
			break;
		
		case 15:
			func_133(uParam1, "Epsilon7", func_135(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_134(iParam0), 0, 0);
			break;
		
		case 16:
			func_133(uParam1, "Epsilon8", func_135(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_134(iParam0), 1, 0);
			break;
		
		case 17:
			func_133(uParam1, "Extreme1", func_135(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_134(iParam0), 0, 1);
			break;
		
		case 18:
			func_133(uParam1, "Extreme2", func_135(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_134(iParam0), 0, 1);
			break;
		
		case 19:
			func_133(uParam1, "Extreme3", func_135(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_134(iParam0), 0, 1);
			break;
		
		case 20:
			func_133(uParam1, "Extreme4", func_135(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_134(iParam0), 0, 0);
			break;
		
		case 21:
			func_133(uParam1, "Fanatic1", func_135(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_134(iParam0), 1, 0);
			break;
		
		case 22:
			func_133(uParam1, "Fanatic2", func_135(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_134(iParam0), 1, 0);
			break;
		
		case 23:
			func_133(uParam1, "Fanatic3", func_135(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_134(iParam0), 0, 1);
			break;
		
		case 24:
			func_133(uParam1, "Hao1", func_135(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_134(iParam0), 0, 1);
			break;
		
		case 25:
			func_133(uParam1, "Hunting1", func_135(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_134(iParam0), 0, 1);
			break;
		
		case 26:
			func_133(uParam1, "Hunting2", func_135(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_134(iParam0), 0, 1);
			break;
		
		case 27:
			func_133(uParam1, "Josh1", func_135(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_134(iParam0), 1, 0);
			break;
		
		case 28:
			func_133(uParam1, "Josh2", func_135(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_134(iParam0), 1, 1);
			break;
		
		case 29:
			func_133(uParam1, "Josh3", func_135(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_134(iParam0), 1, 1);
			break;
		
		case 30:
			func_133(uParam1, "Josh4", func_135(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_134(iParam0), 1, 0);
			break;
		
		case 31:
			func_133(uParam1, "Maude1", func_135(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_134(iParam0), 0, 1);
			break;
		
		case 32:
			func_133(uParam1, "Minute1", func_135(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_134(iParam0), 0, 1);
			break;
		
		case 33:
			func_133(uParam1, "Minute2", func_135(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_134(iParam0), 0, 1);
			break;
		
		case 34:
			func_133(uParam1, "Minute3", func_135(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_134(iParam0), 0, 1);
			break;
		
		case 35:
			func_133(uParam1, "MrsPhilips1", func_135(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_134(iParam0), 0, 0);
			break;
		
		case 36:
			func_133(uParam1, "MrsPhilips2", func_135(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_134(iParam0), 0, 0);
			break;
		
		case 37:
			func_133(uParam1, "Nigel1", func_135(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_134(iParam0), 1, 0);
			break;
		
		case 38:
			func_133(uParam1, "Nigel1A", func_135(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_134(iParam0), 1, 1);
			break;
		
		case 39:
			func_133(uParam1, "Nigel1B", func_135(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_134(iParam0), 1, 1);
			break;
		
		case 40:
			func_133(uParam1, "Nigel1C", func_135(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_134(iParam0), 1, 1);
			break;
		
		case 41:
			func_133(uParam1, "Nigel1D", func_135(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_134(iParam0), 1, 1);
			break;
		
		case 42:
			func_133(uParam1, "Nigel2", func_135(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_134(iParam0), 1, 1);
			break;
		
		case 43:
			func_133(uParam1, "Nigel3", func_135(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_134(iParam0), 1, 1);
			break;
		
		case 44:
			func_133(uParam1, "Omega1", func_135(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_134(iParam0), 0, 0);
			break;
		
		case 45:
			func_133(uParam1, "Omega2", func_135(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_134(iParam0), 0, 0);
			break;
		
		case 46:
			func_133(uParam1, "Paparazzo1", func_135(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_134(iParam0), 0, 1);
			break;
		
		case 47:
			func_133(uParam1, "Paparazzo2", func_135(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_134(iParam0), 0, 1);
			break;
		
		case 48:
			func_133(uParam1, "Paparazzo3", func_135(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_134(iParam0), 0, 0);
			break;
		
		case 49:
			func_133(uParam1, "Paparazzo3A", func_135(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_134(iParam0), 0, 1);
			break;
		
		case 50:
			func_133(uParam1, "Paparazzo3B", func_135(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_134(iParam0), 0, 1);
			break;
		
		case 51:
			func_133(uParam1, "Paparazzo4", func_135(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_134(iParam0), 0, 0);
			break;
		
		case 52:
			func_133(uParam1, "Rampage1", func_135(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_134(iParam0), 0, 0);
			break;
		
		case 54:
			func_133(uParam1, "Rampage3", func_135(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_134(iParam0), 1, 0);
			break;
		
		case 55:
			func_133(uParam1, "Rampage4", func_135(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_134(iParam0), 1, 0);
			break;
		
		case 56:
			func_133(uParam1, "Rampage5", func_135(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_134(iParam0), 0, 0);
			break;
		
		case 53:
			func_133(uParam1, "Rampage2", func_135(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_134(iParam0), 1, 0);
			break;
		
		case 57:
			func_133(uParam1, "TheLastOne", func_135(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_134(iParam0), 0, 1);
			break;
		
		case 58:
			func_133(uParam1, "Tonya1", func_135(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_134(iParam0), 0, 1);
			break;
		
		case 59:
			func_133(uParam1, "Tonya2", func_135(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_134(iParam0), 0, 1);
			break;
		
		case 60:
			func_133(uParam1, "Tonya3", func_135(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_134(iParam0), 0, 1);
			break;
		
		case 61:
			func_133(uParam1, "Tonya4", func_135(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_134(iParam0), 0, 1);
			break;
		
		case 62:
			func_133(uParam1, "Tonya5", func_135(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_134(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_133(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
{
	uParam0->f_4 = iParam5;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam4;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = { Param7 };
	uParam0->f_9 = iParam10;
	StringCopy(&(uParam0->f_10), sParam11, 16);
	uParam0->f_14 = iParam12;
	uParam0->f_15 = iParam13;
	StringCopy(&(uParam0->f_16), sParam14, 24);
	uParam0->f_22 = iParam15;
	uParam0->f_23 = iParam16;
	uParam0->f_24 = iParam17;
	uParam0->f_25 = iParam18;
	uParam0->f_26 = iParam19;
	uParam0->f_27 = iParam20;
	uParam0->f_28 = iParam21;
	uParam0->f_29 = uParam22;
	uParam0->f_30 = iParam23;
	uParam0->f_31 = iParam24;
}

int func_134(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			return 0;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 0;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 0;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 1;
			break;
		
		case 23:
			return 1;
			break;
		
		case 24:
			return 1;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 1;
			break;
		
		case 31:
			return 0;
			break;
		
		case 32:
			return 1;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 37:
			return 0;
			break;
		
		case 38:
			return 1;
			break;
		
		case 39:
			return 1;
			break;
		
		case 40:
			return 1;
			break;
		
		case 41:
			return 1;
			break;
		
		case 42:
			return 1;
			break;
		
		case 43:
			return 1;
			break;
		
		case 44:
			return 0;
			break;
		
		case 45:
			return 0;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 1;
			break;
		
		case 48:
			return 0;
			break;
		
		case 49:
			return 1;
			break;
		
		case 50:
			return 1;
			break;
		
		case 51:
			return 1;
			break;
		
		case 52:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 1;
			break;
		
		case 53:
			return 1;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 1;
			break;
		
		case 59:
			return 1;
			break;
		
		case 60:
			return 1;
			break;
		
		case 61:
			return 1;
			break;
		
		case 62:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

struct<2> func_135(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_136(iParam0) };
	if (unk_0x9C88EB7B70229335(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_136(int iParam0)
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

int func_137()
{
	if (func_140() && !func_141())
	{
		return 1;
	}
	if (func_139() && func_138())
	{
		return 1;
	}
	return 0;
}

bool func_138()
{
	return Global_101418 > 0;
}

int func_139()
{
	if (Global_88746 != -1)
	{
		return 1;
	}
	return 0;
}

int func_140()
{
	if (Global_88746 != -1)
	{
		return unk_0x48B8265059381CD0(Global_82612[Global_88746 /*34*/].f_15, 20);
	}
	return 0;
}

int func_141()
{
	if (unk_0xEF4E5E47AF0D4480())
	{
		if (unk_0x800431CFB358AFCF() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_142()
{
	if (!func_113(5))
	{
		return 1;
	}
	if (func_137())
	{
		return 1;
	}
	if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0xACA666C39EA49E82(unk_0x17B5CC8A8615737D())) > 1369f && !func_141())
		{
			return 0;
		}
	}
	if (func_131(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_143()
{
	if ((Global_101689 == func_48() && unk_0xD3718ACF1D7AD57E()) && Global_101690)
	{
		return 1;
	}
	return 0;
}

void func_144(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_48();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_146(iParam0);
	unk_0xB3EFCE1243C98BFD(0);
	unk_0x2BC65DD826D4278E(1);
	Global_101686 = 0;
	func_145();
}

void func_145()
{
	if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
	{
		if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
		{
			unk_0xD90CB3CF9A40791C(unk_0x0324EEB10F81965F(unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0)), 1);
		}
		unk_0x6018E338F7ABCE75(unk_0x17B5CC8A8615737D(), 32, 0);
	}
}

void func_146(int iParam0)
{
	Global_101689 = iParam0;
}

int func_147(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_138924)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_48();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_175())
		{
			return 0;
		}
	}
	Local_45 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()) && !unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
		{
			Var1 = { unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1) };
			if (unk_0xA8CEACB4F35AE058(unk_0xACA666C39EA49E82(unk_0x17B5CC8A8615737D())) > 1369f && !func_141())
			{
				return 0;
			}
		}
		if (!Global_101700.f_8044)
		{
			return 0;
		}
		if (func_29(0))
		{
			return 0;
		}
		if (func_137())
		{
			return 0;
		}
		if (func_174())
		{
			return 0;
		}
		if (Global_101689 != -1)
		{
			return 0;
		}
		if (func_13(func_11()))
		{
			if (func_131(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()) && !bParam6)
		{
			if ((Var1.f_2 - Local_45.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_173(iParam3))
		{
			return 0;
		}
		if (func_13(func_11()))
		{
			if (func_172(func_11()) == 4 || func_172(func_11()) == 5)
			{
				return 0;
			}
		}
		if (func_13(func_11()))
		{
			if (!func_171(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_170(Global_101700.f_23954.f_43[iParam3]))
		{
			return 0;
		}
		if ((unk_0x94E3E074F38DF86C() - Global_101691) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_169())
		{
			return 0;
		}
		if (unk_0xE6235D8850CC396F())
		{
			return 0;
		}
		if (unk_0xD3718ACF1D7AD57E())
		{
			return 0;
		}
		if (!func_160(4))
		{
			return 0;
		}
		if (!func_113(5))
		{
			return 0;
		}
		if (func_159(iParam3, iParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_3 && iParam3 != 10)
		{
			return 0;
		}
		if (unk_0x623BDE1B17A9D9E3(unk_0xF34287B610CF02CA(unk_0x17B5CC8A8615737D())))
		{
			if ((unk_0xF34287B610CF02CA(unk_0x17B5CC8A8615737D()) == unk_0x1A4C1C534F86E06A(377.153f, -717.567f, 10.0536f) || unk_0xF34287B610CF02CA(unk_0x17B5CC8A8615737D()) == unk_0x1A4C1C534F86E06A(320.9934f, 265.2515f, 82.1221f)) || unk_0xF34287B610CF02CA(unk_0x17B5CC8A8615737D()) == unk_0x1A4C1C534F86E06A(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_159(0, 0))
		{
			return 0;
		}
		if (Global_25336)
		{
			return 0;
		}
		if (func_173(30) && !func_159(30, 0))
		{
			if (iParam3 != 30)
			{
				if (unk_0xB7A628320EFF8E47(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_13(func_11()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_101700.f_2095.f_539.f_1528[iVar4 /*3*/] };
				iVar8 = Global_101700.f_2095.f_539.f_1524[iVar4];
				if (func_158(iVar8))
				{
					if (func_149(iVar4))
					{
						if (!func_148(Var5, 0f, 0f, 0f, 0))
						{
							if (unk_0xB7A628320EFF8E47(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 0), Var5) < (210f * 210f))
							{
								if (func_11() != iVar4)
								{
									return 0;
								}
							}
						}
					}
				}
				iVar4++;
			}
		}
	}
	return 1;
}

bool func_148(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_149(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_101700.f_2095.f_539.f_1524[iParam0];
	return func_150(iVar0);
}

int func_150(int iParam0)
{
	return func_151(iParam0, 1);
}

int func_151(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_158(iParam0))
	{
		return 0;
	}
	func_152(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_152(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_153(func_75(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_153(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_157(iParam0, iParam1))
	{
		iVar0 = func_82(iParam1);
		iVar1 = func_80(iParam0);
		iVar2 = (func_80(iParam0) - func_80(iParam1));
		iVar3 = (func_82(iParam0) - func_82(iParam1));
		iVar4 = (func_156(iParam0) - func_156(iParam1));
		iVar5 = (func_74(iParam0) - func_74(iParam1));
		iVar6 = (func_98(iParam0) - func_98(iParam1));
		iVar7 = (func_155(iParam0) - func_155(iParam1));
	}
	else
	{
		iVar0 = func_82(iParam0);
		iVar1 = func_80(iParam1);
		iVar2 = (func_80(iParam1) - func_80(iParam0));
		iVar3 = (func_82(iParam1) - func_82(iParam0));
		iVar4 = (func_156(iParam1) - func_156(iParam0));
		iVar5 = (func_74(iParam1) - func_74(iParam0));
		iVar6 = (func_98(iParam1) - func_98(iParam0));
		iVar7 = (func_155(iParam1) - func_155(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_79(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = unk_0xF2DB717A73826179(func_154(unk_0xBBDA792448DB5A89(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

float func_154(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(unk_0xF2DB717A73826179(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

int func_155(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_156(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_157(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_158(iParam1) || !func_158(iParam0))
	{
		return 1;
	}
	iVar0 = func_80(iParam0);
	iVar1 = func_80(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_82(iParam0);
	iVar1 = func_82(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_156(iParam0);
	iVar1 = func_156(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_74(iParam0);
	iVar1 = func_74(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_98(iParam0);
	iVar1 = func_98(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_155(iParam0);
	iVar1 = func_155(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_158(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_155(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_98(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_74(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_80(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_82(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_156(iParam0);
	if (iVar5 < 1 || iVar5 > func_79(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_159(int iParam0, int iParam1)
{
	if (unk_0x48B8265059381CD0(Global_101700.f_23954.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_160(int iParam0)
{
	int iVar0;
	
	if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
	{
		if (unk_0x23E9113C762466ED(unk_0x17B5CC8A8615737D()))
		{
			if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
			{
				iVar0 = func_11();
				if (!func_13(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x3D6EEB2BAADEC759(unk_0xBE369BE1BC57A796()) || unk_0x14E01C4EC4170496(unk_0x17B5CC8A8615737D())) || unk_0x9172DCBCA2E183EC(unk_0x17B5CC8A8615737D())) || unk_0x7F4AE93855973529(unk_0x17B5CC8A8615737D())) || unk_0xA9969D6750AB48B7(unk_0x17B5CC8A8615737D())) || unk_0x5078D2C096A3D8E4(unk_0xBE369BE1BC57A796(), 1)) || unk_0xA4FEB0448027296A(unk_0xBE369BE1BC57A796())) || unk_0x018477A7947BC4B4(unk_0x17B5CC8A8615737D(), 0)) || func_168()) || Global_100747) || Global_25192) || func_167()) || func_18(8, -1)) || func_166()) || func_165()) || func_164()) || func_163()) || Global_101700.f_6647.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0x5078D2C096A3D8E4(unk_0xBE369BE1BC57A796(), 1) || func_168()) || Global_25192) || func_167()) || func_18(8, -1)) || func_164()) || func_166()) || func_165()) || func_163()) || Global_101700.f_6647.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x3D6EEB2BAADEC759(unk_0xBE369BE1BC57A796()) || unk_0x14E01C4EC4170496(unk_0x17B5CC8A8615737D())) || unk_0x9172DCBCA2E183EC(unk_0x17B5CC8A8615737D())) || unk_0x7F4AE93855973529(unk_0x17B5CC8A8615737D())) || unk_0xA9969D6750AB48B7(unk_0x17B5CC8A8615737D())) || unk_0x5078D2C096A3D8E4(unk_0xBE369BE1BC57A796(), 1)) || unk_0xA4FEB0448027296A(unk_0xBE369BE1BC57A796())) || unk_0x018477A7947BC4B4(unk_0x17B5CC8A8615737D(), 0)) || func_168()) || Global_100747) || Global_25192) || func_167()) || func_18(8, -1)) || func_164()) || func_166()) || func_165()) || func_163()) || Global_101700.f_6647.f_919[iVar0] == 5) || Global_36328 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x7F4AE93855973529(unk_0x17B5CC8A8615737D()) || unk_0xA9969D6750AB48B7(unk_0x17B5CC8A8615737D())) || unk_0x5078D2C096A3D8E4(unk_0xBE369BE1BC57A796(), 1)) || unk_0x018477A7947BC4B4(unk_0x17B5CC8A8615737D(), 0)) || func_168()) || Global_100747) || Global_25192) || func_167()) || func_18(8, -1)) || func_166()) || func_165()) || func_163()) || Global_101700.f_6647.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_168() || unk_0xA54996763FD89E65(unk_0xBE369BE1BC57A796()) > 0) || func_18(8, -1)) || func_163()) || func_162()) || Global_101700.f_6647.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_18(8, -1) || func_166()) || func_165()) || func_162()) || func_161())
						{
							return 0;
						}
						if ((unk_0xE9E6B5364105A000() && unk_0x3108C06B8E90438D() != 3) && unk_0x4DA93F059B47A9FA() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0x23E9113C762466ED(unk_0x17B5CC8A8615737D()))
						{
							if ((((((((((((((unk_0x018477A7947BC4B4(unk_0x17B5CC8A8615737D(), 0) || unk_0xA54996763FD89E65(unk_0xBE369BE1BC57A796()) > 0) || unk_0x14E01C4EC4170496(unk_0x17B5CC8A8615737D())) || unk_0x7F4AE93855973529(unk_0x17B5CC8A8615737D())) || unk_0xA9969D6750AB48B7(unk_0x17B5CC8A8615737D())) || unk_0x5078D2C096A3D8E4(unk_0xBE369BE1BC57A796(), 1)) || unk_0xA4FEB0448027296A(unk_0xBE369BE1BC57A796())) || func_168()) || Global_25192) || func_167()) || func_18(8, -1)) || func_165()) || func_164()) || func_163()) || Global_101700.f_6647.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x018477A7947BC4B4(unk_0x17B5CC8A8615737D(), 0) || !unk_0x94A5DEE82C898FDF(unk_0xBE369BE1BC57A796())) || !unk_0x3D6EEB2BAADEC759(unk_0xBE369BE1BC57A796())) || !unk_0x30F06AB0772AFB80()) || unk_0x14E01C4EC4170496(unk_0x17B5CC8A8615737D())) || unk_0x7F4AE93855973529(unk_0x17B5CC8A8615737D())) || unk_0xA9969D6750AB48B7(unk_0x17B5CC8A8615737D())) || unk_0x5078D2C096A3D8E4(unk_0xBE369BE1BC57A796(), 1)) || func_168()) || func_165()) || Global_100747) || Global_25192) || func_167()) || Global_36912) || func_18(8, -1)) || func_164()) || func_162()) || func_163()) || Global_101700.f_6647.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x018477A7947BC4B4(unk_0x17B5CC8A8615737D(), 0) || !unk_0x94A5DEE82C898FDF(unk_0xBE369BE1BC57A796())) || !unk_0x3D6EEB2BAADEC759(unk_0xBE369BE1BC57A796())) || !unk_0x30F06AB0772AFB80()) || unk_0x0DD3F4C17D207474(unk_0xBE369BE1BC57A796(), 0)) || unk_0x14E01C4EC4170496(unk_0x17B5CC8A8615737D())) || unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 1)) || unk_0x7F4AE93855973529(unk_0x17B5CC8A8615737D())) || unk_0xA9969D6750AB48B7(unk_0x17B5CC8A8615737D())) || unk_0x5FD7D852A3EAF133(unk_0x17B5CC8A8615737D())) || unk_0x5078D2C096A3D8E4(unk_0xBE369BE1BC57A796(), 1)) || unk_0xA4FEB0448027296A(unk_0xBE369BE1BC57A796())) || func_168()) || Global_100747) || Global_25192) || func_167()) || func_18(8, -1)) || func_164()) || func_162()) || func_166()) || func_165()) || func_163())
						{
							return 0;
						}
						break;
				}
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	else
	{
		return 0;
	}
	return 1;
}

var func_161()
{
	return Global_91530.f_1;
}

int func_162()
{
	if (Global_88746 != -1)
	{
		return unk_0x48B8265059381CD0(Global_82612[Global_88746 /*34*/].f_15, 13);
	}
	return 0;
}

int func_163()
{
	if (unk_0x82F1A060D8F4583B(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_164()
{
	if (Global_69962)
	{
		return 1;
	}
	else if (Global_55816 && !Global_55822)
	{
		return 1;
	}
	return 0;
}

bool func_165()
{
	return Global_91543.f_304 > 0;
}

bool func_166()
{
	return Global_91543.f_303 > 0;
}

var func_167()
{
	return Global_1315233;
}

int func_168()
{
	if (!unk_0x63C468D583002D23())
	{
		return Global_89302.f_44 == 1;
	}
	return 0;
}

int func_169()
{
	func_10();
	if (Global_3118[Global_14443 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_170(int iParam0)
{
	return func_157(func_75(), iParam0);
}

int func_171(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_11();
	if (iParam2 != 145 && ((iParam2 == 0 || iParam2 == 1) || iParam2 == 2))
	{
		iVar1 = iParam2;
	}
	switch (iParam0)
	{
		case 18:
			if (iVar1 == 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 19:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 20:
			if (iVar1 != 1)
			{
				iVar0 = 1;
			}
			break;
		
		case 28:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 13:
			if (iVar1 == 0)
			{
				if (iParam1 == 2)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 1;
				}
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 22:
			if (iParam1 == 2 || iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 30:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_172(int iParam0)
{
	if (!func_13(iParam0))
	{
		return 7;
	}
	return Global_101700.f_6647.f_919[iParam0];
}

bool func_173(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_175())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = unk_0x48B8265059381CD0(Global_101700.f_23954, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0x48B8265059381CD0(Global_101700.f_23954.f_1, iVar0);
	}
	return bVar1;
}

int func_174()
{
	int iVar0;
	
	if (Global_25340)
	{
		if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
		{
			iVar0 = unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0);
			if (unk_0x45CD66F0A131E554(iVar0, 0))
			{
				if (!unk_0xCA41A00932714525(unk_0x17206B315923243C(iVar0, 0, 0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_175()
{
	var uVar0;
	
	if (unk_0x98ECB3AD32B89920())
	{
		if (unk_0xA50BC4F5AE68D0BA())
		{
			if (unk_0x017971300978783B())
			{
				unk_0x7FE4F330D3D74809(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0xEB79FECD9022AAF0(&uVar0, 2);
				unk_0xEB79FECD9022AAF0(&uVar0, 4);
				unk_0xEB79FECD9022AAF0(&uVar0, 6);
				unk_0xEB79FECD9022AAF0(&Global_25, 2);
				unk_0xEB79FECD9022AAF0(&Global_25, 4);
				unk_0xEB79FECD9022AAF0(&Global_25, 6);
				unk_0x731753D8494ABECD(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0x8B57B9443E19F940())
				{
					iVar0 = unk_0xBE675F7A607B46B0(866);
					unk_0xEB79FECD9022AAF0(&iVar0, 0);
					unk_0x0D1285E5ED89254D(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_139179 == 2)
	{
		return 1;
	}
	else if (Global_139179 == 3)
	{
		return 0;
	}
	if (unk_0x8B57B9443E19F940())
	{
		if (unk_0x48B8265059381CD0(unk_0xBE675F7A607B46B0(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_176(int iParam0, int iParam1)
{
	if (Global_101700.f_9153[iParam0 /*12*/].f_5 == 1)
	{
		if (iParam1 == 1)
		{
		}
		return 1;
	}
	return 0;
}

void func_177()
{
	if (iLocal_51)
	{
		func_212(0);
		unk_0xB82FD68B5DE68F01(Local_87 - Vector(10f, 10f, 10f), Local_87 + Vector(10f, 10f, 10f), 1, 1);
		unk_0xCC76050C3A61CF48();
		func_21();
		unk_0x0DACC47E5EC16CF6(unk_0xBE369BE1BC57A796());
		if (!unk_0xA929B2923D14E2F8(iLocal_65, 0))
		{
			if (!unk_0x2315BB1606BC3DC3(unk_0x17B5CC8A8615737D(), iLocal_65, 0) && !unk_0x4E84D2C9B54F79BA(unk_0x17B5CC8A8615737D(), iLocal_65, 50f, 50f, 50f, 0, 1, 0))
			{
				func_189(iLocal_65, 0, 145);
			}
		}
		if (unk_0x1C34CE8087E3897C(unk_0x17B5CC8A8615737D(), Local_87, 100f, 100f, 100f, 0, 1, 0))
		{
			if (!unk_0xCA41A00932714525(iLocal_55) && !unk_0xCA41A00932714525(iLocal_57))
			{
				unk_0x86DD54980FE55567(&uLocal_113);
				unk_0x084522380FECC554(0, -330.36f, 6154.03f, 31.8f, 1f, -1, 1048576000, 0, 1193033728);
				unk_0xCD9701056CF2C3B8(0, iLocal_57, 16, 0f, 0f, 0f, 0f, 0f);
				unk_0x007AE2AA9E15FA7B(uLocal_113);
				unk_0x00E85C3B3BD34B10(iLocal_55, uLocal_113);
				unk_0x08377FB2AE4C6899(&uLocal_113);
				unk_0x86DD54980FE55567(&uLocal_113);
				unk_0x084522380FECC554(0, -330.36f, 6155.03f, 31.8f, 1f, -1, 1048576000, 0, 1193033728);
				unk_0xCD9701056CF2C3B8(0, iLocal_55, 16, 0f, 0f, 0f, 0f, 0f);
				unk_0x007AE2AA9E15FA7B(uLocal_113);
				unk_0x00E85C3B3BD34B10(iLocal_57, uLocal_113);
				unk_0x08377FB2AE4C6899(&uLocal_113);
			}
		}
		unk_0x921CF98C637B0043(&iLocal_133);
		unk_0x921CF98C637B0043(&iLocal_59);
		if (!unk_0xCEB2A4290BD633BE(unk_0xBE369BE1BC57A796()))
		{
			unk_0xC8C3338D4DBC00FE(unk_0xBE369BE1BC57A796(), 1, 0);
		}
		if (!unk_0xCA41A00932714525(iLocal_55))
		{
			unk_0x6018E338F7ABCE75(iLocal_55, 317, 1);
			if (!unk_0xDDBA7A42B9B819EE(iLocal_55))
			{
				unk_0x98F0FA127445E343(iLocal_55, 0);
			}
			unk_0xFB2D342CDD441DD9(iLocal_55);
			unk_0xCC61640A821F277C(iLocal_55, 0);
		}
		else if (unk_0x23E9113C762466ED(iLocal_66))
		{
			unk_0xB2E72B5CFE1EC372(iLocal_66, 1, 1);
		}
		unk_0x6500ADB01E821BC0(&iLocal_55);
		if (!unk_0xCA41A00932714525(iLocal_57))
		{
			unk_0x6018E338F7ABCE75(iLocal_57, 317, 1);
			unk_0xCC61640A821F277C(iLocal_57, 0);
		}
		unk_0x6500ADB01E821BC0(&iLocal_57);
		if (!unk_0xCA41A00932714525(iLocal_56))
		{
			unk_0xCC61640A821F277C(iLocal_56, 0);
		}
		if (!unk_0xCA41A00932714525(iLocal_58))
		{
			unk_0xCC61640A821F277C(iLocal_58, 0);
		}
		unk_0x6500ADB01E821BC0(&iLocal_56);
	}
	func_178(-1);
	unk_0x921053BAF754303D();
}

void func_178(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_48();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_143())
	{
		func_182(iParam0);
		unk_0x2A8465C4D16098B7(0, 0);
		Global_101691 = unk_0x94E3E074F38DF86C();
		func_181(30000);
		StringCopy(&cVar0, func_180(Global_101689, 1), 64);
		if (func_47(Global_101689) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_101688, 64);
		}
		unk_0x8B93E6E9B44E0A75(&cVar0, Global_101686, (unk_0x94E3E074F38DF86C() - Global_101687), 0);
	}
	else if (unk_0x48B8265059381CD0(Global_101696, 0) && Global_101700.f_23954.f_2 < 3)
	{
		unk_0x21E7933CCC7B3724(&Global_101696, 0);
	}
	func_179(&Global_25249);
	Global_101690 = 0;
	func_146(-1);
}

void func_179(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_35743)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_35742 = 0;
	Global_35744 = 0;
	Global_35781 = 15;
	Global_55819 = 0;
	Global_55820 = 0;
}

char* func_180(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return "RE_ACCIDENT";
			break;
		
		case 1:
			return "RE_ATMROBBERY";
			break;
		
		case 2:
			return "RE_BUSTOUR";
			break;
		
		case 3:
			return "RE_DOMESTIC";
			break;
		
		case 4:
			return "RE_GETAWAYDRIVER";
			break;
		
		case 5:
			return "RE_SHOPROBBERY";
			break;
		
		case 6:
			return "RE_SNATCHED";
			break;
		
		case 7:
			return "RE_LURED";
			break;
		
		case 8:
			return "RE_BIKETHIEFSTAMP";
			break;
		
		case 9:
			return "RE_SECURITYVAN";
			break;
		
		case 10:
			return "RE_PAPARAZZI";
			break;
		
		case 11:
			return "RE_CHASETHIEVES";
			break;
		
		case 12:
			return "RE_DEALGONEWRONG";
			break;
		
		case 13:
			return "RE_HITCHLIFT";
			break;
		
		case 14:
			return "RE_STAG";
			break;
		
		case 15:
			return "RE_ARREST";
			break;
		
		case 16:
			return "RE_CRASHRESCUE";
			break;
		
		case 17:
			return "RE_CARTHEFT";
			break;
		
		case 18:
			return "RE_CULTSHOOTOUT";
			break;
		
		case 19:
			return "RE_GANGFIGHT";
			break;
		
		case 20:
			return "RE_GANGINTIMIDATION";
			break;
		
		case 21:
			return "RE_PRISONVANBREAK";
			break;
		
		case 22:
			return "RE_PRISONERLIFT";
			break;
		
		case 23:
			return "RE_ABANDONEDCAR";
			break;
		
		case 24:
			return "RE_BURIAL";
			break;
		
		case 25:
			return "RE_MUGGING";
			break;
		
		case 26:
			return "RE_BIKETHIEF";
			break;
		
		case 27:
			return "RE_DRUNKDRIVER";
			break;
		
		case 28:
			return "RE_HOMELANDSECURITY";
			break;
		
		case 29:
			return "RE_BORDERPATROL";
			break;
		
		case 30:
			return "RE_SIMEONYETARIAN";
			break;
		
		case 31:
			return "RE_DUEL";
			break;
		
		case 32:
			return "RE_SEAPLANE";
			break;
		
		case 33:
			return "RE_MONKEYPHOTO";
			break;
		
		case -1:
			return "RE_NONE";
			break;
	}
	if (!bParam1)
	{
	}
	return "UNKNOWN";
}

void func_181(int iParam0)
{
	Global_36332 = (unk_0x94E3E074F38DF86C() + iParam0);
}

void func_182(int iParam0)
{
	func_183(iParam0, 0, func_188(iParam0));
}

void func_183(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_75();
	func_186(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_185(iParam0, &uVar0);
	Var1 = { func_184(&uVar0) };
}

struct<16> func_184(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_74(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_98(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_155(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_156(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_82(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_80(*uParam0), 64);
	return Var0;
}

void func_185(int iParam0, var uParam1)
{
	Global_101700.f_23954.f_43[iParam0] = *uParam1;
}

void func_186(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_80(*uParam0);
	iVar1 = func_82(*uParam0);
	iVar2 = func_156(*uParam0);
	iVar3 = func_74(*uParam0);
	iVar4 = func_98(*uParam0);
	iVar5 = func_155(*uParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_79(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_79(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_187(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_187(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_85(uParam0, iParam1);
	func_84(uParam0, iParam2);
	func_83(uParam0, iParam3);
	func_77(uParam0, iParam5);
	func_78(uParam0, iParam4);
	func_76(uParam0, iParam6);
}

int func_188(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 23:
			iVar0 = 30;
			break;
		
		case 0:
			iVar0 = 30;
			break;
		
		case 15:
			iVar0 = 30;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 26:
			iVar0 = 30;
			break;
		
		case 8:
			iVar0 = 30;
			break;
		
		case 29:
			iVar0 = 30;
			break;
		
		case 24:
			iVar0 = 30;
			break;
		
		case 2:
			iVar0 = 0;
			break;
		
		case 17:
			iVar0 = 30;
			break;
		
		case 11:
			iVar0 = 30;
			break;
		
		case 16:
			iVar0 = 30;
			break;
		
		case 18:
			iVar0 = 30;
			break;
		
		case 12:
			iVar0 = 120;
			break;
		
		case 3:
			iVar0 = 60;
			break;
		
		case 27:
			iVar0 = 60;
			break;
		
		case 19:
			iVar0 = 30;
			break;
		
		case 20:
			iVar0 = 30;
			break;
		
		case 4:
			iVar0 = 60;
			break;
		
		case 28:
			iVar0 = 30;
			break;
		
		case 13:
			iVar0 = 35;
			break;
		
		case 7:
			iVar0 = 30;
			break;
		
		case 25:
			iVar0 = 40;
			break;
		
		case 10:
			iVar0 = 30;
			break;
		
		case 22:
			iVar0 = 30;
			break;
		
		case 21:
			iVar0 = 30;
			break;
		
		case 5:
			iVar0 = 30;
			break;
		
		case 30:
			iVar0 = 60;
			break;
		
		case 9:
			iVar0 = 60;
			break;
		
		case 6:
			iVar0 = 40;
			break;
		
		case 14:
			iVar0 = 40;
			break;
	}
	return iVar0;
}

int func_189(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam1 == 0)
	{
		uVar1 = unk_0x1F1F11C691B0636E(iParam0, &uVar0);
		if (!unk_0x9C88EB7B70229335(uVar1))
		{
			if (unk_0x765F5B806B517045(uVar1) == unk_0x765F5B806B517045("vehicle_gen_controller"))
			{
				return 0;
			}
		}
	}
	func_190(iParam0, iParam2);
	return 1;
}

void func_190(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_195(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = unk_0x17206B315923243C(iParam0, -1, 0);
		if (!unk_0x23E9113C762466ED(iVar0))
		{
			iVar0 = unk_0x67649920B2C3A244(iParam0, -1);
		}
		if (unk_0x23E9113C762466ED(iVar0) && !unk_0xCA41A00932714525(iVar0))
		{
			if (unk_0x0324EEB10F81965F(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0x0324EEB10F81965F(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0x0324EEB10F81965F(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_101700.f_2095.f_539.f_3549;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0x0324EEB10F81965F(iParam0) == Global_101700.f_31389.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!unk_0x9C88EB7B70229335(&(Global_101700.f_31389.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (unk_0x6A7B0D91FD88D9EE(unk_0xE184AC3A4DAF353D(iParam0), &(Global_101700.f_31389.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_101700.f_31389.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_101700.f_31389.f_5592[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (unk_0x0324EEB10F81965F(iParam0) == Global_101700.f_31389.f_5600[iVar1 /*78*/].f_66)
		{
			if (!unk_0x9C88EB7B70229335(&(Global_101700.f_31389.f_5600[iVar1 /*78*/].f_1)))
			{
				if (unk_0x6A7B0D91FD88D9EE(unk_0xE184AC3A4DAF353D(iParam0), &(Global_101700.f_31389.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_101700.f_31389.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_101700.f_31389.f_5590 = iParam1;
	Global_69436 = iParam0;
	Global_101700.f_31389.f_5588 = 1;
	func_191(iParam0, &(Global_101700.f_31389.f_5510));
}

void func_191(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0x45CD66F0A131E554(iParam0, 0))
	{
		func_194(uParam1);
		uParam1->f_66 = unk_0x0324EEB10F81965F(iParam0);
		StringCopy(&(uParam1->f_1), unk_0xE184AC3A4DAF353D(iParam0), 16);
		*uParam1 = unk_0x420AD4B7A2DA4F74(iParam0);
		unk_0x3C5D9FD265196560(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0x5CE46A3E89B49FAE(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0xEFB6EA0CF01B73B1(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0xB3A30C9CBD0AF035(iParam0);
		uParam1->f_67 = unk_0x7C73B96D4046CE64(iParam0);
		uParam1->f_69 = unk_0x5AADFFFE972FF9B9(iParam0);
		uParam1->f_70 = unk_0xB7541DEA333EE53D(iParam0);
		unk_0x44A79540466923A3(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0x86916C0F8ACCF8A7(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0xA2BD8E71E4EDAA75(iParam0, 2))
		{
			unk_0xEB79FECD9022AAF0(&(uParam1->f_77), 28);
		}
		if (unk_0xA2BD8E71E4EDAA75(iParam0, 3))
		{
			unk_0xEB79FECD9022AAF0(&(uParam1->f_77), 29);
		}
		if (unk_0xA2BD8E71E4EDAA75(iParam0, 0))
		{
			unk_0xEB79FECD9022AAF0(&(uParam1->f_77), 30);
		}
		if (unk_0xA2BD8E71E4EDAA75(iParam0, 1))
		{
			unk_0xEB79FECD9022AAF0(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && uParam1->f_66 != joaat("granger"))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0x4555FC519F5B33E3(iParam0, 0))
		{
			uParam1->f_68 = unk_0x575D47C669B84572(iParam0);
		}
		if (unk_0x8432EA469FDB418D(uParam1->f_66))
		{
			if (unk_0x3B236BCC7CA86F1F(iParam0))
			{
				switch (unk_0xF4925FA16E991774(iParam0))
				{
					case 2:
					case 0:
						unk_0x21E7933CCC7B3724(&(uParam1->f_77), 23);
						unk_0xEB79FECD9022AAF0(&(uParam1->f_77), 22);
						break;
					
					case 3:
					case 1:
						unk_0x21E7933CCC7B3724(&(uParam1->f_77), 23);
						unk_0x21E7933CCC7B3724(&(uParam1->f_77), 22);
						break;
					
					case 4:
						unk_0xEB79FECD9022AAF0(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0xEB79FECD9022AAF0(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0x3AAC868F49EC1E0A(iParam0))
		{
			unk_0xEB79FECD9022AAF0(&(uParam1->f_77), 9);
		}
		if (unk_0xDABC65773FAE7D61(iParam0))
		{
			unk_0xEB79FECD9022AAF0(&(uParam1->f_77), 10);
		}
		if (unk_0xD74AC52CAC4E709E(iParam0))
		{
			unk_0xEB79FECD9022AAF0(&(uParam1->f_77), 13);
			unk_0xF1A2595FDE7845CA(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0x9FC3D9B8F2BAF3E6(iParam0))
		{
			unk_0xEB79FECD9022AAF0(&(uParam1->f_77), 12);
		}
		func_193(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0xA13396827DE7EB7C(iParam0, iVar0 + 1))
			{
				unk_0xEB79FECD9022AAF0(&(uParam1->f_77), func_192(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0xA95FCE90BA930118(iParam0, 0))
		{
			unk_0xEB79FECD9022AAF0(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0x21E7933CCC7B3724(&(uParam1->f_77), 11);
		}
		if (unk_0x44748DA5CF34DA5E(iParam0, "IgnoredByQuickSave") && unk_0x12D059B73664565A(iParam0, "IgnoredByQuickSave"))
		{
			unk_0xEB79FECD9022AAF0(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0x21E7933CCC7B3724(&(uParam1->f_77), 27);
		}
	}
}

int func_192(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_193(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x45CD66F0A131E554(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0xFA4A2220118417AE(*iParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			(*uParam1)[iVar0] = 0;
			if (unk_0x2E6E95784D18C8E0(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0x68BE46B0EA4FCFAF(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0x1D2F98CF2A472A00(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0x1D2F98CF2A472A00(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

void func_194(var uParam0)
{
	int iVar0;
	
	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_59[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
}

int func_195(int iParam0)
{
	if ((((((((((!unk_0x23E9113C762466ED(iParam0) || !unk_0x45CD66F0A131E554(iParam0, 0)) || func_210(iParam0, 0, 0)) || func_210(iParam0, 1, 0)) || func_210(iParam0, 2, 0)) || func_209(iParam0) != 145) || func_208(iParam0)) || func_207(iParam0)) || func_206(iParam0)) || func_205(iParam0)) || !func_196(unk_0x0324EEB10F81965F(iParam0)))
	{
		if (func_207(iParam0))
		{
		}
		if (func_207(iParam0))
		{
		}
		if (func_210(iParam0, 0, 0))
		{
		}
		if (func_210(iParam0, 1, 0))
		{
		}
		if (func_210(iParam0, 2, 0))
		{
		}
		if (func_209(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_196(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_197(iParam0, 0))
	{
		return 0;
	}
	if (((unk_0xA55B002FED5A9858(iParam0) || unk_0x8432EA469FDB418D(iParam0)) || unk_0xC5082382D5482C0C(iParam0)) || unk_0x3B548F49528B5FA7(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("bus"):
		case joaat("stretch"):
		case joaat("barracks"):
		case joaat("armytanker"):
		case joaat("rhino"):
		case joaat("armytrailer"):
		case joaat("barracks2"):
		case joaat("flatbed"):
		case joaat("ripley"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("airbus"):
		case joaat("coach"):
		case joaat("rentalbus"):
		case joaat("tourbus"):
		case joaat("firetruk"):
		case joaat("pbus"):
		case joaat("trash"):
		case joaat("benson"):
		case joaat("boattrailer"):
		case joaat("biff"):
		case joaat("hauler"):
		case joaat("docktrailer"):
		case joaat("phantom"):
		case joaat("pounder"):
		case joaat("tractor2"):
		case joaat("bulldozer"):
		case joaat("handler"):
		case joaat("tiptruck"):
		case joaat("cutter"):
		case joaat("dump"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("rubble"):
		case joaat("scrap"):
		case joaat("tiptruck2"):
		case joaat("camper"):
		case joaat("taco"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("journey"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("policeb"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("policet"):
		case joaat("taxi"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("monster"):
			return 0;
			break;
	}
	return 1;
}

int func_197(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x2ED6701376DBCF71(iParam0))
	{
		return 0;
	}
	if ((((((iParam0 == joaat("dominator2") && !unk_0x63C468D583002D23()) || (iParam0 == joaat("buffalo3") && !unk_0x63C468D583002D23())) || (iParam0 == joaat("gauntlet2") && !unk_0x63C468D583002D23())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !unk_0x63C468D583002D23())) || iParam0 == joaat("blista3"))
	{
		if (!func_175())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0x9AEFEF0C873443F4())
		{
			if (unk_0xE8885AFFB348EA8C(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0x5D46F50AE982AB28(Var1.f_0))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp"))
	{
		if ((((!func_204() && !func_203()) && !func_202()) && !func_201()) && !func_175())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0x8EA3D5407E9F4AF0() || unk_0xEF4E5E47AF0D4480()) || unk_0x7C2F31E78C33DE0F())
		{
		}
		else if (!func_202())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_200(iParam0))
		{
			return 0;
		}
	}
	if (!func_198(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_198(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_199())
	{
		return 1;
	}
	unk_0x5E5FAFB02AD6B99F(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("dune4"):
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		
		case joaat("voltic2"):
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		
		case joaat("ruiner2"):
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		
		case joaat("phantom2"):
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		
		case joaat("technical2"):
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		
		case joaat("boxville5"):
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		
		case joaat("wastelander"):
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		
		case joaat("blazer5"):
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		
		default:
			return 1;
			break;
	}
	if (!unk_0x03E2F3A2203722EB(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_199()
{
	if (unk_0xEF4E5E47AF0D4480())
	{
		return 1;
	}
	return 0;
}

int func_200(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2482093)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = unk_0x57E9911EC23E2C54();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_5506 && !Global_262145.f_11530) && iVar1 < Global_262145.f_11531)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_12342 && iVar1 < Global_262145.f_12354)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_12338 && iVar1 < Global_262145.f_12350)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_12339 && iVar1 < Global_262145.f_12351)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_12340 && iVar1 < Global_262145.f_12352)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_12341 && iVar1 < Global_262145.f_12353)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_12343 && iVar1 < Global_262145.f_12355)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_12344 && iVar1 < Global_262145.f_12347)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_12345 && iVar1 < Global_262145.f_12348)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_12346 && iVar1 < Global_262145.f_12349)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_14969 && iVar1 < Global_262145.f_14934)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_14964 && iVar1 < Global_262145.f_14929)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_14968 && iVar1 < Global_262145.f_14933)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_14967 && iVar1 < Global_262145.f_14932)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_14961 && iVar1 < Global_262145.f_14926)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_14962 && iVar1 < Global_262145.f_14927)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_14965 && iVar1 < Global_262145.f_14930)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_14966 && iVar1 < Global_262145.f_14931)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_14963 && iVar1 < Global_262145.f_14928)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_14971 && iVar1 < Global_262145.f_14936)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_14972 && iVar1 < Global_262145.f_14937)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_14960 && iVar1 < Global_262145.f_14925)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_14959 && iVar1 < Global_262145.f_14924)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_14958 && iVar1 < Global_262145.f_14923)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_14970 && iVar1 < Global_262145.f_14935)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_14973 && iVar1 < Global_262145.f_14938)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_14974 && iVar1 < Global_262145.f_14939)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_14975 && iVar1 < Global_262145.f_14940)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_14976 && iVar1 < Global_262145.f_14941)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_15121 && iVar1 < Global_262145.f_15143)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_15122 && iVar1 < Global_262145.f_15144)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_15123 && iVar1 < Global_262145.f_15145)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_15124 && iVar1 < Global_262145.f_15146)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_15125 && iVar1 < Global_262145.f_15147)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_15126 && iVar1 < Global_262145.f_15148)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_15128 && iVar1 < Global_262145.f_15149)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_15129 && iVar1 < Global_262145.f_15150)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_15130 && iVar1 < Global_262145.f_15151)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_15131 && iVar1 < Global_262145.f_15152)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_15132 && iVar1 < Global_262145.f_15153)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_15133 && iVar1 < Global_262145.f_15154)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_15134 && iVar1 < Global_262145.f_15155)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_15140 && iVar1 < Global_262145.f_15162)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_15137 && iVar1 < Global_262145.f_15158)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_15138 && iVar1 < Global_262145.f_15159)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_15139 && iVar1 < Global_262145.f_15160)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_15127 && iVar1 < Global_262145.f_15161)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_15141 && iVar1 < Global_262145.f_15163)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_15135 && iVar1 < Global_262145.f_15156)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_15136 && iVar1 < Global_262145.f_15157)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_15142 && iVar1 < Global_262145.f_15164)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_16770 && iVar1 < Global_262145.f_16811)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_16771 && iVar1 < Global_262145.f_16812)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_16772 && iVar1 < Global_262145.f_16813)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_16773 && iVar1 < Global_262145.f_16814)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_16774 && iVar1 < Global_262145.f_16815)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_16775 && iVar1 < Global_262145.f_16816)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_16776 && iVar1 < Global_262145.f_16817)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_16777 && iVar1 < Global_262145.f_16818)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_16778 && iVar1 < Global_262145.f_16819)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_16779 && iVar1 < Global_262145.f_16820)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_16780 && iVar1 < Global_262145.f_16821)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_16781 && iVar1 < Global_262145.f_16822)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_16782 && iVar1 < Global_262145.f_16823)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_16783 && iVar1 < Global_262145.f_16824)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_16784 && iVar1 < Global_262145.f_16825)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_16785 && iVar1 < Global_262145.f_16826)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_16786 && iVar1 < Global_262145.f_16827)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_16787 && iVar1 < Global_262145.f_16828)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_16788 && iVar1 < Global_262145.f_16829)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_262145.f_16789 && iVar1 < Global_262145.f_16830)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_16790 && iVar1 < Global_262145.f_16831)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_16791 && iVar1 < Global_262145.f_16832)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_262145.f_16792 && iVar1 < Global_262145.f_16833)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_16793 && iVar1 < Global_262145.f_16834)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_16794 && iVar1 < Global_262145.f_16835)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gp1"))
	{
		if (!Global_262145.f_17797 && iVar1 < Global_262145.f_17793)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("infernus2"))
	{
		if (!Global_262145.f_17798 && iVar1 < Global_262145.f_17794)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruston"))
	{
		if (!Global_262145.f_17799 && iVar1 < Global_262145.f_17795)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("turismo2"))
	{
		if (!Global_262145.f_17800 && iVar1 < Global_262145.f_17796)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_201()
{
	return 0;
}

int func_202()
{
	return 1;
}

int func_203()
{
	return 1;
}

int func_204()
{
	if (unk_0x6948821CC8D52AC2(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_205(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = unk_0x0324EEB10F81965F(iParam0);
	uVar1 = unk_0xE184AC3A4DAF353D(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x6A7B0D91FD88D9EE(uVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_197(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_206(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x23E9113C762466ED(Global_89185[iVar0]))
		{
			if (Global_89185[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_207(int iParam0)
{
	int iVar0;
	
	if (unk_0x23E9113C762466ED(iParam0) && unk_0x45CD66F0A131E554(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0x23E9113C762466ED(Global_89155[iVar0]) && unk_0x45CD66F0A131E554(Global_89155[iVar0], 0))
			{
				if (Global_89155[iVar0] == iParam0 && unk_0x0324EEB10F81965F(Global_89155[iVar0]) == unk_0x0324EEB10F81965F(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_208(int iParam0)
{
	int iVar0;
	
	if (unk_0x23E9113C762466ED(Global_68531.f_484[24]))
	{
		if (iParam0 == Global_68531.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x23E9113C762466ED(Global_68531.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_68531.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_209(int iParam0)
{
	int iVar0;
	
	if (!unk_0x23E9113C762466ED(iParam0))
	{
		return 145;
	}
	if (!unk_0x45CD66F0A131E554(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x23E9113C762466ED(Global_89155[iVar0]))
		{
			if (Global_89155[iVar0] == iParam0)
			{
				return Global_89165[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_210(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!unk_0x23E9113C762466ED(iParam0) || !unk_0x45CD66F0A131E554(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_211(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || unk_0x48B8265059381CD0(Global_101700.f_6188[iVar9], 0))
		{
			if (unk_0xA3342DAAC0684FAC(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_211(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

void func_212(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 46)
	{
		func_122(iVar0, bParam0);
		iVar0++;
	}
}

