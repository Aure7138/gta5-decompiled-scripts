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
	if (unk_0x89522B8E487D4EF9(11))
	{
		if (!unk_0xAF437D7C802AB246(iLocal_55))
		{
			if (unk_0x6CCCE00683E8FD6D(iLocal_55))
			{
				unk_0x46D4C1D7588933FB(iLocal_55);
			}
		}
		if (!unk_0xAF437D7C802AB246(iLocal_57))
		{
			if (unk_0x6CCCE00683E8FD6D(iLocal_57))
			{
				unk_0x46D4C1D7588933FB(iLocal_57);
			}
		}
		func_176();
	}
	if (func_175(283, 1))
	{
		unk_0x52F20802944F8DCE();
	}
	if (func_146(Local_52, -1, 0, 0, 0))
	{
		if ((unk_0x7C833E3C6EEE41E0() > 2 && unk_0x7C833E3C6EEE41E0() < 15) && !unk_0x51AFBB2BC4E2AAFD(unk_0x3F80C6638E3A1A90(), 0))
		{
		}
		else
		{
			unk_0x52F20802944F8DCE();
		}
		func_143(-1);
	}
	else
	{
		unk_0x52F20802944F8DCE();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x18544C93469391DA() || bLocal_116)
		{
			if (!func_142())
			{
				if (func_141())
				{
					func_176();
				}
			}
			unk_0xE10447427D928F55("RE_SDRM", 0);
			switch (iLocal_48)
			{
				case 0:
					if (func_129())
					{
						func_176();
					}
					if (iLocal_50)
					{
						iLocal_51 = 1;
						iLocal_48 = 1;
					}
					else
					{
						func_120();
					}
					break;
				
				case 1:
					func_119();
					if (!iLocal_114)
					{
						func_118();
						func_115();
						func_104();
						if (!unk_0x47B2F09FC779F5CD(uLocal_318))
						{
							func_103();
						}
					}
					else
					{
						func_100();
						if (!bLocal_124)
						{
							func_98();
						}
						func_90();
						func_88();
						func_72();
						func_71(iLocal_55, 0);
						if (!bLocal_121)
						{
						}
						if (iLocal_49 == 0 && !bLocal_118)
						{
							func_67();
							func_65();
						}
						else
						{
							func_60();
						}
						if (iLocal_49 == 3)
						{
							if (unk_0xF18329472591CFE6(unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1), Local_87, 1) < 100f)
							{
								if (!unk_0x9E77A197C8591F81())
								{
									unk_0x21CDC0BA99DF1B1B("sdrm_mcs_2", 8);
								}
								if (unk_0x9E77A197C8591F81())
								{
									if (unk_0xFC7560DB639D4C2A())
									{
										if ((((!unk_0xAF437D7C802AB246(iLocal_55) && !unk_0xAF437D7C802AB246(iLocal_57)) && !unk_0xAF437D7C802AB246(iLocal_56)) && !unk_0xAF437D7C802AB246(iLocal_58)) && !unk_0x76B2D234F1895632(iLocal_132))
										{
											unk_0x22D369EB33738D0F("Groom", iLocal_55, 0);
											unk_0x22D369EB33738D0F("Groomsman", iLocal_57, 0);
											unk_0x22D369EB33738D0F("Bride", iLocal_56, 0);
											unk_0x22D369EB33738D0F("Father_of_the_bride", iLocal_58, 0);
										}
									}
								}
							}
							else if (unk_0x9E77A197C8591F81())
							{
								unk_0x9F13924F68008214();
							}
							if (bLocal_118)
							{
								if (func_59(1, 0, 1))
								{
									func_25();
								}
							}
							else if (!unk_0xAF437D7C802AB246(iLocal_57))
							{
								if (unk_0x51374A0BB2871E6E(iLocal_57, 0))
								{
									if (unk_0xD11595488376CB53(uLocal_322))
									{
										unk_0x5B62CAB9B0D6ABF1(&uLocal_322);
										if (unk_0xD11595488376CB53(uLocal_320))
										{
											unk_0x5B62CAB9B0D6ABF1(&uLocal_320);
										}
										if (!unk_0xD11595488376CB53(uLocal_320))
										{
											uLocal_320 = func_23(Local_67, 1);
										}
									}
								}
							}
						}
						if (func_3())
						{
							if (!unk_0xAF437D7C802AB246(iLocal_55))
							{
								unk_0x4B79E06845D63B96(iLocal_55, unk_0xE7869D5D7816A9B6(), 1000f, -1, 0, 0);
							}
							if (!unk_0xAF437D7C802AB246(iLocal_57))
							{
								unk_0x4B79E06845D63B96(iLocal_57, unk_0xE7869D5D7816A9B6(), 1000f, -1, 0, 0);
							}
							if (!unk_0xAF437D7C802AB246(iLocal_56))
							{
								unk_0x4B79E06845D63B96(iLocal_56, unk_0xE7869D5D7816A9B6(), 1000f, -1, 0, 0);
							}
							if (!unk_0xAF437D7C802AB246(iLocal_58))
							{
								unk_0x4B79E06845D63B96(iLocal_58, unk_0xE7869D5D7816A9B6(), 1000f, -1, 0, 0);
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
			func_176();
		}
	}
}

void func_1()
{
}

void func_2()
{
	func_176();
}

int func_3()
{
	if (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
	{
		if (unk_0xAF437D7C802AB246(iLocal_55))
		{
			return 1;
		}
		else
		{
			if (unk_0x915685CA559C211B(iLocal_55, unk_0xE7869D5D7816A9B6(), 1) || unk_0xA7D2A868253353BE(iLocal_55))
			{
				return 1;
			}
			if (bLocal_116)
			{
				if (unk_0x51AFBB2BC4E2AAFD(unk_0x3F80C6638E3A1A90(), 0))
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
	if (!unk_0x76B2D234F1895632(iLocal_59))
	{
		if ((!unk_0xC45A34912542C4EB(iLocal_59, 0) || unk_0x082AD235E40A8FDE(iLocal_59)) || unk_0xA7D2A868253353BE(iLocal_59))
		{
			func_21();
			if (func_4(&uLocal_136, "stagdau", "stagdwrcar", 4, 0, 0, 0))
			{
				return 1;
			}
		}
		if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
		{
			if (unk_0x63E25E4341FF2308(unk_0xE7869D5D7816A9B6(), joaat("towtruck")) || unk_0x63E25E4341FF2308(unk_0xE7869D5D7816A9B6(), joaat("towtruck2")))
			{
				if (unk_0x3E29DD6D10980B6B(unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0), iLocal_59))
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
	if (!unk_0xAF437D7C802AB246(iLocal_55))
	{
		if (!unk_0x0E6C083BC5101C8B(iLocal_55, unk_0xE7869D5D7816A9B6(), 150f, 150f, 150f, 0, 1, 0))
		{
			if (!unk_0x76B2D234F1895632(iLocal_59))
			{
				if (unk_0x8AF655CC5761C7A2(unk_0xE7869D5D7816A9B6(), iLocal_59, 0))
				{
					unk_0xFBDF63459A604D13(unk_0x3F80C6638E3A1A90(), 1, 0);
					unk_0xCCB4EC76BC988F09(unk_0x3F80C6638E3A1A90(), 0f);
				}
			}
			return 1;
		}
	}
	if (iLocal_49 >= 1)
	{
		if (bLocal_123)
		{
			if (unk_0xAF437D7C802AB246(iLocal_57))
			{
				func_21();
				return 1;
			}
			else if (unk_0x915685CA559C211B(iLocal_57, unk_0xE7869D5D7816A9B6(), 1))
			{
				func_21();
				return 1;
			}
		}
		if (!unk_0x76B2D234F1895632(iLocal_59))
		{
			if (!unk_0x0E6C083BC5101C8B(iLocal_59, unk_0xE7869D5D7816A9B6(), 20f, 20f, 20f, 0, 1, 0))
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
			if (!unk_0x0E6C083BC5101C8B(iLocal_59, unk_0xE7869D5D7816A9B6(), 150f, 150f, 150f, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	if (iLocal_49 == 3)
	{
		if (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
		{
			if (unk_0xAF437D7C802AB246(iLocal_56) || unk_0xAF437D7C802AB246(iLocal_58))
			{
				return 1;
			}
			else if (unk_0x915685CA559C211B(iLocal_56, unk_0xE7869D5D7816A9B6(), 1) || unk_0x915685CA559C211B(iLocal_58, unk_0xE7869D5D7816A9B6(), 1))
			{
				return 1;
			}
		}
		if (!unk_0xAF437D7C802AB246(iLocal_57))
		{
			if (!unk_0x0E6C083BC5101C8B(iLocal_57, unk_0xE7869D5D7816A9B6(), 20f, 20f, 20f, 0, 1, 0) && iLocal_310)
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
			if (!unk_0x0E6C083BC5101C8B(iLocal_57, unk_0xE7869D5D7816A9B6(), 150f, 150f, 150f, 0, 1, 0))
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
	Global_15719 = 0;
	Global_15721 = 0;
	Global_15726 = 0;
	Global_16703 = 0;
	Global_16705 = 0;
	Global_16709 = 0;
	Global_2621441 = 0;
	return func_5(sParam2, iParam3, 0);
}

int func_5(char* sParam0, int iParam1, bool bParam2)
{
	Global_15713 = 0;
	if (Global_15712 == 0 || Global_15714 == 2)
	{
		if (Global_15712 != 0)
		{
			if (iParam1 > Global_15714)
			{
				if (Global_15719 == 0)
				{
					unk_0xDA09A6E60FE9645E(0);
					Global_14413.f_1 = 3;
					Global_15712 = 0;
					Global_15713 = 1;
					Global_15765 = 0;
					Global_15708 = 0;
					Global_15709 = 0;
					Global_15723 = 0;
					Global_15722 = 0;
					Global_14412 = 0;
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
		if (unk_0xF0A330A29F97AA7E())
		{
			return 0;
		}
		if (func_18(8, -1))
		{
			return 0;
		}
		Global_15788 = { Global_15782 };
		func_17();
		Global_15001 = { Global_15166 };
		Global_15718 = Global_15719;
		Global_15725 = Global_15726;
		Global_2621442 = Global_2621441;
		Global_15727 = { Global_15743 };
		Global_15720 = Global_15721;
		Global_16702 = Global_16703;
		Global_16710 = { Global_16716 };
		Global_16704 = Global_16705;
		Global_16706 = Global_16707;
		Global_16708 = Global_16709;
		Global_15331.f_370 = Global_16701;
		Global_15331.f_368 = Global_16699;
		Global_15331.f_369 = Global_16700;
		Global_15708 = Global_15709;
		if (Global_15718)
		{
			unk_0x73817D396768E4C6(&Global_2283, 20);
			unk_0x73817D396768E4C6(&Global_2284, 17);
			unk_0x73817D396768E4C6(&Global_2285, 0);
			if (bParam2)
			{
				func_10();
				if (Global_3088[Global_14413 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14413.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14379 == 1)
			{
				return 0;
			}
			if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
			{
				if (unk_0xC3AE89795D844EE9(unk_0xE7869D5D7816A9B6()))
				{
					return 0;
				}
				if (func_9())
				{
					return 0;
				}
				if (unk_0x25AE83AAAFB359D8(unk_0xE7869D5D7816A9B6()))
				{
					return 0;
				}
				if (unk_0x8E2CF6ACCED3BD0F(unk_0xE7869D5D7816A9B6()))
				{
					return 0;
				}
				if (unk_0x3A065D524128D33B(unk_0xE7869D5D7816A9B6()))
				{
					return 0;
				}
				if (unk_0x14618ECB1EB17B8F(unk_0xE7869D5D7816A9B6(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69236)
				{
					if (unk_0xA7D2A868253353BE(unk_0xE7869D5D7816A9B6()))
					{
						return 0;
					}
					if (unk_0x39CB1B5DEC5DD307(unk_0x3F80C6638E3A1A90()))
					{
						return 0;
					}
					if (unk_0xA7AC3687807201B4(unk_0xE7869D5D7816A9B6()))
					{
						return 0;
					}
					if (unk_0x3CD36EADD6272F29(unk_0x3F80C6638E3A1A90()))
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
				switch (Global_14413.f_1)
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
				if (unk_0xB519E5386FBF69E5(Global_2283, 9))
				{
					return 0;
				}
			}
			func_7();
			Global_15722 = bParam2;
		}
		Global_15714 = iParam1;
		StringCopy(&Global_15331, sParam0, 24);
		Global_14578 = 0;
		func_6();
		return 1;
	}
	if (Global_15712 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15714 || iParam1 == Global_15714)
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
		StringCopy(&(Global_14580[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xDA09A6E60FE9645E(0);
	Global_15712 = 1;
}

void func_7()
{
	Global_15765 = Global_15764;
	Global_15759 = Global_15760;
	Global_15806 = { Global_15794 };
	Global_15812 = { Global_15800 };
	Global_15767 = Global_15766;
	Global_15836 = { Global_15818 };
	Global_15842 = { Global_15824 };
	Global_15848 = { Global_15830 };
	Global_15854 = { Global_15860 };
	Global_1598 = Global_1599;
	Global_1600 = Global_1601;
	Global_15723 = Global_15724;
	Global_15725 = Global_15726;
	Global_15727 = { Global_15743 };
	Global_15716 = Global_15717;
	Global_16728 = 0;
	Global_15761 = 0;
	Global_15762 = 0;
	unk_0x73817D396768E4C6(&Global_2284, 16);
}

int func_8()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_9()
{
	int iVar0;
	int iVar1;
	
	if (Global_69236)
	{
		iVar0 = 0;
		unk_0x5E99B63A819500A5(unk_0xE7869D5D7816A9B6(), &iVar1, 1);
		if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x834CA326769DA173() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
	{
		if (unk_0x9699041CFA6517D2(unk_0xE7869D5D7816A9B6(), 78, 1))
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
		if (!unk_0x76B2D234F1895632(unk_0xE7869D5D7816A9B6()))
		{
			if (unk_0x1B2DC87EFB36DF80(unk_0xE7869D5D7816A9B6()) == Global_99155.f_32499[0 /*29*/])
			{
				Global_14413 = 0;
			}
			else if (unk_0x1B2DC87EFB36DF80(unk_0xE7869D5D7816A9B6()) == Global_99155.f_32499[1 /*29*/])
			{
				Global_14413 = 1;
			}
			else if (unk_0x1B2DC87EFB36DF80(unk_0xE7869D5D7816A9B6()) == Global_99155.f_32499[2 /*29*/])
			{
				Global_14413 = 2;
			}
			else
			{
				Global_14413 = 0;
			}
		}
	}
	else
	{
		Global_14413 = func_11();
		if (Global_14413 == 145)
		{
			Global_14413 = 3;
		}
		if (Global_69236)
		{
			Global_14413 = 3;
		}
		if (Global_14413 > 3)
		{
			Global_14413 = 3;
		}
	}
}

int func_11()
{
	func_12();
	return Global_99155.f_1750.f_539.f_3549;
}

void func_12()
{
	int iVar0;
	
	if (unk_0xD51CFE69539DB6D8(unk_0xE7869D5D7816A9B6()))
	{
		if (func_15(Global_99155.f_1750.f_539.f_3549) != unk_0x1B2DC87EFB36DF80(unk_0xE7869D5D7816A9B6()))
		{
			iVar0 = func_14(unk_0xE7869D5D7816A9B6());
			if (func_13(iVar0) && (!func_16(14) || Global_98107))
			{
				if (Global_99155.f_1750.f_539.f_3549 != iVar0 && func_13(Global_99155.f_1750.f_539.f_3549))
				{
					Global_99155.f_1750.f_539.f_3550 = Global_99155.f_1750.f_539.f_3549;
				}
				Global_99155.f_1750.f_539.f_3551 = iVar0;
				Global_99155.f_1750.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_99155.f_1750.f_539.f_3549 != 145)
			{
				Global_99155.f_1750.f_539.f_3551 = Global_99155.f_1750.f_539.f_3549;
			}
			return;
		}
	}
	Global_99155.f_1750.f_539.f_3549 = 145;
}

bool func_13(int iParam0)
{
	return iParam0 < 3;
}

int func_14(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD51CFE69539DB6D8(iParam0))
	{
		iVar1 = unk_0x1B2DC87EFB36DF80(iParam0);
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
		return Global_99155.f_32499[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_16(int iParam0)
{
	return Global_35619 == iParam0;
}

void func_17()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15001[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15001[iVar0 /*10*/].f_1), "", 24);
		Global_15001[iVar0 /*10*/].f_7 = 0;
		Global_15001[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15001.f_161 = -99;
	Global_15001.f_162 = { 0f, 0f, 0f };
}

bool func_18(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1338577.f_203[iParam1];
			}
			break;
	}
	return unk_0xB519E5386FBF69E5(Global_1338577.f_949, iParam0);
}

void func_19()
{
	unk_0xACA77D3E6C847C83();
	Global_16723 = 0;
	if ((unk_0xD6F17BA188A65E8F() || Global_14413.f_1 == 9) || Global_14412 == 1)
	{
		unk_0xDA09A6E60FE9645E(0);
		Global_15712 = 6;
		Global_14413.f_1 = 3;
		return;
	}
	if (unk_0xF0A330A29F97AA7E())
	{
		unk_0xDA09A6E60FE9645E(1);
		Global_15712 = 6;
		return;
	}
}

void func_20(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15166 = { *uParam0 };
	Global_1599 = iParam1;
	StringCopy(&Global_15782, sParam2, 24);
	Global_16701 = iParam5;
	if (iParam3 == 0)
	{
		Global_16699 = 1;
		Global_16697 = 0;
	}
	else
	{
		Global_16699 = 0;
		Global_16697 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16700 = 1;
		Global_16698 = 0;
	}
	else
	{
		Global_16700 = 0;
		Global_16698 = 1;
	}
}

void func_21()
{
	Global_14578 = 0;
	func_22();
}

void func_22()
{
	unk_0xACA77D3E6C847C83();
	Global_16723 = 0;
	if (unk_0xF0A330A29F97AA7E())
	{
		unk_0xDA09A6E60FE9645E(0);
		Global_15712 = 6;
	}
}

var func_23(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x3779A616B93955A6(Param0);
	unk_0xFC630C7120A34CE4(uVar0, func_24(unk_0x00AAD79B42B3E036(), 1f, 1f));
	unk_0x1AD7485666C5160C(uVar0, iParam3);
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
			unk_0x19A78B976FE53AD5(0);
			iLocal_310 = 0;
			iLocal_131++;
			break;
		
		case 1:
			iLocal_131++;
			break;
		
		case 2:
			if ((((!unk_0xAF437D7C802AB246(iLocal_55) && !unk_0xAF437D7C802AB246(iLocal_57)) && !unk_0xAF437D7C802AB246(iLocal_56)) && !unk_0xAF437D7C802AB246(iLocal_58)) && !unk_0x76B2D234F1895632(iLocal_132))
			{
				if (func_51())
				{
					unk_0x5AF2634ABA4DA81D(iLocal_132, "SDRM_Car", 0, 0, 0);
					unk_0x5AF2634ABA4DA81D(iLocal_55, "Groom", 0, 0, 0);
					unk_0x5AF2634ABA4DA81D(iLocal_57, "Groomsman", 0, 0, 0);
					unk_0x5AF2634ABA4DA81D(iLocal_56, "Bride", 0, 0, 0);
					unk_0x5AF2634ABA4DA81D(iLocal_58, "Father_of_the_bride", 0, 0, 0);
					unk_0x9E2BC25163283628(4);
					iLocal_131++;
				}
			}
			break;
		
		case 3:
			if (unk_0xEBEC23E21F26CB82(0))
			{
				if (!unk_0x76B2D234F1895632(iLocal_132))
				{
					unk_0xC9CEB5227A733CE6(iLocal_132);
					unk_0x32C67B8F6CBD9B6A(iLocal_132, 1);
					unk_0xE242D0D27B122FAC(1);
					unk_0xA8010B7497A9230B(1);
					unk_0x7FB81B1DD14A3BE4(0f);
					unk_0x6EF372C057320AD4(-7f, 1065353216);
				}
				iLocal_131++;
			}
			break;
		
		case 4:
			unk_0x2C9DDB5306DF417C(&iLocal_55);
			unk_0x2C9DDB5306DF417C(&iLocal_57);
			unk_0x2C9DDB5306DF417C(&iLocal_56);
			unk_0x2C9DDB5306DF417C(&iLocal_58);
			func_52(0, 1, 1, 0);
			unk_0x19A78B976FE53AD5(1);
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
	func_176();
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
	if (Global_91064.f_8)
	{
		if (Global_91064.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_91064.f_10 > 1)
	{
		return 0;
	}
	Global_91064.f_10++;
	return 1;
}

bool func_29(bool bParam0)
{
	if (!bParam0 && unk_0xFF6891E21E7FC193(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xB519E5386FBF69E5(Global_69484, 0);
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
			Global_99155.f_29444.f_2 = 3;
		}
		if (func_38(iParam0, iParam1) != 322)
		{
			func_32(func_38(iParam0, iParam1), Local_45.f_0, Local_45.f_1);
		}
		Global_99143 = iParam1;
		if (Global_99141 == 0)
		{
			if (((Global_99144 == 1 || Global_99144 == 5) || Global_99144 == 11) || Global_99144 == 25)
			{
				func_31(2);
			}
			else if ((Global_99144 == 26 || Global_99144 == 8) || Global_99144 == 17)
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
	Global_99141 = iParam0;
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
	if (Global_99155.f_8808[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_99155.f_8808[iParam0 /*12*/].f_6 == 11 || Global_99155.f_8808[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_99155.f_8808[iParam0 /*12*/].f_5 = 1;
		Global_99155.f_8808[iParam0 /*12*/].f_10 = uParam1;
		Global_99155.f_8808[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			unk_0xE4A025C0D4FCCAFA(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0xE4A025C0D4FCCAFA(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0xE4A025C0D4FCCAFA(joaat("num_hidden_packages_3"), 50, 0);
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
	Global_98891 = 0;
	Global_98892 = 0;
	Global_98893 = 0;
	Global_98894 = 0;
	Global_98895 = 0;
	Global_98896 = 0;
	Global_98897 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_99155.f_8808.f_3853;
	Global_99155.f_8808.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_99155.f_8808[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_99155.f_8808[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_98891++;
					fVar1 = (fVar1 + Global_99155.f_8808[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_98892++;
					fVar2 = (fVar2 + Global_99155.f_8808[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_98893++;
					fVar3 = (fVar3 + Global_99155.f_8808[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_98894++;
					fVar4 = (fVar4 + Global_99155.f_8808[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_98895++;
					fVar5 = (fVar5 + (Global_99155.f_8808[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_98896++;
					fVar6 = (fVar6 + Global_99155.f_8808[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_98897++;
					fVar7 = (fVar7 + Global_99155.f_8808[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_98874 > 0)
	{
		if (Global_98891 == Global_98874)
		{
			fVar1 = 55f;
		}
	}
	if (Global_98875 > 0)
	{
		if (Global_98892 == Global_98875)
		{
			fVar2 = 10f;
		}
	}
	if (Global_98876 > 0)
	{
		if (Global_98893 == Global_98876)
		{
			fVar3 = 0f;
		}
	}
	if (Global_98877 > 0)
	{
		if (Global_98894 == Global_98877)
		{
			fVar4 = 10f;
		}
	}
	if (Global_98878 > 0)
	{
		if (((Global_98895 == Global_98878 || (Global_98878 * 10 / Global_98895) < 41) || Global_98895 > Global_98881) || Global_98895 == Global_98881)
		{
			if (!unk_0xB519E5386FBF69E5(Global_99155.f_8808.f_3856, 14))
			{
				if (Global_98895 == Global_98878)
				{
					unk_0xE4A025C0D4FCCAFA(joaat("num_rndevents_completed"), Global_98878, 0);
					unk_0x9956FB0E4B50ECB8(&(Global_99155.f_8808.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_98879 > 0)
	{
		if (Global_98896 == Global_98879)
		{
			fVar6 = 15f;
		}
	}
	if (Global_98880 > 0)
	{
		if (Global_98897 == Global_98880)
		{
			fVar7 = 5f;
		}
	}
	Global_99155.f_8808.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_98895 > Global_98881 || Global_98895 == Global_98881)
	{
		iVar9 = Global_98881;
	}
	else
	{
		iVar9 = Global_98895;
	}
	unk_0x39DEDCCD70293F58(joaat("num_missions_completed"), Global_98891, 1);
	unk_0x39DEDCCD70293F58(joaat("num_missions_available"), Global_98874, 1);
	unk_0x39DEDCCD70293F58(joaat("num_minigames_completed"), Global_98892, 1);
	unk_0x39DEDCCD70293F58(joaat("num_minigames_available"), Global_98875, 1);
	unk_0x39DEDCCD70293F58(joaat("num_oddjobs_completed"), Global_98893, 1);
	unk_0x39DEDCCD70293F58(joaat("num_oddjobs_available"), Global_98876, 1);
	unk_0x39DEDCCD70293F58(joaat("num_rndpeople_completed"), Global_98894, 1);
	unk_0x39DEDCCD70293F58(joaat("num_rndpeople_available"), Global_98877, 1);
	unk_0x39DEDCCD70293F58(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x39DEDCCD70293F58(joaat("num_rndevents_available"), Global_98881, 1);
	unk_0x39DEDCCD70293F58(joaat("num_misc_completed"), (Global_98897 + Global_98896), 1);
	unk_0x39DEDCCD70293F58(joaat("num_misc_available"), (Global_98880 + Global_98879), 1);
	Global_98898 = (Global_98891 * 100 / Global_98874);
	Global_98900 = ((Global_98893 + Global_98892) * 100 / (Global_98876 + Global_98875));
	Global_98899 = ((Global_98894 + iVar9) * 100 / (Global_98877 + Global_98881));
	Global_98901 = ((Global_98896 + Global_98897) * 100 / (Global_98879 + Global_98880));
	unk_0xFF6A346D78DD4938(joaat("total_progress_made"), Global_99155.f_8808.f_3853, 1);
	unk_0x39DEDCCD70293F58(joaat("percent_story_missions"), Global_98898, 1);
	unk_0x39DEDCCD70293F58(joaat("percent_ambient_missions"), Global_98899, 1);
	unk_0x39DEDCCD70293F58(joaat("percent_oddjobs"), Global_98900, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_99155.f_8808.f_3853))
	{
		func_35(13, unk_0xF34EE736CF047844(Global_99155.f_8808.f_3853));
	}
	if (!unk_0x11ED867E5A37BE49())
	{
		if (!Global_69236)
		{
			if (func_34() == 2 == 0 && !unk_0x00AAD79B42B3E036())
			{
				if (unk_0x472ED84D47326927())
				{
					Global_98889 = 0;
				}
				if (!Global_55578)
				{
					func_28();
				}
			}
		}
	}
}

int func_34()
{
	return Global_25034;
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
	iVar0 = unk_0x674FE6A5C8163DA5(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x613BED2AD524D24F(iParam0, iParam1);
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
	
	if (iParam2 == -1)
	{
		iParam2 = func_37();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0x489ECBF72F3DA469((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xA689D636E73D305A((iParam0 - 0)) * 64);
		iVar0 = unk_0x4CD737F9D5037B5E(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x489ECBF72F3DA469((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xA689D636E73D305A((iParam0 - 192)) * 64);
		iVar0 = unk_0x4CD737F9D5037B5E(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x489ECBF72F3DA469((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xA689D636E73D305A((iParam0 - 513)) * 64);
		iVar0 = unk_0x4CD737F9D5037B5E(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x489ECBF72F3DA469((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xA689D636E73D305A((iParam0 - 705)) * 64);
		iVar0 = unk_0x4CD737F9D5037B5E(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0xB4BF922F35D7655F((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xA689D636E73D305A((iParam0 - 3111)) * 64);
		iVar0 = unk_0x4CD737F9D5037B5E(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0xB4BF922F35D7655F((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xA689D636E73D305A((iParam0 - 2919)) * 64);
		iVar0 = unk_0x4CD737F9D5037B5E(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x2655E62E609CEE1A((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xA689D636E73D305A((iParam0 - 4207)) * 64);
		iVar0 = unk_0x4CD737F9D5037B5E(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x2655E62E609CEE1A((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xA689D636E73D305A((iParam0 - 4335)) * 64);
		iVar0 = unk_0x4CD737F9D5037B5E(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0x2655E62E609CEE1A((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0xA689D636E73D305A((iParam0 - 6029)) * 64);
		iVar0 = unk_0x4CD737F9D5037B5E(uVar10, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_37()
{
	return Global_1312746;
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
		unk_0x9956FB0E4B50ECB8(&(Global_99155.f_24859.f_150[iVar1]), iVar0);
	}
}

void func_41(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_42(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_42(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x04E7E853E31F41A3(sParam0, ""))
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
	while (iVar0 < Global_99155.f_24859.f_145)
	{
		if (unk_0x04E7E853E31F41A3(&(Global_99155.f_24859[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_99155.f_24859.f_145 < 9)
	{
		StringCopy(&(Global_99155.f_24859[Global_99155.f_24859.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_99155.f_24859[Global_99155.f_24859.f_145 /*16*/].f_4), sParam1, 16);
		Global_99155.f_24859[Global_99155.f_24859.f_145 /*16*/].f_8 = (unk_0x9D40BBF80D8F5E8A() + iParam3);
		Global_99155.f_24859[Global_99155.f_24859.f_145 /*16*/].f_9 = iParam5;
		Global_99155.f_24859[Global_99155.f_24859.f_145 /*16*/].f_11 = iParam6;
		Global_99155.f_24859[Global_99155.f_24859.f_145 /*16*/].f_12 = uParam2;
		Global_99155.f_24859[Global_99155.f_24859.f_145 /*16*/].f_13 = iParam7;
		Global_99155.f_24859[Global_99155.f_24859.f_145 /*16*/].f_14 = iParam8;
		Global_99155.f_24859[Global_99155.f_24859.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_99155.f_24859[Global_99155.f_24859.f_145 /*16*/].f_10 = ((unk_0x9D40BBF80D8F5E8A() + iParam3) + iParam4);
		}
		else
		{
			Global_99155.f_24859[Global_99155.f_24859.f_145 /*16*/].f_10 = -1;
		}
		Global_99155.f_24859.f_145++;
		func_43();
	}
}

void func_43()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_99155.f_24859.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_99155.f_24859.f_145)
	{
		if (unk_0xB519E5386FBF69E5(Global_99155.f_24859[iVar0 /*16*/].f_11, 0))
		{
			if (Global_99155.f_24859[iVar0 /*16*/].f_12 > Global_99155.f_24859.f_146[0])
			{
				Global_99155.f_24859.f_146[0] = Global_99155.f_24859[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xB519E5386FBF69E5(Global_99155.f_24859[iVar0 /*16*/].f_11, 1))
		{
			if (Global_99155.f_24859[iVar0 /*16*/].f_12 > Global_99155.f_24859.f_146[1])
			{
				Global_99155.f_24859.f_146[1] = Global_99155.f_24859[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xB519E5386FBF69E5(Global_99155.f_24859[iVar0 /*16*/].f_11, 2))
		{
			if (Global_99155.f_24859[iVar0 /*16*/].f_12 > Global_99155.f_24859.f_146[2])
			{
				Global_99155.f_24859.f_146[2] = Global_99155.f_24859[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_44()
{
	func_12();
	switch (Global_99155.f_1750.f_539.f_3549)
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
		return unk_0xB519E5386FBF69E5(Global_99155.f_24859.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_46(int iParam0, int iParam1)
{
	unk_0x9956FB0E4B50ECB8(&(Global_99155.f_29444.f_8[iParam0]), iParam1);
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
	
	StringCopy(&Var0, unk_0x959E7FA37C0D0892(), 64);
	uVar16 = func_49(Var0);
	return uVar16;
}

int func_49(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0xC7C6DDDE84A8E734(&cParam0))
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
	
	bVar0 = unk_0x3CBB06ED9434F6B3();
	if (!Global_69235)
	{
		if (!bVar0)
		{
			Global_69235 = 1;
		}
	}
	return bVar0;
}

void func_52(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0xB14E3E3C57569BDB(unk_0x3F80C6638E3A1A90());
		unk_0x7CBBF6C9E2EED3EA(unk_0x3F80C6638E3A1A90(), 1);
		unk_0x30584A18ECB7ED72(unk_0x3F80C6638E3A1A90(), 1);
		func_58(1);
		unk_0x86F04B1FEFFA59AF();
		unk_0x7D5D106C0BC41E4F();
		if (Global_14413.f_1 > 3)
		{
			if (unk_0xD6F17BA188A65E8F())
			{
				unk_0xDA09A6E60FE9645E(0);
			}
			if (!func_8())
			{
				Global_14413.f_1 = 3;
			}
			Global_15712 = 5;
		}
		func_57(1, iParam3, iParam2, 0);
		Global_55584 = 1;
		Global_67890 = 1;
		Global_69234 = 1;
	}
	else
	{
		func_58(0);
		unk_0x77B6DFDC1F6D6D54();
		Global_55584 = 0;
		if (bParam1)
		{
			unk_0xDD8068D05776246D();
		}
		unk_0x7CBBF6C9E2EED3EA(unk_0x3F80C6638E3A1A90(), 0);
		unk_0x30584A18ECB7ED72(unk_0x3F80C6638E3A1A90(), 0);
		func_57(0, iParam3, iParam2, 0);
		if (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()) && !func_53(unk_0x3F80C6638E3A1A90()))
		{
			unk_0x2EF7A8CB89D363F6(unk_0xE7869D5D7816A9B6(), 0);
		}
		Global_69234 = 0;
	}
}

int func_53(int iParam0)
{
	if (func_55(iParam0, 0))
	{
		return 1;
	}
	if (func_54())
	{
		if (iParam0 == unk_0x3F80C6638E3A1A90())
		{
			return 1;
		}
	}
	if (unk_0xB519E5386FBF69E5(Global_2416794[iParam0 /*303*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_54()
{
	return unk_0xB519E5386FBF69E5(Global_2359301, 3);
}

bool func_55(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x3F80C6638E3A1A90())
	{
		bVar0 = func_56(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1586079[iParam0 /*408*/].f_192 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xD18C3CF631455087(iParam0))
		{
			bVar0 = unk_0x2CC717AC6CF51F8F(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_56(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_37();
	}
	if (Global_1315887[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312740[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_57(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xA78EA29AC2FFBADE())
	{
		if (unk_0xE5021B3C1EC84FDE() != iParam0 && uParam2)
		{
			unk_0xA0DB703A9F74EAE8(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_58(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x9956FB0E4B50ECB8(&Global_2283, 13);
	}
	else
	{
		unk_0x73817D396768E4C6(&Global_2283, 13);
	}
}

int func_59(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0x9DAD36BD64512352())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x76B2D234F1895632(unk_0xE7869D5D7816A9B6()))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
	{
		if (!unk_0x471E33531AEA977D(unk_0xE7869D5D7816A9B6()))
		{
			return 0;
		}
		iVar0 = unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0);
		if (bParam0)
		{
			if (unk_0x76B2D234F1895632(iVar0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0x76B2D234F1895632(iVar0))
			{
				if (unk_0xBD6B21D725712BDE(iVar0, -1) != unk_0xE7869D5D7816A9B6())
				{
					return 0;
				}
			}
		}
		if (!unk_0x76B2D234F1895632(iVar0))
		{
			if (unk_0x58D00CB831F3E1D3(iVar0) < 0.95f || unk_0x58D00CB831F3E1D3(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0x69CFD69005B7F5D7(unk_0x3F80C6638E3A1A90()))
	{
		return 0;
	}
	if (!unk_0x380205D43AE9485A(unk_0x3F80C6638E3A1A90()))
	{
		return 0;
	}
	return 1;
}

void func_60()
{
	if (!unk_0x76B2D234F1895632(iLocal_59) && !unk_0x76B2D234F1895632(iLocal_55))
	{
		if (!iLocal_117)
		{
			if (unk_0x8AF655CC5761C7A2(unk_0xE7869D5D7816A9B6(), iLocal_59, 0) && unk_0x8AF655CC5761C7A2(iLocal_55, iLocal_59, 0))
			{
				iLocal_117 = 1;
				if (unk_0xD11595488376CB53(uLocal_319))
				{
					unk_0x5B62CAB9B0D6ABF1(&uLocal_319);
				}
				if (iLocal_122 && !bLocal_118)
				{
					if (!unk_0xD11595488376CB53(uLocal_320))
					{
						uLocal_320 = func_23(Local_67, 1);
					}
				}
				if (!func_64())
				{
				}
			}
		}
		if (!iLocal_117 && !iLocal_119)
		{
			if (unk_0x8AF655CC5761C7A2(unk_0xE7869D5D7816A9B6(), iLocal_59, 0))
			{
				if (!unk_0x8AF655CC5761C7A2(iLocal_55, iLocal_59, 0))
				{
					if (!func_64())
					{
					}
					if (unk_0xD11595488376CB53(uLocal_319))
					{
						unk_0x5B62CAB9B0D6ABF1(&uLocal_319);
					}
					if (!unk_0xD11595488376CB53(uLocal_319))
					{
						uLocal_319 = func_63(iLocal_55, 0, 145);
						unk_0x4ADC112587E95B61(uLocal_319, 1);
					}
					iLocal_117 = 0;
					iLocal_119 = 1;
				}
			}
		}
		if (iLocal_117)
		{
			if (!unk_0x8AF655CC5761C7A2(unk_0xE7869D5D7816A9B6(), iLocal_59, 0))
			{
				if (!func_64())
				{
				}
				if (!unk_0xD11595488376CB53(uLocal_319))
				{
					uLocal_319 = func_61(iLocal_59, 0, 0);
					unk_0x4ADC112587E95B61(uLocal_319, 1);
				}
				if (unk_0xD11595488376CB53(uLocal_320))
				{
					unk_0x5B62CAB9B0D6ABF1(&uLocal_320);
				}
				iLocal_117 = 0;
			}
			if (!unk_0x8AF655CC5761C7A2(unk_0xE7869D5D7816A9B6(), iLocal_59, 0) && !unk_0x8AF655CC5761C7A2(iLocal_55, iLocal_59, 0))
			{
				if (!func_64())
				{
				}
				if (!unk_0xD11595488376CB53(uLocal_319))
				{
					uLocal_319 = func_61(iLocal_59, 0, 0);
					unk_0x4ADC112587E95B61(uLocal_319, 1);
				}
				if (unk_0xD11595488376CB53(uLocal_320))
				{
					unk_0x5B62CAB9B0D6ABF1(&uLocal_320);
				}
				iLocal_117 = 0;
			}
		}
	}
}

int func_61(int iParam0, bool bParam1, bool bParam2)
{
	return func_62(iParam0, !bParam1, bParam2);
}

int func_62(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xD51CFE69539DB6D8(iParam0))
	{
		return 0;
	}
	uVar0 = unk_0xF800CF9298ABC708(iParam0);
	if (unk_0x8C1ED5BB2888BA25(iParam0))
	{
		unk_0xFC630C7120A34CE4(uVar0, func_24(unk_0x00AAD79B42B3E036(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x4ADC112587E95B61(uVar0, bParam1);
		}
		else
		{
			unk_0xA887303978A245B8(uVar0, 2);
		}
	}
	else if (unk_0x41B17741CACC905E(iParam0))
	{
		unk_0xFC630C7120A34CE4(uVar0, func_24(unk_0x00AAD79B42B3E036(), 0.7f, 0.7f));
		unk_0x4ADC112587E95B61(uVar0, bParam1);
	}
	else if (unk_0xC2F1E05878620398(iParam0))
	{
		unk_0xFC630C7120A34CE4(uVar0, func_24(unk_0x00AAD79B42B3E036(), 0.7f, 0.7f));
	}
	return uVar0;
}

var func_63(int iParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_62(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xD11595488376CB53(uVar0)) && unk_0x33FD8E2E139F4FAC(&(Global_99155.f_32499[iParam2 /*29*/].f_3)))
	{
		unk_0x227FC39A4871C64F(uVar0, &(Global_99155.f_32499[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_64()
{
	if (Global_15712 != 0 || unk_0xF0A330A29F97AA7E())
	{
		return 1;
	}
	return 0;
}

void func_65()
{
	if (unk_0xD51CFE69539DB6D8(iLocal_55))
	{
		if (!unk_0xAF437D7C802AB246(iLocal_55))
		{
			if (unk_0x0E6C083BC5101C8B(iLocal_55, unk_0xE7869D5D7816A9B6(), 4f, 4f, 4f, 0, 1, 0))
			{
				if ((!unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0) && !unk_0x51374A0BB2871E6E(iLocal_55, 0)) || unk_0xD7F7FE7C1017323D(unk_0xE7869D5D7816A9B6()))
				{
					if (unk_0xD11595488376CB53(uLocal_321))
					{
						unk_0x5B62CAB9B0D6ABF1(&uLocal_321);
						if (!unk_0xD11595488376CB53(uLocal_320))
						{
							uLocal_320 = func_23(Local_67, 1);
						}
					}
				}
				else if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0) && unk_0x51374A0BB2871E6E(iLocal_55, 0))
				{
					if (unk_0xD11595488376CB53(uLocal_321))
					{
						unk_0x5B62CAB9B0D6ABF1(&uLocal_321);
						if (!unk_0xD11595488376CB53(uLocal_320))
						{
							uLocal_320 = func_23(Local_67, 1);
						}
					}
				}
				else if (unk_0xD11595488376CB53(uLocal_320))
				{
					unk_0x5B62CAB9B0D6ABF1(&uLocal_320);
					if (!unk_0xD11595488376CB53(uLocal_321))
					{
						uLocal_321 = func_63(iLocal_55, 0, 145);
					}
				}
				if (unk_0x8AA6E648EA73FF4C(unk_0xE7869D5D7816A9B6()))
				{
				}
			}
			else if (unk_0xD11595488376CB53(uLocal_320))
			{
				unk_0x5B62CAB9B0D6ABF1(&uLocal_320);
				if (!unk_0xD11595488376CB53(uLocal_321))
				{
					uLocal_321 = func_63(iLocal_55, 0, 145);
				}
			}
			if (!unk_0x6CCCE00683E8FD6D(iLocal_55))
			{
				if (!unk_0x0E6C083BC5101C8B(unk_0xE7869D5D7816A9B6(), iLocal_55, 10f, 10f, 10f, 0, 1, 0))
				{
					unk_0xFA2C5C2D054C888E(iLocal_55);
					unk_0x560F88FE1A93011B(iLocal_55, func_66());
					unk_0x0B3D58B4B3F33CE5(iLocal_55, 1);
					unk_0xD8F094CB1BFE6F88(iLocal_55, 0);
				}
				if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 1))
				{
					unk_0xFA2C5C2D054C888E(iLocal_55);
					unk_0x560F88FE1A93011B(iLocal_55, func_66());
					unk_0x0B3D58B4B3F33CE5(iLocal_55, 1);
					unk_0xD8F094CB1BFE6F88(iLocal_55, 0);
				}
			}
		}
	}
}

var func_66()
{
	return unk_0xF6138D85451616EC(unk_0xBFAE5F9DEC53DAE2());
}

void func_67()
{
	if (!unk_0xAF437D7C802AB246(iLocal_55))
	{
		if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 1))
		{
			if (!func_70())
			{
				if (unk_0x6CCCE00683E8FD6D(iLocal_55))
				{
					unk_0x46D4C1D7588933FB(iLocal_55);
				}
				if (unk_0xC47857E5E74EA5AF(iLocal_55, 1227113341) != 1 && unk_0xC47857E5E74EA5AF(iLocal_55, 1227113341) != 0)
				{
					unk_0xD0153915878AE371(iLocal_55, unk_0xE7869D5D7816A9B6(), -1, 6f, 1073741824, 1073741824, 0);
				}
				if (unk_0x51374A0BB2871E6E(iLocal_55, 0))
				{
					unk_0xCD7A5BCC47D00FB2(iLocal_55, 0, 0);
				}
				if (!iLocal_125)
				{
					if (!func_64())
					{
						iLocal_125 = 1;
						if (func_69())
						{
							func_68(&uLocal_136, "stagdau", "stagd_nogood", "stagd_nogood_1", 4, 0, 0);
						}
						else
						{
							func_68(&uLocal_136, "stagdau", "stagd_nogood", "stagd_nogood_2", 4, 0, 0);
						}
					}
				}
			}
			else
			{
				iLocal_125 = 0;
				if (((unk_0xC47857E5E74EA5AF(iLocal_55, 1227113341) == 1 || unk_0xC47857E5E74EA5AF(iLocal_55, 1227113341) == 0) || unk_0xC47857E5E74EA5AF(iLocal_55, 242628503) == 1) || unk_0xC47857E5E74EA5AF(iLocal_55, 242628503) == 0)
				{
					unk_0xFA2C5C2D054C888E(iLocal_55);
					if (!unk_0x6CCCE00683E8FD6D(iLocal_55))
					{
						unk_0x560F88FE1A93011B(iLocal_55, func_66());
						unk_0x0B3D58B4B3F33CE5(iLocal_55, 1);
						unk_0xD8F094CB1BFE6F88(iLocal_55, 0);
					}
				}
			}
		}
		else if (((!unk_0x6CCCE00683E8FD6D(iLocal_55) && !unk_0x51374A0BB2871E6E(iLocal_55, 0)) && unk_0xC47857E5E74EA5AF(iLocal_55, 242628503) != 1) && unk_0xC47857E5E74EA5AF(iLocal_55, 242628503) != 0)
		{
			unk_0x560F88FE1A93011B(iLocal_55, func_66());
			unk_0x0B3D58B4B3F33CE5(iLocal_55, 1);
			unk_0xD8F094CB1BFE6F88(iLocal_55, 0);
		}
	}
}

int func_68(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_20(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15719 = 0;
	Global_15726 = 0;
	Global_15721 = 0;
	Global_16703 = 1;
	Global_16705 = 0;
	Global_16709 = 0;
	StringCopy(&Global_16716, sParam3, 24);
	Global_2621441 = 0;
	return func_5(sParam2, iParam4, 0);
}

int func_69()
{
	if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 1))
	{
		if (unk_0xC45A34912542C4EB(unk_0x03291915DC767232(unk_0xE7869D5D7816A9B6()), 1))
		{
			if ((unk_0x48E903ADD98A5FDD(unk_0x1B2DC87EFB36DF80(unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 1))) || unk_0x07C6F7E084F6A97E(unk_0x1B2DC87EFB36DF80(unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 1)))) || unk_0x7BB0AC45FF0A3A28(unk_0x1B2DC87EFB36DF80(unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 1))))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_70()
{
	if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
	{
		if (unk_0xC45A34912542C4EB(unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0), 0))
		{
			if (((((!unk_0x8AA6E648EA73FF4C(unk_0xE7869D5D7816A9B6()) && !unk_0x523C6F050AF90E4F(unk_0xE7869D5D7816A9B6())) && !unk_0x8BFF7CA791EED675(unk_0xE7869D5D7816A9B6())) && !unk_0x32C78E85F7C35A47(unk_0xE7869D5D7816A9B6())) && !unk_0x7D1C9ABC64D56FA0(unk_0xE7869D5D7816A9B6())) && !unk_0x63E25E4341FF2308(unk_0xE7869D5D7816A9B6(), joaat("rhino")))
			{
				if (unk_0x25ECA1DD55F6CB7F(unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0)) >= 1)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 1))
	{
		if (unk_0xC45A34912542C4EB(unk_0x811668789F0F4837(unk_0xE7869D5D7816A9B6()), 0))
		{
			if ((((!unk_0xAA65D1F2BF4AAFFB(unk_0x1B2DC87EFB36DF80(unk_0x811668789F0F4837(unk_0xE7869D5D7816A9B6()))) && !unk_0xFFD2CE10E8C7E77F(unk_0x1B2DC87EFB36DF80(unk_0x811668789F0F4837(unk_0xE7869D5D7816A9B6())))) && !unk_0xD1C57B32C6DE7BB6(unk_0x1B2DC87EFB36DF80(unk_0x811668789F0F4837(unk_0xE7869D5D7816A9B6())))) && !unk_0x437C3632DA4A7584(unk_0x1B2DC87EFB36DF80(unk_0x811668789F0F4837(unk_0xE7869D5D7816A9B6())))) && unk_0x1B2DC87EFB36DF80(unk_0x811668789F0F4837(unk_0xE7869D5D7816A9B6())) != joaat("rhino"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_71(int iParam0, bool bParam1)
{
	bool bVar0;
	
	if (!unk_0xAF437D7C802AB246(iParam0))
	{
		bVar0 = false;
		if (bParam1)
		{
			if (unk_0x471E33531AEA977D(unk_0xE7869D5D7816A9B6()) && unk_0x471E33531AEA977D(iParam0))
			{
				if (unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0) == unk_0xF0295FF51F2D7803(iParam0, 0))
				{
					bVar0 = true;
				}
			}
		}
		else
		{
			bVar0 = false;
		}
		if (!unk_0x7E7AFACA1C744410(iParam0, unk_0xE7869D5D7816A9B6()))
		{
			if (!bVar0)
			{
				unk_0x6A8BCE61F660B8D0(iParam0, unk_0xE7869D5D7816A9B6(), -1, 2049, 2);
			}
		}
		else if (bVar0)
		{
			if (!unk_0x14536F3E8414BD5B(iParam0))
			{
				unk_0x44C7AD5B54E267EE(iParam0);
			}
		}
	}
}

void func_72()
{
	if (unk_0xD51CFE69539DB6D8(iLocal_55))
	{
		if (!unk_0x76B2D234F1895632(iLocal_55) && !unk_0x76B2D234F1895632(unk_0xE7869D5D7816A9B6()))
		{
			if (func_86("stagd_chape_1"))
			{
				if (!unk_0xD11595488376CB53(uLocal_320))
				{
					uLocal_320 = func_23(Local_67, 1);
				}
				iLocal_122 = 1;
			}
			if (func_86("stagd_chape_3"))
			{
				unk_0x44C7AD5B54E267EE(unk_0xE7869D5D7816A9B6());
				if (!unk_0xAF437D7C802AB246(iLocal_55))
				{
					if (unk_0x51374A0BB2871E6E(iLocal_55, 0))
					{
						unk_0x94026C1D1DB14225(&uLocal_113);
						unk_0x44C7AD5B54E267EE(0);
						unk_0x03D362DF027AD9D7(0, 30600);
						unk_0x911ECBCE73F8EC3F(uLocal_113);
						unk_0xC2C4A3A9FF2FBFFF(iLocal_55, uLocal_113);
						unk_0x33A90AD8FA327B72(&uLocal_113);
					}
				}
			}
			if (unk_0x0E6C083BC5101C8B(unk_0xE7869D5D7816A9B6(), iLocal_55, 13.5f, 13.5f, 13.5f, 0, 1, 0) && unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
			{
				if (unk_0x8AF655CC5761C7A2(iLocal_55, unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0), 0))
				{
					if (iLocal_49 == 0)
					{
						if (unk_0xC9D9444186B5A374() > 5000)
						{
							if (iLocal_130 == 0)
							{
								if (!func_64())
								{
									func_85();
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
								if (!func_64())
								{
									unk_0xE242D0D27B122FAC(1);
									unk_0xA8010B7497A9230B(1);
									iLocal_130++;
									unk_0x5AE11BC36633DE4E(0);
								}
							}
						}
						if (unk_0xC9D9444186B5A374() > 2500)
						{
							if (iLocal_130 == 2)
							{
								if (!func_64())
								{
									func_85();
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
							if (!func_64())
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
									if (!func_64())
									{
										iLocal_130++;
									}
								}
							}
						}
						if (!unk_0x3761EA7F8628B81A(unk_0xE7869D5D7816A9B6(), Local_87, 150f, 150f, 150f, 0, 1, 0))
						{
							if (iLocal_303 == 0)
							{
								if (iLocal_307 == func_73(func_74()) + 11)
								{
									if (!func_64())
									{
										func_4(&uLocal_136, "stagdau", "stagd_time10", 4, 0, 0, 0);
										iLocal_303 = 1;
									}
								}
							}
							if (iLocal_303 < 2)
							{
								if (iLocal_307 == func_73(func_74()) + 10)
								{
									if (!func_64())
									{
										func_4(&uLocal_136, "stagdau", "stagd_time9", 4, 0, 0, 0);
										iLocal_303 = 2;
									}
								}
							}
							if (iLocal_303 < 3)
							{
								if (iLocal_307 == func_73(func_74()) + 9)
								{
									if (!func_64())
									{
										func_4(&uLocal_136, "stagdau", "stagd_time8", 4, 0, 0, 0);
										iLocal_303 = 3;
									}
								}
							}
							if (iLocal_303 < 4)
							{
								if (iLocal_307 == func_73(func_74()) + 8)
								{
									if (!func_64())
									{
										func_4(&uLocal_136, "stagdau", "stagd_time7", 4, 0, 0, 0);
										iLocal_303 = 4;
									}
								}
							}
							if (iLocal_303 < 5)
							{
								if (iLocal_307 == func_73(func_74()) + 7)
								{
									if (!func_64())
									{
										iLocal_303 = 5;
									}
								}
							}
							if (iLocal_303 < 6)
							{
								if (iLocal_307 == func_73(func_74()) + 6)
								{
									if (!func_64())
									{
										iLocal_303 = 6;
									}
								}
							}
							if (iLocal_303 < 7)
							{
								if (iLocal_307 == func_73(func_74()) + 5)
								{
									if (!func_64())
									{
										iLocal_303 = 7;
									}
								}
							}
							if (iLocal_303 < 8)
							{
								if (iLocal_307 == func_73(func_74()) + 4)
								{
									if (!func_64())
									{
										iLocal_303 = 8;
									}
								}
							}
							if (iLocal_303 < 9)
							{
								if (iLocal_307 == func_73(func_74()) + 3)
								{
									if (!func_64())
									{
										func_4(&uLocal_136, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_303 = 9;
									}
								}
							}
							if (iLocal_303 < 10)
							{
								if (iLocal_307 == func_73(func_74()) + 2)
								{
									if (!func_64())
									{
										func_4(&uLocal_136, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_303 = 10;
									}
								}
							}
							if (iLocal_303 < 11)
							{
								if (iLocal_307 == func_73(func_74()) + 1)
								{
									if (!func_64())
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
								if (iLocal_307 == func_73(func_74()) + 6)
								{
									if (!func_64())
									{
										func_4(&uLocal_136, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_303++;
									}
								}
							}
							if (iLocal_303 < 7)
							{
								if (iLocal_307 == func_73(func_74()) + 5)
								{
									if (!func_64())
									{
										func_4(&uLocal_136, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_303++;
									}
								}
							}
							if (iLocal_303 < 8)
							{
								if (iLocal_307 == func_73(func_74()) + 4)
								{
									if (!func_64())
									{
										func_4(&uLocal_136, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_303++;
									}
								}
							}
							if (iLocal_303 < 9)
							{
								if (iLocal_307 == func_73(func_74()) + 3)
								{
									if (!func_64())
									{
										func_4(&uLocal_136, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_303++;
									}
								}
							}
							if (iLocal_303 < 10)
							{
								if (iLocal_307 == func_73(func_74()) + 2)
								{
									if (!func_64())
									{
										func_4(&uLocal_136, "stagdau", "stagd_stress", 4, 0, 0, 0);
										iLocal_303++;
									}
								}
							}
							if (iLocal_303 < 11)
							{
								if (iLocal_307 == func_73(func_74()) + 1)
								{
									if (!func_64())
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

int func_73(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_74()
{
	var uVar0;
	
	func_84(&uVar0, unk_0x0CE219089BDB83C5());
	func_83(&uVar0, unk_0x1B24A2CA27443F7B());
	func_82(&uVar0, unk_0x7C833E3C6EEE41E0());
	func_77(&uVar0, unk_0x2DA3502053F9E535());
	func_76(&uVar0, unk_0xEB4EA596232DA76E());
	func_75(&uVar0, unk_0xB99227ECC84A576C());
	return uVar0;
}

void func_75(var uParam0, int iParam1)
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

void func_76(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_77(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_81(*uParam0);
	iVar1 = func_79(*uParam0);
	if (iParam1 < 1 || iParam1 > func_78(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

int func_78(int iParam0, int iParam1)
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

int func_79(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_80(unk_0xB519E5386FBF69E5(iParam0, 31), -1, 1)) + 2011;
}

int func_80(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_81(int iParam0)
{
	return iParam0 & 15;
}

void func_82(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_83(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_84(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

void func_85()
{
	Global_14578 = 0;
	func_19();
}

int func_86(char* sParam0)
{
	var uVar0;
	
	if (func_64())
	{
		MemCopy(&uVar0, {func_87()}, 4);
		if (unk_0x04E7E853E31F41A3(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

struct<6> func_87()
{
	struct<6> Var0;
	int iVar6;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15712 == 4)
	{
		iVar6 = unk_0x465F47E0FBFEFAEE();
		iVar6 = (iVar6 + Global_16722);
		if (iVar6 > -1)
		{
			return Global_14580[iVar6 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

void func_88()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (unk_0xD51CFE69539DB6D8(iLocal_55))
	{
		if (!unk_0x76B2D234F1895632(iLocal_55))
		{
			if (!unk_0xAF437D7C802AB246(iLocal_55))
			{
				if (!iLocal_129 && bLocal_118)
				{
					unk_0x8CCCC48313B0F20F(0, 75, 1);
					unk_0x8CCCC48313B0F20F(0, 80, 1);
					iVar0 = unk_0x5B93518F6779B7F5();
					if (iVar0 != 0)
					{
						iVar1 = unk_0x08EE17D4722097C7(iVar0);
						if (iVar1 != 4)
						{
							unk_0x8CCCC48313B0F20F(0, 79, 1);
							unk_0x8CCCC48313B0F20F(0, 286, 1);
							unk_0x8CCCC48313B0F20F(0, 287, 1);
							unk_0x8CCCC48313B0F20F(0, 26, 1);
							unk_0x8CCCC48313B0F20F(0, 273, 1);
							unk_0x8CCCC48313B0F20F(0, 4, 1);
							unk_0x8CCCC48313B0F20F(0, 270, 1);
							unk_0x8CCCC48313B0F20F(0, 5, 1);
							unk_0x8CCCC48313B0F20F(0, 1, 1);
							unk_0x8CCCC48313B0F20F(0, 271, 1);
							unk_0x8CCCC48313B0F20F(0, 6, 1);
							unk_0x8CCCC48313B0F20F(0, 2, 1);
							unk_0x8CCCC48313B0F20F(0, 272, 1);
							unk_0x8CCCC48313B0F20F(0, 3, 1);
						}
					}
					if (unk_0x22E902D6AF27E232(iLocal_55, -2002.008f, 455.58f, 101.0381f, -2009.761f, 453.2027f, 105.9135f, 12.4375f, 0, 1, 0) || unk_0x83666F9FB8FEBD4B() > 5000)
					{
						iLocal_129 = 1;
						unk_0xC1B1E9A034A63A62(0);
						func_52(1, 1, 1, 0);
						unk_0x1D208E4A4E1D4FFE(1);
						unk_0xE242D0D27B122FAC(0);
						unk_0xA8010B7497A9230B(0);
						unk_0x8FE59DE2329CBE64(unk_0x3F80C6638E3A1A90(), 0, 0);
						unk_0xD016326278B5D42B(joaat("superd"), 3);
						while (!unk_0xE5ED4BE9950F1B30(joaat("superd")))
						{
							unk_0x4EDE34FBADD967A6(0);
						}
						uLocal_134 = unk_0xBC7920E419FEAF62("DEFAULT_SCRIPTED_CAMERA", -2014.228f, 456.4961f, 103.5524f, -6.509435f, -0.037031f, -95.98762f, 29.00143f, 0, 2);
						uLocal_135 = unk_0xBC7920E419FEAF62("DEFAULT_SCRIPTED_CAMERA", -2014.334f, 456.418f, 103.3152f, -6.198685f, -0.037031f, -100.5736f, 29.00143f, 0, 2);
						unk_0x657EEE601EEC4152(uLocal_134, "HAND_SHAKE", 0.25f);
						unk_0x657EEE601EEC4152(uLocal_135, "HAND_SHAKE", 0.25f);
						unk_0x63498CF6CF35C6A2(uLocal_134, 1);
						unk_0x538689EF05955EF7(1, 0, 3000, 1, 0, 0);
						unk_0x4EDE34FBADD967A6(1000);
						unk_0x7D333E815920766B(uLocal_135, uLocal_134, 4000, 1, 1);
						unk_0x538689EF05955EF7(1, 0, 3000, 1, 0, 0);
						unk_0xC797AB6C3A6482E1(Local_99, 10f, 0, 0, 0, 0, 0);
						if (!unk_0x76B2D234F1895632(unk_0xA0B1717D806F4901()))
						{
							unk_0x1E983D1C62BA179E(unk_0xA0B1717D806F4901());
							if (unk_0x3761EA7F8628B81A(unk_0xA0B1717D806F4901(), Local_99, 8f, 8f, 8f, 0, 1, 0))
							{
								iLocal_133 = unk_0xA0B1717D806F4901();
								unk_0x20BB4B94CC6DDC9A(iLocal_133, 1, 0);
								unk_0x9E55BD45B84E7BDC(&iLocal_133);
							}
						}
						if (!unk_0x76B2D234F1895632(iLocal_59))
						{
							unk_0x18F90CF5D756C783(iLocal_59, 1);
							if (!unk_0xD11595488376CB53(uLocal_319))
							{
								uLocal_319 = func_61(iLocal_59, 0, 0);
								unk_0x4ADC112587E95B61(uLocal_319, true);
							}
						}
						iLocal_117 = 0;
					}
				}
				if (iLocal_129 && unk_0xCF686B56FD5328B5(uLocal_134))
				{
					if (unk_0x83666F9FB8FEBD4B() > 5700 && !iLocal_317)
					{
						if ((unk_0xD33337101FE7D2FE(unk_0xE7869D5D7816A9B6()) && unk_0xF19E031C976C0F00() == 4) || (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0) && unk_0x96A11F2A7C8A4DB5() == 4))
						{
							unk_0xCD0E4FEA8B60FCA3("CamPushInNeutral", 0, 0);
							unk_0xCC18B241D266EF14(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
							iLocal_317 = 1;
						}
					}
					if (unk_0x83666F9FB8FEBD4B() > 6000)
					{
						if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
						{
							unk_0xCD7A5BCC47D00FB2(unk_0xE7869D5D7816A9B6(), 0, 0);
						}
						unk_0x8FE59DE2329CBE64(unk_0x3F80C6638E3A1A90(), 1, 0);
						unk_0xE242D0D27B122FAC(1);
						unk_0xA8010B7497A9230B(1);
						func_52(0, 1, 1, 0);
						unk_0x63498CF6CF35C6A2(uLocal_134, 0);
						unk_0x538689EF05955EF7(0, 0, 3000, 1, 0, 0);
						unk_0x74FF6D08DE291367(uLocal_134, 0);
						unk_0xC36FD2B6875CA6EA(0);
					}
				}
				if (unk_0x3761EA7F8628B81A(unk_0xE7869D5D7816A9B6(), -2201.417f, 4296.06f, 47.5076f, 100f, 100f, 100f, 0, 1, 0))
				{
					unk_0xC797AB6C3A6482E1(Local_87, 5f, 0, 0, 0, 0, 0);
				}
			}
			if (!bLocal_123)
			{
				if (unk_0x3761EA7F8628B81A(unk_0xE7869D5D7816A9B6(), Local_103, 100f, 100f, 100f, 0, 1, 0))
				{
					unk_0x801429C020C467BA(joaat("ig_bestmen"));
					if (unk_0x5053BF6D5604065B(joaat("ig_bestmen")))
					{
						iLocal_57 = unk_0xA7F4088D9A2629CC(4, joaat("ig_bestmen"), -2202.747f, 4299.008f, 47.4293f, 73.0028f, 1, 1);
						func_89(&uLocal_136, 4, iLocal_57, "BESTMAN", 0, 1);
						unk_0x497AFDFE79EEFE4F(iLocal_57, 0, 0, 0, 0);
						unk_0x690C5239500171FE(iLocal_57, joaat("player"));
						unk_0x9BEE7E791BC4D38B(iLocal_57, 1);
						unk_0x1C26C4B0DAB91B21(iLocal_57, 185, 1);
						unk_0x94026C1D1DB14225(&uLocal_113);
						unk_0x58F62EDF6111D598(0, unk_0xE7869D5D7816A9B6(), -1);
						unk_0x6A8BCE61F660B8D0(0, unk_0xE7869D5D7816A9B6(), -1, 2048, 2);
						unk_0x911ECBCE73F8EC3F(uLocal_113);
						unk_0xC2C4A3A9FF2FBFFF(iLocal_57, uLocal_113);
						unk_0x33A90AD8FA327B72(&uLocal_113);
						bLocal_123 = true;
					}
				}
			}
			if (!bLocal_124)
			{
				if (unk_0x3761EA7F8628B81A(unk_0xE7869D5D7816A9B6(), Local_77, 20f, 20f, 20f, 0, 1, 0))
				{
					func_21();
					if (!func_64())
					{
						func_4(&uLocal_136, "stagdau", "stagd_spot", 4, 0, 0, 0);
						bLocal_124 = true;
					}
				}
			}
			if (((unk_0x22E902D6AF27E232(unk_0xE7869D5D7816A9B6(), Local_70, Local_73, fLocal_76, 0, 1, 0) && unk_0x22E902D6AF27E232(iLocal_55, Local_70, Local_73, fLocal_76, 0, 1, 0)) || (unk_0x3761EA7F8628B81A(iLocal_55, Local_67, 0f, 0f, 2f, 1, 1, 0) && func_59(1, 0, 1))) || bLocal_118)
			{
				switch (iLocal_49)
				{
					case 0:
						unk_0x5B62CAB9B0D6ABF1(&uLocal_320);
						if (!bLocal_118)
						{
							Local_67 = { Local_103 };
							if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
							{
								if (!unk_0x76B2D234F1895632(unk_0xA0B1717D806F4901()))
								{
									unk_0x1B9F8E5CCC384F1E(unk_0xA0B1717D806F4901(), 10.5f, 4, 0);
								}
							}
							if (!unk_0x76B2D234F1895632(iLocal_59))
							{
								iVar2 = unk_0x5B93518F6779B7F5();
								if (iVar2 != 0)
								{
									iVar3 = unk_0x08EE17D4722097C7(iVar2);
									if (iVar3 == 4)
									{
										unk_0x6A8BCE61F660B8D0(unk_0xE7869D5D7816A9B6(), iLocal_55, 5000, 0, 2);
									}
									else
									{
										unk_0x6A8BCE61F660B8D0(unk_0xE7869D5D7816A9B6(), iLocal_59, 5000, 2052, 4);
										unk_0x1A134F7200BE99B1(iLocal_59, 0f, 0f, 0f, 1, -1, 3000, 2000);
									}
								}
							}
							func_21();
							if (!func_64())
							{
								func_4(&uLocal_136, "stagdau", "stagd_wait1", 4, 0, 0, 0);
								if (!unk_0xAF437D7C802AB246(iLocal_55))
								{
									unk_0xFA2C5C2D054C888E(iLocal_55);
									unk_0x94026C1D1DB14225(&uLocal_113);
									unk_0x33E113E52A91C5C3(0, -2013.094f, 460.3515f, 101.8024f, 2f, 20000, 1048576000, 0, 1193033728);
									unk_0x33E113E52A91C5C3(0, Local_99, 3f, 20000, 1048576000, 0, 1193033728);
									unk_0x58F62EDF6111D598(0, unk_0xE7869D5D7816A9B6(), -1);
									unk_0x6A8BCE61F660B8D0(0, unk_0xE7869D5D7816A9B6(), -1, 2048, 2);
									unk_0x911ECBCE73F8EC3F(uLocal_113);
									unk_0xC2C4A3A9FF2FBFFF(iLocal_55, uLocal_113);
									unk_0x33A90AD8FA327B72(&uLocal_113);
									unk_0x8D6671D78D1F569B(iLocal_55, 1);
								}
								bLocal_118 = true;
								unk_0xC1B1E9A034A63A62(0);
							}
						}
						if (!unk_0xAF437D7C802AB246(iLocal_55) && !unk_0x76B2D234F1895632(iLocal_59))
						{
							if ((bLocal_118 && unk_0x3761EA7F8628B81A(iLocal_55, Local_99, 1f, 1f, 1f, 0, 1, 0)) && !unk_0x51374A0BB2871E6E(iLocal_55, 0))
							{
								if (unk_0x6CCCE00683E8FD6D(iLocal_55))
								{
									if (!func_64())
									{
										if (func_11() == 2)
										{
											func_4(&uLocal_136, "stagdau", "stagd_reply", 4, 0, 0, 0);
										}
									}
									unk_0x46D4C1D7588933FB(iLocal_55);
								}
								if (unk_0x51AAB57E2FC16B14(iLocal_55))
								{
									if (!unk_0xAF437D7C802AB246(iLocal_55))
									{
										unk_0x60365B5AF8BF1FFA(iLocal_55, 0, 0);
										unk_0x70EE8EFEE355AD29(iLocal_55, 0, 0);
										unk_0x2EF7A8CB89D363F6(iLocal_55, 1);
										unk_0x2878EC06B3F897A0(iLocal_55, 1);
									}
									if (unk_0x83666F9FB8FEBD4B() > 15000)
									{
										if (!unk_0xAF437D7C802AB246(iLocal_55))
										{
											unk_0x497AFDFE79EEFE4F(iLocal_55, 2, 1, 0, 0);
											unk_0x497AFDFE79EEFE4F(iLocal_55, 0, 0, 1, 0);
											unk_0x497AFDFE79EEFE4F(iLocal_55, 3, 1, 0, 0);
											unk_0x497AFDFE79EEFE4F(iLocal_55, 4, 1, 0, 0);
											unk_0x497AFDFE79EEFE4F(iLocal_55, 11, 0, 0, 0);
											unk_0x60365B5AF8BF1FFA(iLocal_55, 1, 0);
											unk_0x70EE8EFEE355AD29(iLocal_55, 1, 0);
											unk_0x2EF7A8CB89D363F6(iLocal_55, 0);
											unk_0x2878EC06B3F897A0(iLocal_55, 0);
											unk_0x88A973CE47FBEF95(iLocal_55, Local_99, 1, 0, 0, 1);
											unk_0x151F32CB40BE730C(iLocal_55, 106.5078f);
											unk_0xD8F094CB1BFE6F88(iLocal_55, 0);
											unk_0x7E3DC7ED30B648F0(iLocal_55, 17, 1);
											unk_0x3E8B036C6C9E581C(iLocal_55, 1);
											unk_0x6A8BCE61F660B8D0(unk_0xE7869D5D7816A9B6(), iLocal_55, -1, 2048, 4);
											if (!unk_0x76B2D234F1895632(iLocal_59))
											{
												unk_0x94026C1D1DB14225(&uLocal_113);
												unk_0x6A8BCE61F660B8D0(0, unk_0xE7869D5D7816A9B6(), -1, 2052, 4);
												unk_0x65682335D54DEA1C(0, iLocal_59, -1, 0, 2f, 1, 0);
												unk_0x911ECBCE73F8EC3F(uLocal_113);
												unk_0xC2C4A3A9FF2FBFFF(iLocal_55, uLocal_113);
												unk_0x33A90AD8FA327B72(&uLocal_113);
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
						if (!unk_0xAF437D7C802AB246(iLocal_55) && !unk_0x76B2D234F1895632(iLocal_59))
						{
							if (unk_0x0E6C083BC5101C8B(iLocal_55, iLocal_59, 5f, 5f, 5f, 0, 1, 0) && !iLocal_128)
							{
								func_4(&uLocal_136, "stagdau", "stagd_suit", 4, 0, 0, 0);
								iLocal_128 = 1;
							}
							if (unk_0x51374A0BB2871E6E(iLocal_55, 0))
							{
								if (unk_0x8AF655CC5761C7A2(unk_0xE7869D5D7816A9B6(), iLocal_59, 0))
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
										iLocal_308 = unk_0x9D40BBF80D8F5E8A();
									}
									if (iLocal_308 != 0 && unk_0x9D40BBF80D8F5E8A() > iLocal_308 + 6000)
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
								if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
								{
									if (!unk_0x76B2D234F1895632(unk_0xA0B1717D806F4901()))
									{
										iLocal_132 = unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0);
										unk_0x1B9F8E5CCC384F1E(unk_0xA0B1717D806F4901(), 10.5f, 2, 0);
									}
								}
								if (!unk_0xAF437D7C802AB246(iLocal_57) && !unk_0xAF437D7C802AB246(iLocal_55))
								{
									if (unk_0x51374A0BB2871E6E(iLocal_55, 0))
									{
										iLocal_132 = unk_0xF0295FF51F2D7803(iLocal_55, 0);
										unk_0x94026C1D1DB14225(&uLocal_113);
										unk_0x65682335D54DEA1C(0, iLocal_132, -1, 2, 1f, 1, 0);
										unk_0x44C7AD5B54E267EE(0);
										unk_0x911ECBCE73F8EC3F(uLocal_113);
										unk_0xC2C4A3A9FF2FBFFF(iLocal_57, uLocal_113);
										unk_0x1C26C4B0DAB91B21(iLocal_57, 185, 0);
									}
									else
									{
										unk_0xD0153915878AE371(iLocal_57, iLocal_55, -1, 8f, 1073741824, 1073741824, 0);
									}
									if (!unk_0xD11595488376CB53(uLocal_322))
									{
										uLocal_322 = func_63(iLocal_57, 0, 145);
									}
									if (unk_0xD11595488376CB53(uLocal_320))
									{
										unk_0x5B62CAB9B0D6ABF1(&uLocal_320);
									}
								}
								unk_0xC1B1E9A034A63A62(0);
								iLocal_120 = 1;
								bLocal_118 = true;
							}
						}
						if (bLocal_118 && !unk_0xAF437D7C802AB246(iLocal_55))
						{
							if (unk_0xC47857E5E74EA5AF(iLocal_55, 242628503) == 7 || unk_0x83666F9FB8FEBD4B() > 12000)
							{
								Local_67 = { Local_77 };
								Local_70 = { Local_80 };
								Local_73 = { Local_83 };
								fLocal_76 = fLocal_86;
								unk_0x801429C020C467BA(joaat("ig_bride"));
								unk_0x801429C020C467BA(joaat("washington"));
								unk_0x801429C020C467BA(joaat("baller2"));
								unk_0x801429C020C467BA(joaat("primo"));
								if (((unk_0x5053BF6D5604065B(joaat("ig_bride")) && unk_0x5053BF6D5604065B(joaat("washington"))) && unk_0x5053BF6D5604065B(joaat("baller2"))) && unk_0x5053BF6D5604065B(joaat("primo")))
								{
									iLocal_56 = unk_0xA7F4088D9A2629CC(5, joaat("ig_bride"), -330.36f, 6154.03f, 30.8f, 90f, 1, 1);
									unk_0x9BEE7E791BC4D38B(iLocal_56, 1);
									unk_0x94026C1D1DB14225(&uLocal_113);
									unk_0x58F62EDF6111D598(0, unk_0xE7869D5D7816A9B6(), -1);
									unk_0x911ECBCE73F8EC3F(uLocal_113);
									unk_0xC2C4A3A9FF2FBFFF(iLocal_56, uLocal_113);
									unk_0x33A90AD8FA327B72(&uLocal_113);
									iLocal_58 = unk_0xA7F4088D9A2629CC(4, joaat("ig_bestmen"), -333.3692f, 6157.644f, 30.489f, 83.2763f, 1, 1);
									unk_0x9BEE7E791BC4D38B(iLocal_58, 1);
									unk_0x58F62EDF6111D598(iLocal_58, unk_0xE7869D5D7816A9B6(), -1);
									unk_0x497AFDFE79EEFE4F(iLocal_58, 0, 1, 0, 0);
									uLocal_60[0] = unk_0xD504D1FF5DD2FFD7(joaat("washington"), -342.1295f, 6141.404f, 30.4839f, 133.4604f, 1, 1);
									uLocal_60[1] = unk_0xD504D1FF5DD2FFD7(joaat("baller2"), -338.3777f, 6137.41f, 30.476f, 135.6866f, 1, 1);
									uLocal_60[2] = unk_0xD504D1FF5DD2FFD7(joaat("primo"), -329.4687f, 6143.247f, 30.4893f, 313.82f, 1, 1);
									uLocal_60[3] = unk_0xD504D1FF5DD2FFD7(joaat("washington"), -322.3235f, 6135.427f, 30.4924f, 316.5898f, 1, 1);
									unk_0x408AD7E5AD0BB545(uLocal_60[0], unk_0x0ADD324BC46177EF(0, 127), 0);
									unk_0x408AD7E5AD0BB545(uLocal_60[1], unk_0x0ADD324BC46177EF(0, 127), 0);
									unk_0x408AD7E5AD0BB545(uLocal_60[2], unk_0x0ADD324BC46177EF(0, 127), 0);
									unk_0x408AD7E5AD0BB545(uLocal_60[3], unk_0x0ADD324BC46177EF(0, 127), 0);
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
							if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
							{
								if (!unk_0x76B2D234F1895632(unk_0xA0B1717D806F4901()))
								{
									unk_0x1B9F8E5CCC384F1E(unk_0xA0B1717D806F4901(), 10.5f, 2, 0);
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
		else if (unk_0x76B2D234F1895632(iLocal_55))
		{
			func_176();
		}
	}
}

void func_89(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_69236)
	{
		if (!unk_0xAF437D7C802AB246(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xA6ED3077A967AC63(iParam2, 0);
			}
			else
			{
				unk_0xA6ED3077A967AC63(iParam2, 1);
			}
		}
		if (!unk_0xAF437D7C802AB246(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x7294CF31F80E052D(iParam2, 0);
			}
			else
			{
				unk_0x7294CF31F80E052D(iParam2, 1);
			}
		}
	}
}

void func_90()
{
	if ((iLocal_310 && iLocal_307 != func_73(func_74())) && !unk_0xCF686B56FD5328B5(uLocal_134))
	{
		func_94(((iLocal_307 * 1000 * 60 - func_73(func_74()) * 1000 * 60) + (iLocal_306 * 1000 - func_97(func_74()) * 1000)), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0);
	}
	if (iLocal_306 == 0)
	{
		if (iLocal_307 == func_73(func_74()) + 1 && ((((iLocal_306 == (func_97(func_74()) - 55) || iLocal_306 == (func_97(func_74()) - 56)) || iLocal_306 == (func_97(func_74()) - 57)) || iLocal_306 == (func_97(func_74()) - 58)) || iLocal_306 == (func_97(func_74()) - 59)))
		{
			func_93();
		}
	}
	if (iLocal_307 == func_73(func_74()))
	{
		func_93();
		func_91();
		if (!func_64())
		{
			func_4(&uLocal_136, "stagdau", "stagd_failti", 4, 0, 0, 0);
			if (!unk_0xAF437D7C802AB246(iLocal_55))
			{
				unk_0x6FD4DE4DAEA4ED56(iLocal_55, 1, 1);
			}
			if (!unk_0xAF437D7C802AB246(iLocal_56))
			{
				unk_0x4B79E06845D63B96(iLocal_56, unk_0xE7869D5D7816A9B6(), 300f, -1, 0, 0);
			}
			if (!unk_0xAF437D7C802AB246(iLocal_58))
			{
				unk_0x4B79E06845D63B96(iLocal_58, unk_0xE7869D5D7816A9B6(), 300f, -1, 0, 0);
			}
			unk_0x4EDE34FBADD967A6(8500);
			if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
			{
				if (!unk_0x76B2D234F1895632(unk_0xA0B1717D806F4901()))
				{
					unk_0x1B9F8E5CCC384F1E(unk_0xA0B1717D806F4901(), 10.5f, 3, 0);
				}
			}
			unk_0x4EDE34FBADD967A6(2000);
			if (!unk_0x76B2D234F1895632(iLocal_55))
			{
				unk_0xFA2C5C2D054C888E(iLocal_55);
				unk_0x6A8BCE61F660B8D0(unk_0xE7869D5D7816A9B6(), iLocal_55, 5000, 2048, 2);
				unk_0x6A8BCE61F660B8D0(iLocal_55, unk_0xE7869D5D7816A9B6(), 5000, 2048, 2);
				unk_0xCD7A5BCC47D00FB2(iLocal_55, 0, 0);
				unk_0x46D4C1D7588933FB(iLocal_55);
			}
			if (!unk_0x76B2D234F1895632(iLocal_57))
			{
				unk_0x6A8BCE61F660B8D0(unk_0xE7869D5D7816A9B6(), iLocal_55, 5000, 0, 2);
				unk_0xCD7A5BCC47D00FB2(iLocal_57, 500, 0);
			}
			unk_0x4EDE34FBADD967A6(1000);
			if (!unk_0x76B2D234F1895632(iLocal_59))
			{
				if (unk_0x8AF655CC5761C7A2(unk_0xE7869D5D7816A9B6(), iLocal_59, 0))
				{
					unk_0xCD7A5BCC47D00FB2(unk_0xE7869D5D7816A9B6(), 0, 0);
				}
			}
			if (!unk_0x76B2D234F1895632(iLocal_55) && !unk_0x76B2D234F1895632(unk_0xA0B1717D806F4901()))
			{
				unk_0x94026C1D1DB14225(&uLocal_113);
				if (unk_0xA0B1717D806F4901() == iLocal_59)
				{
					unk_0x65682335D54DEA1C(0, iLocal_59, -1, -1, 1f, 8, 0);
					unk_0x547730440687D355(0, iLocal_59, unk_0xE7869D5D7816A9B6(), 8, 15f, 786469, 10f, 10f, 1);
				}
				else
				{
					unk_0x4B79E06845D63B96(0, unk_0xE7869D5D7816A9B6(), 300f, -1, 0, 0);
				}
				unk_0x911ECBCE73F8EC3F(uLocal_113);
				unk_0xC2C4A3A9FF2FBFFF(iLocal_55, uLocal_113);
				unk_0x33A90AD8FA327B72(&uLocal_113);
				unk_0x8D6671D78D1F569B(iLocal_55, 1);
				if (!unk_0x76B2D234F1895632(iLocal_57))
				{
					unk_0x94026C1D1DB14225(&uLocal_113);
					if (unk_0xA0B1717D806F4901() == iLocal_59)
					{
						unk_0x65682335D54DEA1C(0, iLocal_59, -1, 0, 2f, 1, 0);
						unk_0x82606438816C878C(0, 100000);
					}
					else
					{
						unk_0x4B79E06845D63B96(0, unk_0xE7869D5D7816A9B6(), 300f, -1, 0, 0);
					}
					unk_0x911ECBCE73F8EC3F(uLocal_113);
					unk_0xC2C4A3A9FF2FBFFF(iLocal_57, uLocal_113);
					unk_0x33A90AD8FA327B72(&uLocal_113);
					unk_0x8D6671D78D1F569B(iLocal_57, 1);
				}
			}
			unk_0x8FE59DE2329CBE64(unk_0x3F80C6638E3A1A90(), 1, 0);
			while (func_64())
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			func_2();
		}
	}
}

void func_91()
{
	Global_14578 = 0;
	func_92();
}

void func_92()
{
	if (unk_0xF0A330A29F97AA7E())
	{
		unk_0xACA77D3E6C847C83();
		Global_16723 = 0;
		unk_0xDA09A6E60FE9645E(1);
		Global_15712 = 6;
		return;
	}
}

void func_93()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = unk_0x7C833E3C6EEE41E0();
	iVar1 = unk_0x1B24A2CA27443F7B();
	iVar2 = unk_0x0CE219089BDB83C5();
	if (iLocal_309 == 0)
	{
		if (iVar1 == 55 && iVar2 >= 30)
		{
			unk_0xCC18B241D266EF14(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_309++;
		}
	}
	else if (iLocal_309 == 1)
	{
		if (iVar1 == 56 && iVar2 >= 0)
		{
			unk_0xCC18B241D266EF14(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_309++;
		}
	}
	else if (iLocal_309 == 2)
	{
		if (iVar1 == 56 && iVar2 >= 30)
		{
			unk_0xCC18B241D266EF14(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_309++;
		}
	}
	else if (iLocal_309 == 3)
	{
		if (iVar1 == 57 && iVar2 >= 0)
		{
			unk_0xCC18B241D266EF14(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_309++;
		}
	}
	else if (iLocal_309 == 4)
	{
		if (iVar1 == 57 && iVar2 >= 30)
		{
			unk_0xCC18B241D266EF14(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_309++;
		}
	}
	else if (iLocal_309 == 5)
	{
		if (iVar1 == 58 && iVar2 >= 0)
		{
			unk_0xCC18B241D266EF14(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_309++;
		}
	}
	else if (iLocal_309 == 6)
	{
		if (iVar1 == 58 && iVar2 >= 15)
		{
			unk_0xCC18B241D266EF14(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_309++;
		}
	}
	else if (iLocal_309 == 7)
	{
		if (iVar1 == 58 && iVar2 >= 30)
		{
			unk_0xCC18B241D266EF14(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_309++;
		}
	}
	else if (iLocal_309 == 8)
	{
		if (iVar1 == 58 && iVar2 >= 45)
		{
			unk_0xCC18B241D266EF14(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_309++;
		}
	}
	else if (iLocal_309 == 9)
	{
		if (iVar1 == 59 && iVar2 >= 0)
		{
			unk_0xCC18B241D266EF14(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_309++;
		}
	}
	else if (iLocal_309 == 10)
	{
		if (iVar1 == 59 && iVar2 >= 15)
		{
			unk_0xCC18B241D266EF14(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_309++;
		}
	}
	else if (iLocal_309 == 11)
	{
		if (iVar1 == 59 && iVar2 >= 30)
		{
			unk_0xCC18B241D266EF14(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_309++;
		}
	}
	else if (iLocal_309 == 12)
	{
		if (iVar1 == 59 && iVar2 >= 45)
		{
			unk_0xCC18B241D266EF14(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_309++;
		}
	}
	else if (iLocal_309 == 13)
	{
		if (iVar1 >= 0 && iVar0 == iLocal_307)
		{
			unk_0xCC18B241D266EF14(-1, "TIMER_STOP", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_309++;
		}
	}
}

void func_94(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_96(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1339895.f_1 = 1;
		func_95(7, iVar0);
		Global_1339895.f_3988[iVar0] = iParam0;
		StringCopy(&(Global_1339895.f_3988.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1339895.f_3988.f_172[iVar0] = iParam2;
		Global_1339895.f_3988.f_216[iVar0] = iParam3;
		Global_1339895.f_3988.f_183[iVar0] = iParam4;
		Global_1339895.f_3988.f_194[iVar0] = iParam5;
		Global_1339895.f_3988.f_249[iVar0] = iParam6;
		Global_1339895.f_3988.f_260[iVar0] = iParam7;
		Global_1339895.f_3988.f_205[iVar0] = iParam8;
		Global_1339895.f_3988.f_314[iVar0] = iParam9;
		Global_1339895.f_3988.f_325[iVar0] = iParam10;
		Global_1339895.f_3988.f_357[iVar0] = iParam11;
		Global_1339895.f_3988.f_238[iVar0] = iParam12;
		Global_1339895.f_3988.f_271[iVar0] = iParam13;
		Global_1339895.f_3988.f_368[iVar0] = iParam14;
	}
}

void func_95(int iParam0, int iParam1)
{
	unk_0x9956FB0E4B50ECB8(&(Global_1339895.f_4594[iParam0]), iParam1);
}

bool func_96(int iParam0, int iParam1)
{
	return unk_0xB519E5386FBF69E5(Global_1339895.f_4594[iParam0], iParam1);
}

int func_97(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

void func_98()
{
	if (!unk_0xAF437D7C802AB246(iLocal_55))
	{
		if (!unk_0x76B2D234F1895632(iLocal_59) && unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
		{
			if (unk_0x8AF655CC5761C7A2(iLocal_55, iLocal_59, 0) && unk_0x641FE3AF0CF996E3(iLocal_59))
			{
				if (!func_64())
				{
					if (func_99())
					{
						func_4(&uLocal_136, "stagdau", "stagd_crash", 4, 0, 0, 0);
					}
					else
					{
						func_4(&uLocal_136, "stagdau", "stagd_bump1", 4, 0, 0, 0);
					}
				}
			}
			else if (unk_0x8AF655CC5761C7A2(iLocal_55, unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0), 0) && unk_0x641FE3AF0CF996E3(unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0)))
			{
				if (!func_64())
				{
					func_4(&uLocal_136, "stagdau", "stagd_bump1", 4, 0, 0, 0);
				}
			}
		}
	}
}

int func_99()
{
	if (unk_0xB519E5386FBF69E5(unk_0x0ADD324BC46177EF(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_100()
{
	if (!unk_0xAF437D7C802AB246(iLocal_55))
	{
		unk_0xD9404A1491ECECC4(iLocal_55, 0);
	}
	if (!unk_0xAF437D7C802AB246(iLocal_57))
	{
		unk_0xD9404A1491ECECC4(iLocal_57, 0);
	}
	if (((((unk_0x0E6C083BC5101C8B(iLocal_55, unk_0xE7869D5D7816A9B6(), 4f, 4f, 4f, 0, 1, 0) || iLocal_49 == 1) || iLocal_126) || iLocal_127) || iLocal_125) || bLocal_118)
	{
		if ((((((iLocal_49 >= 2 && iLocal_120) && iLocal_49 != 1) && !iLocal_126) && !iLocal_127) && !iLocal_125) && !bLocal_118)
		{
			if (unk_0x0E6C083BC5101C8B(iLocal_57, unk_0xE7869D5D7816A9B6(), 4f, 4f, 4f, 0, 1, 0))
			{
				if (func_102())
				{
					func_101(0);
				}
			}
			else if (func_64() && !func_102())
			{
				func_101(1);
			}
		}
		else if (func_102())
		{
			func_101(0);
		}
	}
	else if (func_64() && !func_102())
	{
		func_101(1);
	}
}

void func_101(int iParam0)
{
	Global_16723 = iParam0;
}

int func_102()
{
	if (Global_16723 == 1)
	{
		return 1;
	}
	return 0;
}

void func_103()
{
	if ((unk_0x7C833E3C6EEE41E0() > 2 && unk_0x7C833E3C6EEE41E0() < 15) && !unk_0x51AFBB2BC4E2AAFD(unk_0x3F80C6638E3A1A90(), 0))
	{
	}
	else
	{
		if (!unk_0xAF437D7C802AB246(iLocal_55))
		{
			unk_0xFA2C5C2D054C888E(iLocal_55);
			func_21();
			unk_0x4EDE34FBADD967A6(0);
			func_4(&uLocal_136, "stagdau", "stagd_failda", 4, 0, 0, 0);
			if (unk_0xD51CFE69539DB6D8(iLocal_66))
			{
				unk_0x27B54A887EC71B05(iLocal_66, 1, 1);
			}
		}
		while (func_64())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		func_2();
	}
}

void func_104()
{
	if (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()) && !unk_0xAF437D7C802AB246(iLocal_55))
	{
		if (!iLocal_115)
		{
			if ((unk_0x0E6C083BC5101C8B(unk_0xE7869D5D7816A9B6(), iLocal_55, 130f, 60f, 50f, 0, 1, 0) && !unk_0x51AAB57E2FC16B14(iLocal_55)) || unk_0x0E6C083BC5101C8B(unk_0xE7869D5D7816A9B6(), iLocal_55, 10f, 10f, 10f, 0, 1, 0))
			{
				if (!unk_0xD11595488376CB53(uLocal_321))
				{
					uLocal_321 = func_63(iLocal_55, 0, 145);
					unk_0x9C9B069F802F9A20(uLocal_321, 0);
					unk_0x6A8BCE61F660B8D0(iLocal_55, unk_0xE7869D5D7816A9B6(), -1, 2052, 4);
				}
				if (unk_0x0E6C083BC5101C8B(unk_0xE7869D5D7816A9B6(), iLocal_55, 10f, 10f, 10f, 0, 1, 0))
				{
					if (unk_0xD11595488376CB53(uLocal_321))
					{
						unk_0x9C9B069F802F9A20(uLocal_321, 1);
					}
					unk_0x5AE11BC36633DE4E(0);
					func_91();
					while (func_64())
					{
						unk_0x4EDE34FBADD967A6(0);
					}
					if (!func_64())
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
			if (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()) && !unk_0xAF437D7C802AB246(iLocal_55))
			{
				if ((!func_142() && unk_0x22E902D6AF27E232(unk_0xE7869D5D7816A9B6(), -1131.777f, 2636.418f, 15.589f, -1040.995f, 2717.077f, 31.715f, 60.75f, 0, 1, 0)) && unk_0xD11595488376CB53(uLocal_321))
				{
					if (!func_64())
					{
						func_4(&uLocal_136, "stagdau", "stagd_greet2", 4, 0, 0, 0);
					}
					if (!unk_0x76B2D234F1895632(unk_0xA0B1717D806F4901()))
					{
						iLocal_65 = unk_0xA0B1717D806F4901();
					}
					func_105(1);
				}
			}
		}
		else if (!iLocal_301)
		{
			if (!unk_0xAF437D7C802AB246(iLocal_55))
			{
				if (!unk_0x0E6C083BC5101C8B(unk_0xE7869D5D7816A9B6(), iLocal_55, 25f, 25f, 25f, 0, 1, 0))
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

int func_105(int iParam0)
{
	if (func_109())
	{
		Global_99145 = 1;
		Global_99142 = unk_0x9D40BBF80D8F5E8A();
		if (func_39(Global_99144))
		{
			func_106(0);
		}
		unk_0xFB04AECD5A11A220(1, "RE_TITLE");
		if (iParam0 && func_39(Global_99144))
		{
			unk_0xD84E02209FE454B0();
		}
		return 1;
	}
	return 0;
}

void func_106(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_99155.f_29444.f_2 < 3)
			{
				if (!unk_0x281047BA84902BBE())
				{
					func_107(func_108(iParam0), -1);
					Global_99155.f_29444.f_2++;
					unk_0x9956FB0E4B50ECB8(&Global_99151, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0xB519E5386FBF69E5(Global_99151, 1))
			{
				if (!unk_0x281047BA84902BBE())
				{
					func_107(func_108(iParam0), -1);
					Global_99155.f_29444.f_3++;
					unk_0x9956FB0E4B50ECB8(&Global_99151, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0xB519E5386FBF69E5(Global_99151, 2))
			{
				if (!unk_0x281047BA84902BBE())
				{
					func_107(func_108(iParam0), -1);
					Global_99155.f_29444.f_4++;
					unk_0x9956FB0E4B50ECB8(&Global_99151, 2);
				}
			}
			break;
	}
}

void func_107(var uParam0, int iParam1)
{
	unk_0xCAFBB15049416379(uParam0);
	unk_0x7CBFB87C647743C3(0, 0, 1, iParam1);
}

char* func_108(int iParam0)
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

int func_109()
{
	switch (func_110(&Global_25093, 0, 5, 0, unk_0xE3E113B4DB09AAF8()))
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

int func_110(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_88836.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_114(0))
		{
			return 0;
		}
		Global_35583++;
		*uParam0 = Global_35583;
		unk_0xD30CBD7E69615F8C(unk_0xBFAE5F9DEC53DAE2(), 0);
		Global_17118.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x6581912D0AD8605D(8);
		}
		Global_35619 = iParam2;
		Global_35581 = *uParam0;
		Global_35582 = iParam4;
		Global_35580 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_35580 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_35580)
			{
				if (Global_35586[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_35581 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_112(iParam2))
		{
			return 0;
		}
		if (Global_35580 == 8)
		{
			return 0;
		}
		Global_35583++;
		*uParam0 = Global_35583;
		Global_35586[Global_35580 /*4*/] = Global_35583;
		Global_35586[Global_35580 /*4*/].f_1 = iParam1;
		Global_35586[Global_35580 /*4*/].f_2 = iParam2;
		Global_35586[Global_35580 /*4*/].f_3 = 0;
		Global_35580++;
		if (iParam4 != 0)
		{
			func_111(uParam0, iParam4);
		}
	}
	return 2;
}

void func_111(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_35580 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_35580)
	{
		if (Global_35586[iVar0 /*4*/] == *uParam0)
		{
			Global_35586[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_112(int iParam0)
{
	return func_113(iParam0, Global_35619);
}

int func_113(int iParam0, int iParam1)
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

int func_114(int iParam0)
{
	if (Global_35619 == 15)
	{
		return 0;
	}
	if (func_112(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_115()
{
	if (unk_0xD51CFE69539DB6D8(iLocal_55))
	{
		if (!unk_0xAF437D7C802AB246(iLocal_55))
		{
			if (unk_0x048B85C1B162DC5D(-1, unk_0x1141852D07400777(iLocal_55, 1), 3f))
			{
				unk_0xDE31B2587775EDAD(iLocal_55);
				unk_0x09714949CF524B00(iLocal_55, 99);
			}
			if (!unk_0x76B2D234F1895632(unk_0xA0B1717D806F4901()))
			{
				if (unk_0xD4F0FC8FFEDE152B(unk_0xA0B1717D806F4901()) < 3f)
				{
					unk_0x2878EC06B3F897A0(iLocal_55, 1);
				}
				else
				{
					unk_0x2878EC06B3F897A0(iLocal_55, 0);
					if (unk_0x3C1B1C07A878AE1D(unk_0xA0B1717D806F4901(), iLocal_55))
					{
						unk_0xDE31B2587775EDAD(iLocal_55);
						unk_0x09714949CF524B00(iLocal_55, 99);
					}
				}
			}
			if (unk_0x0E6C083BC5101C8B(unk_0xE7869D5D7816A9B6(), iLocal_55, 2f, 2f, 2f, 0, 1, 0))
			{
				if (!unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
				{
					if (func_59(1, 0, 1))
					{
						if (!iLocal_311)
						{
							func_105(1);
							func_52(1, 1, 1, 0);
							unk_0x8FE59DE2329CBE64(unk_0x3F80C6638E3A1A90(), 0, 0);
							unk_0x19F63791B22B0673(unk_0xE7869D5D7816A9B6(), 1);
							unk_0x1D208E4A4E1D4FFE(1);
							unk_0xE242D0D27B122FAC(0);
							unk_0xA8010B7497A9230B(0);
							if (!unk_0xAF437D7C802AB246(iLocal_55))
							{
								unk_0xB86B1248EA9B87EA(unk_0x1141852D07400777(iLocal_55, 1), 5f, 1, 0, 0, 0);
								unk_0x7F75333E7D3B15DD(unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1), 5f);
							}
							if (!unk_0x76B2D234F1895632(unk_0xA0B1717D806F4901()))
							{
								if (unk_0x0E6C083BC5101C8B(unk_0xA0B1717D806F4901(), iLocal_55, 5f, 5f, 5f, 0, 1, 0))
								{
									unk_0x88A973CE47FBEF95(unk_0xA0B1717D806F4901(), unk_0x1141852D07400777(iLocal_55, 1) - Vector(1.5f, 4f, 3f), 1, 0, 0, 1);
									unk_0xC9CEB5227A733CE6(unk_0xA0B1717D806F4901());
								}
							}
							if (!unk_0xAF437D7C802AB246(iLocal_55))
							{
								uLocal_318 = unk_0xB839A1C489B63ACC(-935.57f, 2767.616f, 24.448f, 2.433f, 0.152f, 53.743f, 2);
								uLocal_134 = unk_0x01A00DEC76A48F14("DEFAULT_ANIMATED_CAMERA", 0);
								unk_0x20679FECEB6BF5E3(uLocal_318, 0.158f);
								unk_0x102A9C1517158BFA(uLocal_134, uLocal_318, "untie_cam", "re@stag_do@");
								unk_0xDE31B2587775EDAD(unk_0xE7869D5D7816A9B6());
								unk_0xDE31B2587775EDAD(iLocal_55);
								unk_0x360F0D01112F8AD0(iLocal_55, uLocal_318, "re@stag_do@", "untie_ped", 1000f, -1000f, 4, 0, 1148846080, 0);
								unk_0xA573D5E64CDFAF83(iLocal_55, 0, 0);
								unk_0x360F0D01112F8AD0(unk_0xE7869D5D7816A9B6(), uLocal_318, "re@stag_do@", "untie_player", 1000f, -1000f, 0, 0, 1148846080, 0);
								unk_0xA573D5E64CDFAF83(unk_0xE7869D5D7816A9B6(), 0, 0);
								unk_0x63498CF6CF35C6A2(uLocal_134, 1);
								unk_0x538689EF05955EF7(1, 0, 3000, 1, 0, 0);
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
			if (unk_0x4D221DFBB84DCF0B(uLocal_318) > 0.2f && unk_0x4D221DFBB84DCF0B(uLocal_318) < 0.3f)
			{
				unk_0x3A8AEDC6680712C1(-1, "ROPE_CUT", unk_0xE7869D5D7816A9B6(), "ROPE_CUT_SOUNDSET", 0, 0);
				iLocal_316 = 1;
			}
		}
		if (unk_0x4D221DFBB84DCF0B(uLocal_318) > 0.4647059f && !iLocal_317)
		{
			if (unk_0xF19E031C976C0F00() == 4)
			{
				unk_0xCD0E4FEA8B60FCA3("CamPushInNeutral", 0, 0);
				unk_0xCC18B241D266EF14(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
				iLocal_317 = 1;
			}
		}
		if (unk_0x4D221DFBB84DCF0B(uLocal_318) > 0.5f)
		{
			iLocal_312 = 1;
		}
		if (func_116(1000))
		{
			unk_0x6A6E764D1DB633C7(800);
			while (unk_0xA864A37DA392324A())
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			iLocal_312 = 1;
			iLocal_315 = 1;
		}
	}
	if (iLocal_312 && !iLocal_314)
	{
		if (unk_0xD51CFE69539DB6D8(iLocal_66))
		{
			unk_0x27B54A887EC71B05(iLocal_66, 1, 1);
		}
		unk_0xDE31B2587775EDAD(unk_0xE7869D5D7816A9B6());
		unk_0x88A973CE47FBEF95(unk_0xE7869D5D7816A9B6(), -936.6537f, 2767.497f, 24.4289f, 1, 0, 0, 1);
		unk_0x151F32CB40BE730C(unk_0xE7869D5D7816A9B6(), 208.4017f);
		unk_0xA573D5E64CDFAF83(unk_0xE7869D5D7816A9B6(), 0, 0);
		unk_0x63498CF6CF35C6A2(uLocal_134, 0);
		unk_0x538689EF05955EF7(0, 0, 3000, 1, 0, 0);
		unk_0x74FF6D08DE291367(uLocal_134, 0);
		unk_0x7FB81B1DD14A3BE4(0f);
		unk_0x6EF372C057320AD4(-7f, 1065353216);
		func_52(0, 1, 1, 0);
		unk_0x19F63791B22B0673(unk_0xE7869D5D7816A9B6(), 0);
		unk_0xE242D0D27B122FAC(1);
		unk_0xA8010B7497A9230B(1);
		if (!unk_0xAF437D7C802AB246(iLocal_55))
		{
			unk_0x2878EC06B3F897A0(iLocal_55, 0);
			unk_0xDE31B2587775EDAD(iLocal_55);
			unk_0xC16A68A8424A0340(iLocal_55, 1);
			unk_0x88A973CE47FBEF95(iLocal_55, -935.6716f, 2767.772f, 24.4289f, 1, 0, 0, 1);
			unk_0x151F32CB40BE730C(iLocal_55, 136.9073f);
			unk_0xA573D5E64CDFAF83(iLocal_55, 0, 0);
		}
		if (iLocal_315)
		{
			unk_0x2D3BB3EF936C4B76(800);
			while (unk_0x845A95C48FA19489())
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			iLocal_315 = 0;
		}
		iLocal_317 = 0;
		iLocal_314 = 1;
	}
	if (iLocal_314 && !unk_0xAF437D7C802AB246(iLocal_55))
	{
		if (unk_0xC45A34912542C4EB(unk_0xA0B1717D806F4901(), 0))
		{
			if ((((((unk_0x0E6C083BC5101C8B(iLocal_55, unk_0xA0B1717D806F4901(), 20f, 20f, 20f, 0, 1, 0) && unk_0x25ECA1DD55F6CB7F(unk_0xA0B1717D806F4901()) >= 1) && !unk_0xAA65D1F2BF4AAFFB(unk_0x1B2DC87EFB36DF80(unk_0xA0B1717D806F4901()))) && !unk_0xFFD2CE10E8C7E77F(unk_0x1B2DC87EFB36DF80(unk_0xA0B1717D806F4901()))) && !unk_0xD1C57B32C6DE7BB6(unk_0x1B2DC87EFB36DF80(unk_0xA0B1717D806F4901()))) && !unk_0x437C3632DA4A7584(unk_0x1B2DC87EFB36DF80(unk_0xA0B1717D806F4901()))) && unk_0x1B2DC87EFB36DF80(unk_0xA0B1717D806F4901()) != joaat("rhino"))
			{
				unk_0x94026C1D1DB14225(&uLocal_113);
				unk_0x6A8BCE61F660B8D0(0, unk_0xE7869D5D7816A9B6(), 10000, 2048, 3);
				unk_0x58F62EDF6111D598(0, unk_0xE7869D5D7816A9B6(), 6500);
				unk_0x65682335D54DEA1C(0, unk_0xA0B1717D806F4901(), -1, 0, 1f, 1, 0);
				unk_0x911ECBCE73F8EC3F(uLocal_113);
				unk_0xC2C4A3A9FF2FBFFF(iLocal_55, uLocal_113);
				unk_0x33A90AD8FA327B72(&uLocal_113);
			}
			else if (!unk_0x6CCCE00683E8FD6D(iLocal_55))
			{
				unk_0x560F88FE1A93011B(iLocal_55, func_66());
				unk_0x0B3D58B4B3F33CE5(iLocal_55, 1);
				unk_0xD8F094CB1BFE6F88(iLocal_55, 0);
			}
		}
		else if (!unk_0x6CCCE00683E8FD6D(iLocal_55))
		{
			unk_0x560F88FE1A93011B(iLocal_55, func_66());
			unk_0x0B3D58B4B3F33CE5(iLocal_55, 1);
			unk_0xD8F094CB1BFE6F88(iLocal_55, 0);
		}
		unk_0x9BEE7E791BC4D38B(iLocal_55, 0);
		unk_0x8FE59DE2329CBE64(unk_0x3F80C6638E3A1A90(), 1, 0);
		uLocal_320 = func_23(Local_67, 1);
		iLocal_114 = 1;
		bLocal_116 = true;
		unk_0x8B10CC9832827D27("re@stag_do@");
		unk_0x8B10CC9832827D27("re@stag_do@idle_a");
		iLocal_305 = func_73(func_74());
		iLocal_307 = iLocal_305 + 5;
		iLocal_304 = func_97(func_74());
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

int func_116(int iParam0)
{
	if (unk_0xDE185266FE919B68())
	{
		if ((unk_0x9D40BBF80D8F5E8A() - Global_28) > iParam0)
		{
			Global_27 = unk_0x9D40BBF80D8F5E8A();
		}
		Global_28 = unk_0x9D40BBF80D8F5E8A();
		if ((unk_0x9D40BBF80D8F5E8A() - Global_27) > iParam0)
		{
			if (func_117())
			{
				Global_27 = unk_0x9D40BBF80D8F5E8A();
				return 1;
			}
		}
	}
	return 0;
}

int func_117()
{
	if (unk_0xA57007F9A665F322())
	{
		return 0;
	}
	if (unk_0x958B4351DD28B142(0, 18) || unk_0x958B4351DD28B142(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_118()
{
	if (!unk_0xAF437D7C802AB246(iLocal_55))
	{
		if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
		{
			if (!unk_0x28D33422BA6C479D(unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0)))
			{
				unk_0x20BB4B94CC6DDC9A(unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0), 1, 0);
			}
		}
		iLocal_133 = unk_0x11EF3EB1EF47F297(unk_0x1141852D07400777(iLocal_55, 0), 30f, 0, 4);
		if (!unk_0x76B2D234F1895632(iLocal_133))
		{
			if (!unk_0xD12071DBE8393EC8(iLocal_133, -1))
			{
				if (unk_0x0E6C083BC5101C8B(iLocal_133, iLocal_55, 30f, 30f, 30f, 0, 1, 0))
				{
					unk_0x20BB4B94CC6DDC9A(iLocal_133, 1, 0);
					if (unk_0xC45A34912542C4EB(iLocal_133, 0))
					{
						unk_0xF67C39F4C9279042(iLocal_133, 3000, 0, 0);
						if (!unk_0xAF437D7C802AB246(iLocal_55))
						{
							if (!func_64() && !iLocal_115)
							{
								func_4(&uLocal_136, "stagdau", "stagd_greet2", 4, 0, 0, 0);
							}
						}
					}
				}
				else
				{
					unk_0xC1F2137782A816E9(&iLocal_133);
				}
			}
		}
	}
}

void func_119()
{
	int iVar0;
	int iVar1;
	
	if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 1))
	{
		iVar0 = unk_0x811668789F0F4837(unk_0xE7869D5D7816A9B6());
		if (unk_0xC45A34912542C4EB(iVar0, 0))
		{
			iVar1 = unk_0xBD6B21D725712BDE(iVar0, 0);
			if (!unk_0xAF437D7C802AB246(iVar1))
			{
				if (iVar1 != unk_0xE7869D5D7816A9B6())
				{
					if (unk_0x28D33422BA6C479D(iVar1))
					{
						if (!unk_0x7E7AFACA1C744410(iVar1, unk_0xE7869D5D7816A9B6()))
						{
							unk_0x6A8BCE61F660B8D0(iVar1, unk_0xE7869D5D7816A9B6(), 2000, 2048, 2);
						}
					}
				}
			}
		}
	}
}

void func_120()
{
	func_121(39, 1);
	func_121(40, 1);
	func_121(41, 1);
	func_121(42, 1);
	func_121(43, 1);
	func_121(44, 1);
	unk_0x801429C020C467BA(joaat("u_m_y_staggrm_01"));
	unk_0x801429C020C467BA(joaat("superd"));
	unk_0x801429C020C467BA(joaat("prop_stag_do_rope"));
	while ((!unk_0x5053BF6D5604065B(joaat("u_m_y_staggrm_01")) || !unk_0x5053BF6D5604065B(joaat("superd"))) || !unk_0x5053BF6D5604065B(joaat("prop_stag_do_rope")))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0x2B0BB514F9140141("re@stag_do@");
	unk_0x2B0BB514F9140141("re@stag_do@idle_a");
	unk_0xDF83A33BF4D93E6F("ROPE_CUT", 0);
	while ((!unk_0x2917D5E1CB5CE43A("re@stag_do@") || !unk_0x2917D5E1CB5CE43A("re@stag_do@idle_a")) || !unk_0xDF83A33BF4D93E6F("ROPE_CUT", 0))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	iLocal_55 = unk_0xA7F4088D9A2629CC(26, joaat("u_m_y_staggrm_01"), -935.57f, 2767.616f, 24.448f, 140.5f, 1, 1);
	unk_0x0814FB03E16A03C1(iLocal_55, "GROOM");
	unk_0x690C5239500171FE(iLocal_55, joaat("player"));
	unk_0x9BEE7E791BC4D38B(iLocal_55, 1);
	unk_0x82F10D839CF95C09(iLocal_55, 0);
	unk_0x497AFDFE79EEFE4F(iLocal_55, 2, 0, 0, 0);
	unk_0x497AFDFE79EEFE4F(iLocal_55, 0, 0, 0, 0);
	unk_0x497AFDFE79EEFE4F(iLocal_55, 3, 0, 0, 0);
	unk_0x497AFDFE79EEFE4F(iLocal_55, 4, 0, 0, 0);
	unk_0x497AFDFE79EEFE4F(iLocal_55, 11, 1, 0, 0);
	unk_0x3D268E7250C1ECDF(iLocal_55, joaat("empty"));
	unk_0x79EE909282B7E387(iLocal_55, 3);
	unk_0x1C26C4B0DAB91B21(iLocal_55, 206, 1);
	unk_0x1C26C4B0DAB91B21(iLocal_55, 134, 1);
	iLocal_66 = unk_0x8C15E6EC0BC9B4BE(joaat("prop_stag_do_rope"), unk_0x1141852D07400777(iLocal_55, 1), 1, 1, 0);
	unk_0x9E4D318905B670CB(iLocal_66, iLocal_55, unk_0x206A9EC63F98F19D(iLocal_55, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
	iLocal_59 = unk_0xD504D1FF5DD2FFD7(joaat("superd"), -2009.015f, 455.3556f, 101.6528f, 274.8103f, 0, 0);
	unk_0x8100F8AA27EE924B(iLocal_59, 1);
	unk_0xB4446F1B3498926D(iLocal_59, 0f);
	unk_0x18F90CF5D756C783(iLocal_59, 3);
	unk_0x5DAB69BA0BF447FC(iLocal_59, 0);
	unk_0x040CEEE9AF27BA93(iLocal_59, 0, 73, 0);
	unk_0x59A5231FE44E902D(iLocal_59, 2, 48);
	unk_0x16580F6E093503C8(iLocal_59, 11, 1, 0);
	unk_0x16580F6E093503C8(iLocal_59, 12, 1, 0);
	unk_0xD016326278B5D42B(joaat("superd"), 3);
	unk_0x29627C73E3F24F9A(iLocal_59, 10000);
	unk_0x40F035E4BB4F5465(iLocal_59, 5f);
	unk_0x2EA9D513624CAB16(iLocal_59);
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
	unk_0x7E38E815EF844C74(joaat("superd"), 1);
	unk_0xBDF0A810DD6A47D3(Local_87 - Vector(10f, 10f, 10f), Local_87 + Vector(10f, 10f, 10f), 0, 1);
	unk_0x8668A841B325FF16(Local_87 - Vector(20f, 20f, 20f), Local_87 + Vector(20f, 20f, 20f), 0, 1, 1, 1);
	unk_0x8668A841B325FF16(unk_0x1141852D07400777(iLocal_55, 0) - Vector(10f, 10f, 10f), unk_0x1141852D07400777(iLocal_55, 0) + Vector(10f, 10f, 10f), 0, 1, 1, 1);
	unk_0x8668A841B325FF16(Vector(101.6406f, 455.1994f, -2007.751f) - Vector(15f, 15f, 15f), Vector(101.6406f, 455.1994f, -2007.751f) + Vector(15f, 15f, 15f), 0, 1, 1, 1);
	unk_0x8668A841B325FF16(Vector(47.4293f, 4299.008f, -2202.747f) - Vector(15f, 25f, 25f), Vector(47.4293f, 4299.008f, -2202.747f) + Vector(15f, 25f, 25f), 0, 1, 1, 1);
	unk_0xB0A7E0A62FB61A06(unk_0x1141852D07400777(iLocal_55, 1), 10f, 0);
	if (!unk_0x76B2D234F1895632(iLocal_55))
	{
		unk_0x94026C1D1DB14225(&uLocal_113);
		unk_0xDCF460AE46C9489C(0, "re@stag_do@idle_a", "idle_a_ped", 8f, -8f, -1, 9, 0, 0, 0, 0);
		unk_0x911ECBCE73F8EC3F(uLocal_113);
		unk_0xC2C4A3A9FF2FBFFF(iLocal_55, uLocal_113);
		unk_0x33A90AD8FA327B72(&uLocal_113);
		unk_0x8D6671D78D1F569B(iLocal_55, 1);
	}
	if (func_11() == 0)
	{
		func_89(&uLocal_136, 0, unk_0xE7869D5D7816A9B6(), "MICHAEL", 0, 1);
	}
	if (func_11() == 1)
	{
		func_89(&uLocal_136, 0, unk_0xE7869D5D7816A9B6(), "FRANKLIN", 0, 1);
	}
	if (func_11() == 2)
	{
		func_89(&uLocal_136, 0, unk_0xE7869D5D7816A9B6(), "TREVOR", 0, 1);
	}
	func_89(&uLocal_136, 3, iLocal_55, "GROOM", 0, 1);
	iLocal_50 = 1;
}

void func_121(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_128(iParam0, 2, 1))
		{
			func_127(iParam0, 2, 1);
		}
	}
	else if (func_128(iParam0, 2, 1))
	{
		func_122(iParam0, 2, 1);
	}
}

void func_122(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0x73817D396768E4C6(&(Global_91077.f_1286[iParam0]), iParam1);
	}
	else if (unk_0x00AAD79B42B3E036())
	{
		if (func_34() == 0)
		{
			uVar0 = func_125(func_126(iParam0), -1, 0);
			unk_0x73817D396768E4C6(&uVar0, iParam1);
			func_123(func_126(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0x73817D396768E4C6(&(Global_99155.f_668[iParam0]), iParam1);
	}
}

void func_123(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2466310[iParam0 /*5*/][func_124(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x39DEDCCD70293F58(iVar0, uParam1, iParam3);
	}
}

int func_124(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_37();
		if (iVar1 > -1)
		{
			Global_2466023 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2466023 = 1;
		}
	}
	return iVar0;
}

int func_125(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2466310[iParam0 /*5*/][func_124(iParam1)];
	if (unk_0x56DCF5665F92F9BD(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_126(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 817;
			break;
		
		case 1:
			return 818;
			break;
		
		case 2:
			return 819;
			break;
		
		case 3:
			return 820;
			break;
		
		case 4:
			return 821;
			break;
		
		case 5:
			return 822;
			break;
		
		case 6:
			return 823;
			break;
		
		case 7:
			return 824;
			break;
		
		case 8:
			return 825;
			break;
		
		case 9:
			return 826;
			break;
		
		case 10:
			return 827;
			break;
		
		case 11:
			return 828;
			break;
		
		case 12:
			return 829;
			break;
		
		case 13:
			return 830;
			break;
		
		case 14:
			return 831;
			break;
		
		case 15:
			return 833;
			break;
		
		case 16:
			return 834;
			break;
		
		case 17:
			return 835;
			break;
		
		case 18:
			return 836;
			break;
		
		case 19:
			return 837;
			break;
		
		case 20:
			return 838;
			break;
		
		case 21:
			return 839;
			break;
		
		case 22:
			return 840;
			break;
		
		case 23:
			return 841;
			break;
		
		case 24:
			return 842;
			break;
		
		case 25:
			return 843;
			break;
		
		case 26:
			return 844;
			break;
		
		case 27:
			return 845;
			break;
		
		case 28:
			return 846;
			break;
		
		case 29:
			return 847;
			break;
		
		case 30:
			return 848;
			break;
		
		case 31:
			return 849;
			break;
		
		case 32:
			return 850;
			break;
		
		case 33:
			return 851;
			break;
		
		case 34:
			return 852;
			break;
		
		case 35:
			return 853;
			break;
		
		case 36:
			return 854;
			break;
		
		case 37:
			return 855;
			break;
		
		case 38:
			return 856;
			break;
		
		case 39:
			return 857;
			break;
		
		case 40:
			return 861;
			break;
		
		case 41:
			return 862;
			break;
		
		case 42:
			return 863;
			break;
		
		case 43:
			return 864;
			break;
		
		case 44:
			return 3640;
			break;
		
		default:
			break;
	}
	return 3717;
}

void func_127(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0x9956FB0E4B50ECB8(&(Global_91077.f_1286[iParam0]), iParam1);
	}
	else if (unk_0x00AAD79B42B3E036())
	{
		if (func_34() == 0)
		{
			uVar0 = func_125(func_126(iParam0), -1, 0);
			unk_0x9956FB0E4B50ECB8(&uVar0, iParam1);
			func_123(func_126(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0x9956FB0E4B50ECB8(&(Global_99155.f_668[iParam0]), iParam1);
	}
}

int func_128(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0xB519E5386FBF69E5(Global_91077.f_1286[iParam0], iParam1);
	}
	else if (unk_0x00AAD79B42B3E036())
	{
		if (func_34() == 0)
		{
			return unk_0xB519E5386FBF69E5(func_125(func_126(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xB519E5386FBF69E5(Global_99155.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_129()
{
	if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()) && !unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1), Local_45) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0x834FF019A048DE2C(unk_0xE7869D5D7816A9B6())) > 1369f && !func_140())
		{
			return 0;
		}
	}
	if (func_136())
	{
		return 1;
	}
	if (func_130(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_130(float fParam0, bool bParam1)
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
	if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
	{
		if (func_13(func_11()))
		{
			iVar36 = func_44();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0xB519E5386FBF69E5(Global_99155.f_17188[iVar32 /*6*/], 2) && !unk_0xB519E5386FBF69E5(Global_99155.f_17188[iVar32 /*6*/], 3))
				{
					func_131(iVar32, &Var0);
					fVar35 = unk_0xF18329472591CFE6(unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 0), Var0.f_6, 1);
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

void func_131(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_132(uParam1, "Abigail1", func_134(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_133(iParam0), 1, 0);
			break;
		
		case 1:
			func_132(uParam1, "Abigail2", func_134(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_133(iParam0), 1, 0);
			break;
		
		case 2:
			func_132(uParam1, "Barry1", func_134(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_133(iParam0), 1, 0);
			break;
		
		case 3:
			func_132(uParam1, "Barry2", func_134(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_133(iParam0), 1, 1);
			break;
		
		case 4:
			func_132(uParam1, "Barry3", func_134(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_133(iParam0), 0, 0);
			break;
		
		case 5:
			func_132(uParam1, "Barry3A", func_134(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		case 6:
			func_132(uParam1, "Barry3C", func_134(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		case 7:
			func_132(uParam1, "Barry4", func_134(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_133(iParam0), 0, 0);
			break;
		
		case 8:
			func_132(uParam1, "Dreyfuss1", func_134(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_133(iParam0), 0, 0);
			break;
		
		case 9:
			func_132(uParam1, "Epsilon1", func_134(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_133(iParam0), 0, 0);
			break;
		
		case 10:
			func_132(uParam1, "Epsilon2", func_134(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_133(iParam0), 1, 0);
			break;
		
		case 11:
			func_132(uParam1, "Epsilon3", func_134(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_133(iParam0), 0, 0);
			break;
		
		case 12:
			func_132(uParam1, "Epsilon4", func_134(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_133(iParam0), 0, 0);
			break;
		
		case 13:
			func_132(uParam1, "Epsilon5", func_134(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_133(iParam0), 1, 0);
			break;
		
		case 14:
			func_132(uParam1, "Epsilon6", func_134(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		case 15:
			func_132(uParam1, "Epsilon7", func_134(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_133(iParam0), 0, 0);
			break;
		
		case 16:
			func_132(uParam1, "Epsilon8", func_134(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_133(iParam0), 1, 0);
			break;
		
		case 17:
			func_132(uParam1, "Extreme1", func_134(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		case 18:
			func_132(uParam1, "Extreme2", func_134(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		case 19:
			func_132(uParam1, "Extreme3", func_134(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		case 20:
			func_132(uParam1, "Extreme4", func_134(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_133(iParam0), 0, 0);
			break;
		
		case 21:
			func_132(uParam1, "Fanatic1", func_134(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_133(iParam0), 1, 0);
			break;
		
		case 22:
			func_132(uParam1, "Fanatic2", func_134(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_133(iParam0), 1, 0);
			break;
		
		case 23:
			func_132(uParam1, "Fanatic3", func_134(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_133(iParam0), 0, 1);
			break;
		
		case 24:
			func_132(uParam1, "Hao1", func_134(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_133(iParam0), 0, 1);
			break;
		
		case 25:
			func_132(uParam1, "Hunting1", func_134(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		case 26:
			func_132(uParam1, "Hunting2", func_134(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		case 27:
			func_132(uParam1, "Josh1", func_134(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_133(iParam0), 1, 0);
			break;
		
		case 28:
			func_132(uParam1, "Josh2", func_134(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_133(iParam0), 1, 1);
			break;
		
		case 29:
			func_132(uParam1, "Josh3", func_134(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_133(iParam0), 1, 1);
			break;
		
		case 30:
			func_132(uParam1, "Josh4", func_134(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_133(iParam0), 1, 0);
			break;
		
		case 31:
			func_132(uParam1, "Maude1", func_134(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		case 32:
			func_132(uParam1, "Minute1", func_134(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		case 33:
			func_132(uParam1, "Minute2", func_134(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		case 34:
			func_132(uParam1, "Minute3", func_134(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		case 35:
			func_132(uParam1, "MrsPhilips1", func_134(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_133(iParam0), 0, 0);
			break;
		
		case 36:
			func_132(uParam1, "MrsPhilips2", func_134(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_133(iParam0), 0, 0);
			break;
		
		case 37:
			func_132(uParam1, "Nigel1", func_134(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_133(iParam0), 1, 0);
			break;
		
		case 38:
			func_132(uParam1, "Nigel1A", func_134(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_133(iParam0), 1, 1);
			break;
		
		case 39:
			func_132(uParam1, "Nigel1B", func_134(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_133(iParam0), 1, 1);
			break;
		
		case 40:
			func_132(uParam1, "Nigel1C", func_134(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_133(iParam0), 1, 1);
			break;
		
		case 41:
			func_132(uParam1, "Nigel1D", func_134(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_133(iParam0), 1, 1);
			break;
		
		case 42:
			func_132(uParam1, "Nigel2", func_134(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_133(iParam0), 1, 1);
			break;
		
		case 43:
			func_132(uParam1, "Nigel3", func_134(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_133(iParam0), 1, 1);
			break;
		
		case 44:
			func_132(uParam1, "Omega1", func_134(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_133(iParam0), 0, 0);
			break;
		
		case 45:
			func_132(uParam1, "Omega2", func_134(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_133(iParam0), 0, 0);
			break;
		
		case 46:
			func_132(uParam1, "Paparazzo1", func_134(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		case 47:
			func_132(uParam1, "Paparazzo2", func_134(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		case 48:
			func_132(uParam1, "Paparazzo3", func_134(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_133(iParam0), 0, 0);
			break;
		
		case 49:
			func_132(uParam1, "Paparazzo3A", func_134(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		case 50:
			func_132(uParam1, "Paparazzo3B", func_134(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		case 51:
			func_132(uParam1, "Paparazzo4", func_134(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_133(iParam0), 0, 0);
			break;
		
		case 52:
			func_132(uParam1, "Rampage1", func_134(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_133(iParam0), 0, 0);
			break;
		
		case 54:
			func_132(uParam1, "Rampage3", func_134(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_133(iParam0), 1, 0);
			break;
		
		case 55:
			func_132(uParam1, "Rampage4", func_134(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_133(iParam0), 1, 0);
			break;
		
		case 56:
			func_132(uParam1, "Rampage5", func_134(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_133(iParam0), 0, 0);
			break;
		
		case 53:
			func_132(uParam1, "Rampage2", func_134(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_133(iParam0), 1, 0);
			break;
		
		case 57:
			func_132(uParam1, "TheLastOne", func_134(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		case 58:
			func_132(uParam1, "Tonya1", func_134(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		case 59:
			func_132(uParam1, "Tonya2", func_134(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		case 60:
			func_132(uParam1, "Tonya3", func_134(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		case 61:
			func_132(uParam1, "Tonya4", func_134(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		case 62:
			func_132(uParam1, "Tonya5", func_134(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_133(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_132(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_133(int iParam0)
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

struct<2> func_134(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_135(iParam0) };
	if (unk_0xF6917DE0E003509D(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_135(int iParam0)
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

int func_136()
{
	if (func_139() && !func_140())
	{
		return 1;
	}
	if (func_138() && func_137())
	{
		return 1;
	}
	return 0;
}

bool func_137()
{
	return Global_98873 > 0;
}

int func_138()
{
	if (Global_88280 != -1)
	{
		return 1;
	}
	return 0;
}

int func_139()
{
	if (Global_88280 != -1)
	{
		return unk_0xB519E5386FBF69E5(Global_82146[Global_88280 /*34*/].f_15, 20);
	}
	return 0;
}

int func_140()
{
	if (unk_0xA78EA29AC2FFBADE())
	{
		if (unk_0xB6A14C2017960DFA() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_141()
{
	if (!func_112(5))
	{
		return 1;
	}
	if (func_136())
	{
		return 1;
	}
	if (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0x834FF019A048DE2C(unk_0xE7869D5D7816A9B6())) > 1369f && !func_140())
		{
			return 0;
		}
	}
	if (func_130(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_142()
{
	if ((Global_99144 == func_48() && unk_0x4341FD2C227CC4C0()) && Global_99145)
	{
		return 1;
	}
	return 0;
}

void func_143(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_48();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_145(iParam0);
	unk_0xCC7B0EAA74A0A981(0);
	unk_0x51FBA873FE592D01(1);
	Global_99141 = 0;
	func_144();
}

void func_144()
{
	if (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
	{
		if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
		{
			unk_0x7E38E815EF844C74(unk_0x1B2DC87EFB36DF80(unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0)), 1);
		}
		unk_0x1C26C4B0DAB91B21(unk_0xE7869D5D7816A9B6(), 32, 0);
	}
}

void func_145(int iParam0)
{
	Global_99144 = iParam0;
}

int func_146(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_135947)
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
		if (!func_174())
		{
			return 0;
		}
	}
	Local_45 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()) && !unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
		{
			Var1 = { unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1) };
			if (unk_0xA8CEACB4F35AE058(unk_0x834FF019A048DE2C(unk_0xE7869D5D7816A9B6())) > 1369f && !func_140())
			{
				return 0;
			}
		}
		if (!Global_99155.f_7699)
		{
			return 0;
		}
		if (func_29(0))
		{
			return 0;
		}
		if (func_136())
		{
			return 0;
		}
		if (func_173())
		{
			return 0;
		}
		if (Global_99144 != -1)
		{
			return 0;
		}
		if (func_13(func_11()))
		{
			if (func_130(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()) && !bParam6)
		{
			if ((Var1.f_2 - Local_45.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_172(iParam3))
		{
			return 0;
		}
		if (func_13(func_11()))
		{
			if (func_171(func_11()) == 4 || func_171(func_11()) == 5)
			{
				return 0;
			}
		}
		if (func_13(func_11()))
		{
			if (!func_170(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_169(Global_99155.f_29444.f_43[iParam3]))
		{
			return 0;
		}
		if ((unk_0x9D40BBF80D8F5E8A() - Global_99146) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_168())
		{
			return 0;
		}
		if (unk_0xFCD171641347C2B0())
		{
			return 0;
		}
		if (unk_0x4341FD2C227CC4C0())
		{
			return 0;
		}
		if (!func_159(4))
		{
			return 0;
		}
		if (!func_112(5))
		{
			return 0;
		}
		if (func_158(iParam3, iParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_3 && iParam3 != 10)
		{
			return 0;
		}
		if (unk_0x4443D8D533ACB547(unk_0xB034B5B185BD9C69(unk_0xE7869D5D7816A9B6())))
		{
			if ((unk_0xB034B5B185BD9C69(unk_0xE7869D5D7816A9B6()) == unk_0x4D694385AA5DB67C(377.153f, -717.567f, 10.0536f) || unk_0xB034B5B185BD9C69(unk_0xE7869D5D7816A9B6()) == unk_0x4D694385AA5DB67C(320.9934f, 265.2515f, 82.1221f)) || unk_0xB034B5B185BD9C69(unk_0xE7869D5D7816A9B6()) == unk_0x4D694385AA5DB67C(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_158(0, 0))
		{
			return 0;
		}
		if (Global_25180)
		{
			return 0;
		}
		if (func_172(30) && !func_158(30, 0))
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
				Var5 = { Global_99155.f_1750.f_539.f_1528[iVar4 /*3*/] };
				iVar8 = Global_99155.f_1750.f_539.f_1524[iVar4];
				if (func_157(iVar8))
				{
					if (func_148(iVar4))
					{
						if (!func_147(Var5, 0f, 0f, 0f, 0))
						{
							if (unk_0xB7A628320EFF8E47(unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 0), Var5) < (210f * 210f))
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

bool func_147(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_148(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_99155.f_1750.f_539.f_1524[iParam0];
	return func_149(iVar0);
}

int func_149(int iParam0)
{
	return func_150(iParam0, 1);
}

int func_150(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_157(iParam0))
	{
		return 0;
	}
	func_151(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_151(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_152(func_74(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_152(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_156(iParam0, iParam1))
	{
		iVar0 = func_81(iParam1);
		iVar1 = func_79(iParam0);
		iVar2 = (func_79(iParam0) - func_79(iParam1));
		iVar3 = (func_81(iParam0) - func_81(iParam1));
		iVar4 = (func_155(iParam0) - func_155(iParam1));
		iVar5 = (func_73(iParam0) - func_73(iParam1));
		iVar6 = (func_97(iParam0) - func_97(iParam1));
		iVar7 = (func_154(iParam0) - func_154(iParam1));
	}
	else
	{
		iVar0 = func_81(iParam0);
		iVar1 = func_79(iParam1);
		iVar2 = (func_79(iParam1) - func_79(iParam0));
		iVar3 = (func_81(iParam1) - func_81(iParam0));
		iVar4 = (func_155(iParam1) - func_155(iParam0));
		iVar5 = (func_73(iParam1) - func_73(iParam0));
		iVar6 = (func_97(iParam1) - func_97(iParam0));
		iVar7 = (func_154(iParam1) - func_154(iParam0));
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
		iVar4 = (iVar4 + func_78(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = unk_0xF2DB717A73826179(func_153(unk_0xBBDA792448DB5A89(iVar0 + 1), 0f, 12f));
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

float func_153(float fParam0, float fParam1, float fParam2)
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

int func_154(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_155(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_156(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_157(iParam1) || !func_157(iParam0))
	{
		return 1;
	}
	iVar0 = func_79(iParam0);
	iVar1 = func_79(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_81(iParam0);
	iVar1 = func_81(iParam1);
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
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_73(iParam0);
	iVar1 = func_73(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_97(iParam0);
	iVar1 = func_97(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_154(iParam0);
	iVar1 = func_154(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_157(int iParam0)
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
	iVar0 = func_154(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_97(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_73(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_79(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_81(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_155(iParam0);
	if (iVar5 < 1 || iVar5 > func_78(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_158(int iParam0, int iParam1)
{
	if (unk_0xB519E5386FBF69E5(Global_99155.f_29444.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_159(int iParam0)
{
	int iVar0;
	
	if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
	{
		if (unk_0xD51CFE69539DB6D8(unk_0xE7869D5D7816A9B6()))
		{
			if (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
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
						if (((((((((((((((((!unk_0x69CFD69005B7F5D7(unk_0x3F80C6638E3A1A90()) || unk_0x47EF9ED961F4F559(unk_0xE7869D5D7816A9B6())) || unk_0xF3140D055686CF79(unk_0xE7869D5D7816A9B6())) || unk_0x8E2CF6ACCED3BD0F(unk_0xE7869D5D7816A9B6())) || unk_0xA2245114BF58F40D(unk_0xE7869D5D7816A9B6())) || unk_0xA01404E50546EA1D(unk_0x3F80C6638E3A1A90(), 1)) || unk_0x39CB1B5DEC5DD307(unk_0x3F80C6638E3A1A90())) || unk_0x0930CF2B56CCE2B8(unk_0xE7869D5D7816A9B6(), 0)) || func_167()) || Global_98202) || Global_25036) || func_166()) || func_18(8, -1)) || func_165()) || func_164()) || func_163()) || func_162()) || Global_99155.f_6302.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xA01404E50546EA1D(unk_0x3F80C6638E3A1A90(), 1) || func_167()) || Global_25036) || func_166()) || func_18(8, -1)) || func_163()) || func_165()) || func_164()) || func_162()) || Global_99155.f_6302.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x69CFD69005B7F5D7(unk_0x3F80C6638E3A1A90()) || unk_0x47EF9ED961F4F559(unk_0xE7869D5D7816A9B6())) || unk_0xF3140D055686CF79(unk_0xE7869D5D7816A9B6())) || unk_0x8E2CF6ACCED3BD0F(unk_0xE7869D5D7816A9B6())) || unk_0xA2245114BF58F40D(unk_0xE7869D5D7816A9B6())) || unk_0xA01404E50546EA1D(unk_0x3F80C6638E3A1A90(), 1)) || unk_0x39CB1B5DEC5DD307(unk_0x3F80C6638E3A1A90())) || unk_0x0930CF2B56CCE2B8(unk_0xE7869D5D7816A9B6(), 0)) || func_167()) || Global_98202) || Global_25036) || func_166()) || func_18(8, -1)) || func_163()) || func_165()) || func_164()) || func_162()) || Global_99155.f_6302.f_919[iVar0] == 5) || Global_36166 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x8E2CF6ACCED3BD0F(unk_0xE7869D5D7816A9B6()) || unk_0xA2245114BF58F40D(unk_0xE7869D5D7816A9B6())) || unk_0xA01404E50546EA1D(unk_0x3F80C6638E3A1A90(), 1)) || unk_0x0930CF2B56CCE2B8(unk_0xE7869D5D7816A9B6(), 0)) || func_167()) || Global_98202) || Global_25036) || func_166()) || func_18(8, -1)) || func_165()) || func_164()) || func_162()) || Global_99155.f_6302.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_167() || unk_0x44B59DB1458EE8E0(unk_0x3F80C6638E3A1A90()) > 0) || func_18(8, -1)) || func_162()) || func_161()) || Global_99155.f_6302.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_18(8, -1) || func_165()) || func_164()) || func_161()) || func_160())
						{
							return 0;
						}
						if ((unk_0xF478777FFCC96862() && unk_0x5824E40B4C3C5757() != 3) && unk_0x3ABB0F1D57A0AD8C() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0xD51CFE69539DB6D8(unk_0xE7869D5D7816A9B6()))
						{
							if ((((((((((((((unk_0x0930CF2B56CCE2B8(unk_0xE7869D5D7816A9B6(), 0) || unk_0x44B59DB1458EE8E0(unk_0x3F80C6638E3A1A90()) > 0) || unk_0x47EF9ED961F4F559(unk_0xE7869D5D7816A9B6())) || unk_0x8E2CF6ACCED3BD0F(unk_0xE7869D5D7816A9B6())) || unk_0xA2245114BF58F40D(unk_0xE7869D5D7816A9B6())) || unk_0xA01404E50546EA1D(unk_0x3F80C6638E3A1A90(), 1)) || unk_0x39CB1B5DEC5DD307(unk_0x3F80C6638E3A1A90())) || func_167()) || Global_25036) || func_166()) || func_18(8, -1)) || func_164()) || func_163()) || func_162()) || Global_99155.f_6302.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x0930CF2B56CCE2B8(unk_0xE7869D5D7816A9B6(), 0) || !unk_0x4844BC1882594FDB(unk_0x3F80C6638E3A1A90())) || !unk_0x69CFD69005B7F5D7(unk_0x3F80C6638E3A1A90())) || !unk_0xDE185266FE919B68()) || unk_0x47EF9ED961F4F559(unk_0xE7869D5D7816A9B6())) || unk_0x8E2CF6ACCED3BD0F(unk_0xE7869D5D7816A9B6())) || unk_0xA2245114BF58F40D(unk_0xE7869D5D7816A9B6())) || unk_0xA01404E50546EA1D(unk_0x3F80C6638E3A1A90(), 1)) || func_167()) || func_164()) || Global_98202) || Global_25036) || func_166()) || Global_36669) || func_18(8, -1)) || func_163()) || func_161()) || func_162()) || Global_99155.f_6302.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x0930CF2B56CCE2B8(unk_0xE7869D5D7816A9B6(), 0) || !unk_0x4844BC1882594FDB(unk_0x3F80C6638E3A1A90())) || !unk_0x69CFD69005B7F5D7(unk_0x3F80C6638E3A1A90())) || !unk_0xDE185266FE919B68()) || unk_0x51AFBB2BC4E2AAFD(unk_0x3F80C6638E3A1A90(), 0)) || unk_0x47EF9ED961F4F559(unk_0xE7869D5D7816A9B6())) || unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 1)) || unk_0x8E2CF6ACCED3BD0F(unk_0xE7869D5D7816A9B6())) || unk_0xA2245114BF58F40D(unk_0xE7869D5D7816A9B6())) || unk_0x43F528FB3D5E9B0F(unk_0xE7869D5D7816A9B6())) || unk_0xA01404E50546EA1D(unk_0x3F80C6638E3A1A90(), 1)) || unk_0x39CB1B5DEC5DD307(unk_0x3F80C6638E3A1A90())) || func_167()) || Global_98202) || Global_25036) || func_166()) || func_18(8, -1)) || func_163()) || func_161()) || func_165()) || func_164()) || func_162())
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

var func_160()
{
	return Global_91064.f_1;
}

int func_161()
{
	if (Global_88280 != -1)
	{
		return unk_0xB519E5386FBF69E5(Global_82146[Global_88280 /*34*/].f_15, 13);
	}
	return 0;
}

int func_162()
{
	if (unk_0xFF6891E21E7FC193(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_163()
{
	if (Global_69496)
	{
		return 1;
	}
	else if (Global_55572 && !Global_55578)
	{
		return 1;
	}
	return 0;
}

bool func_164()
{
	return Global_91077.f_297 > 0;
}

bool func_165()
{
	return Global_91077.f_296 > 0;
}

var func_166()
{
	return Global_1315909;
}

int func_167()
{
	if (!unk_0x00AAD79B42B3E036())
	{
		return Global_88836.f_44 == 1;
	}
	return 0;
}

int func_168()
{
	func_10();
	if (Global_3088[Global_14413 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_169(int iParam0)
{
	return func_156(func_74(), iParam0);
}

int func_170(int iParam0, int iParam1, int iParam2)
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

int func_171(int iParam0)
{
	if (!func_13(iParam0))
	{
		return 7;
	}
	return Global_99155.f_6302.f_919[iParam0];
}

bool func_172(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_174())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = unk_0xB519E5386FBF69E5(Global_99155.f_29444, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0xB519E5386FBF69E5(Global_99155.f_29444.f_1, iVar0);
	}
	return bVar1;
}

int func_173()
{
	int iVar0;
	
	if (Global_25184)
	{
		iVar0 = unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0);
		if (unk_0xC45A34912542C4EB(iVar0, 0))
		{
			if (!unk_0xAF437D7C802AB246(unk_0xBD6B21D725712BDE(iVar0, 0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_174()
{
	var uVar0;
	
	if (unk_0x6E2954F2B1919678())
	{
		if (unk_0x6935836F937B7980())
		{
			if (unk_0xACCC319A72FE75AB())
			{
				unk_0x56DCF5665F92F9BD(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0x9956FB0E4B50ECB8(&uVar0, 2);
				unk_0x9956FB0E4B50ECB8(&uVar0, 4);
				unk_0x9956FB0E4B50ECB8(&uVar0, 6);
				unk_0x9956FB0E4B50ECB8(&Global_25, 2);
				unk_0x9956FB0E4B50ECB8(&Global_25, 4);
				unk_0x9956FB0E4B50ECB8(&Global_25, 6);
				unk_0x39DEDCCD70293F58(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0x6FBD7D781A378269())
				{
					iVar0 = unk_0x623F98022BC99367(866);
					unk_0x9956FB0E4B50ECB8(&iVar0, 0);
					unk_0x305E571F148D27EA(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_136199 == 2)
	{
		return 1;
	}
	else if (Global_136199 == 3)
	{
		return 0;
	}
	if (unk_0x6FBD7D781A378269())
	{
		if (unk_0xB519E5386FBF69E5(unk_0x623F98022BC99367(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_175(int iParam0, int iParam1)
{
	if (Global_99155.f_8808[iParam0 /*12*/].f_5 == 1)
	{
		if (iParam1 == 1)
		{
		}
		return 1;
	}
	return 0;
}

void func_176()
{
	if (iLocal_51)
	{
		func_208(0);
		unk_0xBDF0A810DD6A47D3(Local_87 - Vector(10f, 10f, 10f), Local_87 + Vector(10f, 10f, 10f), 1, 1);
		unk_0x213FA0896D2B70DA();
		func_21();
		unk_0xBE426BCBF9244EC3(unk_0x3F80C6638E3A1A90());
		if (!unk_0x76B2D234F1895632(iLocal_65))
		{
			if (!unk_0x8AF655CC5761C7A2(unk_0xE7869D5D7816A9B6(), iLocal_65, 0) && !unk_0x0E6C083BC5101C8B(unk_0xE7869D5D7816A9B6(), iLocal_65, 50f, 50f, 50f, 0, 1, 0))
			{
				func_188(iLocal_65, 0, 145);
			}
		}
		if (unk_0x3761EA7F8628B81A(unk_0xE7869D5D7816A9B6(), Local_87, 100f, 100f, 100f, 0, 1, 0))
		{
			if (!unk_0xAF437D7C802AB246(iLocal_55) && !unk_0xAF437D7C802AB246(iLocal_57))
			{
				unk_0x94026C1D1DB14225(&uLocal_113);
				unk_0x33E113E52A91C5C3(0, -330.36f, 6154.03f, 31.8f, 1f, -1, 1048576000, 0, 1193033728);
				unk_0xA63704B5E5675DBB(0, iLocal_57, 16, 0f, 0f, 0f, 0f, 0f);
				unk_0x911ECBCE73F8EC3F(uLocal_113);
				unk_0xC2C4A3A9FF2FBFFF(iLocal_55, uLocal_113);
				unk_0x33A90AD8FA327B72(&uLocal_113);
				unk_0x94026C1D1DB14225(&uLocal_113);
				unk_0x33E113E52A91C5C3(0, -330.36f, 6155.03f, 31.8f, 1f, -1, 1048576000, 0, 1193033728);
				unk_0xA63704B5E5675DBB(0, iLocal_55, 16, 0f, 0f, 0f, 0f, 0f);
				unk_0x911ECBCE73F8EC3F(uLocal_113);
				unk_0xC2C4A3A9FF2FBFFF(iLocal_57, uLocal_113);
				unk_0x33A90AD8FA327B72(&uLocal_113);
			}
		}
		unk_0xC1F2137782A816E9(&iLocal_133);
		unk_0xC1F2137782A816E9(&iLocal_59);
		if (!unk_0x9A3F18713F55FCC4(unk_0x3F80C6638E3A1A90()))
		{
			unk_0x8FE59DE2329CBE64(unk_0x3F80C6638E3A1A90(), 1, 0);
		}
		if (!unk_0xAF437D7C802AB246(iLocal_55))
		{
			unk_0x1C26C4B0DAB91B21(iLocal_55, 317, 1);
			if (!unk_0xD55D878601C46BA9(iLocal_55))
			{
				unk_0x2878EC06B3F897A0(iLocal_55, 0);
			}
			unk_0x46D4C1D7588933FB(iLocal_55);
			unk_0x9BEE7E791BC4D38B(iLocal_55, 0);
		}
		else if (unk_0xD51CFE69539DB6D8(iLocal_66))
		{
			unk_0x27B54A887EC71B05(iLocal_66, 1, 1);
		}
		unk_0x506D42CB68AE4EA5(&iLocal_55);
		if (!unk_0xAF437D7C802AB246(iLocal_57))
		{
			unk_0x1C26C4B0DAB91B21(iLocal_57, 317, 1);
			unk_0x9BEE7E791BC4D38B(iLocal_57, 0);
		}
		unk_0x506D42CB68AE4EA5(&iLocal_57);
		if (!unk_0xAF437D7C802AB246(iLocal_56))
		{
			unk_0x9BEE7E791BC4D38B(iLocal_56, 0);
		}
		if (!unk_0xAF437D7C802AB246(iLocal_58))
		{
			unk_0x9BEE7E791BC4D38B(iLocal_58, 0);
		}
		unk_0x506D42CB68AE4EA5(&iLocal_56);
	}
	func_177(-1);
	unk_0x52F20802944F8DCE();
}

void func_177(int iParam0)
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
	if (func_142())
	{
		func_181(iParam0);
		unk_0xFB04AECD5A11A220(0, 0);
		Global_99146 = unk_0x9D40BBF80D8F5E8A();
		func_180(30000);
		StringCopy(&cVar0, func_179(Global_99144, 1), 64);
		if (func_47(Global_99144) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_99143, 64);
		}
		unk_0x2DE5A7EBFE83C154(&cVar0, Global_99141, (unk_0x9D40BBF80D8F5E8A() - Global_99142), 0);
	}
	else if (unk_0xB519E5386FBF69E5(Global_99151, 0) && Global_99155.f_29444.f_2 < 3)
	{
		unk_0x73817D396768E4C6(&Global_99151, 0);
	}
	func_178(&Global_25093);
	Global_99145 = 0;
	func_145(-1);
}

void func_178(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_35581)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_35580 = 0;
	Global_35582 = 0;
	Global_35619 = 15;
	Global_55575 = 0;
	Global_55576 = 0;
}

char* func_179(int iParam0, bool bParam1)
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

void func_180(int iParam0)
{
	Global_36170 = (unk_0x9D40BBF80D8F5E8A() + iParam0);
}

void func_181(int iParam0)
{
	func_182(iParam0, 0, func_187(iParam0));
}

void func_182(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_74();
	func_185(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_184(iParam0, &uVar0);
	Var1 = { func_183(&uVar0) };
}

struct<16> func_183(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_73(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_97(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_154(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_155(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_81(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_79(*uParam0), 64);
	return Var0;
}

void func_184(int iParam0, var uParam1)
{
	Global_99155.f_29444.f_43[iParam0] = *uParam1;
}

void func_185(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_79(*uParam0);
	iVar1 = func_81(*uParam0);
	iVar2 = func_155(*uParam0);
	iVar3 = func_73(*uParam0);
	iVar4 = func_97(*uParam0);
	iVar5 = func_154(*uParam0);
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
	iVar6 = func_78(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_78(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_186(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_186(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_84(uParam0, iParam1);
	func_83(uParam0, iParam2);
	func_82(uParam0, iParam3);
	func_76(uParam0, iParam5);
	func_77(uParam0, iParam4);
	func_75(uParam0, iParam6);
}

int func_187(int iParam0)
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

int func_188(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam1 == 0)
	{
		uVar1 = unk_0x9C30887BC86FF747(iParam0, &uVar0);
		if (!unk_0xF6917DE0E003509D(uVar1))
		{
			if (unk_0xC7C6DDDE84A8E734(uVar1) == unk_0xC7C6DDDE84A8E734("vehicle_gen_controller"))
			{
				return 0;
			}
		}
	}
	func_189(iParam0, iParam2);
	return 1;
}

void func_189(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_194(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = unk_0xBD6B21D725712BDE(iParam0, -1);
		if (!unk_0xD51CFE69539DB6D8(iVar0))
		{
			iVar0 = unk_0xFC6351163F828F49(iParam0, -1);
		}
		if (unk_0xD51CFE69539DB6D8(iVar0) && !unk_0xAF437D7C802AB246(iVar0))
		{
			if (unk_0x1B2DC87EFB36DF80(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0x1B2DC87EFB36DF80(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0x1B2DC87EFB36DF80(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_99155.f_1750.f_539.f_3549;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0x1B2DC87EFB36DF80(iParam0) == Global_99155.f_18731.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!unk_0xF6917DE0E003509D(&(Global_99155.f_18731.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (unk_0x04E7E853E31F41A3(unk_0xC2421167AF5744AC(iParam0), &(Global_99155.f_18731.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_99155.f_18731.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_99155.f_18731.f_5592[iVar1] = iVar2;
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
		if (unk_0x1B2DC87EFB36DF80(iParam0) == Global_99155.f_18731.f_5600[iVar1 /*78*/].f_66)
		{
			if (!unk_0xF6917DE0E003509D(&(Global_99155.f_18731.f_5600[iVar1 /*78*/].f_1)))
			{
				if (unk_0x04E7E853E31F41A3(unk_0xC2421167AF5744AC(iParam0), &(Global_99155.f_18731.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_99155.f_18731.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_99155.f_18731.f_5590 = iParam1;
	Global_69010 = iParam0;
	Global_99155.f_18731.f_5588 = 1;
	func_190(iParam0, &(Global_99155.f_18731.f_5510));
}

void func_190(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xC45A34912542C4EB(iParam0, 0))
	{
		func_193(uParam1);
		uParam1->f_66 = unk_0x1B2DC87EFB36DF80(iParam0);
		StringCopy(&(uParam1->f_1), unk_0xC2421167AF5744AC(iParam0), 16);
		*uParam1 = unk_0x0FD17058EC3E1147(iParam0);
		unk_0x95C00B12C5FCA494(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0xCFEF2B49C7ED1A18(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0x8062A8ED0C7F4651(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0x71D4F790860F6A5A(iParam0);
		uParam1->f_67 = unk_0x90DC8CCD4852ECAA(iParam0);
		uParam1->f_69 = unk_0x31211750BC54126F(iParam0);
		uParam1->f_70 = unk_0xF222368EEA38E69D(iParam0);
		unk_0xCCD9F17DFC40BAE7(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0x7C2F17D7A0663F15(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0x2C876F34337848DC(iParam0, 2))
		{
			unk_0x9956FB0E4B50ECB8(&(uParam1->f_77), 28);
		}
		if (unk_0x2C876F34337848DC(iParam0, 3))
		{
			unk_0x9956FB0E4B50ECB8(&(uParam1->f_77), 29);
		}
		if (unk_0x2C876F34337848DC(iParam0, 0))
		{
			unk_0x9956FB0E4B50ECB8(&(uParam1->f_77), 30);
		}
		if (unk_0x2C876F34337848DC(iParam0, 1))
		{
			unk_0x9956FB0E4B50ECB8(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && uParam1->f_66 != joaat("granger"))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0x657F8DC28088EB36(iParam0, 0))
		{
			uParam1->f_68 = unk_0x96616C6B22C7747D(iParam0);
		}
		if (unk_0xD1C57B32C6DE7BB6(uParam1->f_66))
		{
			if (unk_0x852BA91F4F2922FF(iParam0))
			{
				switch (unk_0x97AE2442D106D426(iParam0))
				{
					case 2:
					case 0:
						unk_0x73817D396768E4C6(&(uParam1->f_77), 23);
						unk_0x9956FB0E4B50ECB8(&(uParam1->f_77), 22);
						break;
					
					case 3:
					case 1:
						unk_0x73817D396768E4C6(&(uParam1->f_77), 23);
						unk_0x73817D396768E4C6(&(uParam1->f_77), 22);
						break;
					
					case 4:
						unk_0x9956FB0E4B50ECB8(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0x9956FB0E4B50ECB8(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0x54AAF075A06F73AA(iParam0))
		{
			unk_0x9956FB0E4B50ECB8(&(uParam1->f_77), 9);
		}
		if (unk_0xB1748D5D7F598D5E(iParam0))
		{
			unk_0x9956FB0E4B50ECB8(&(uParam1->f_77), 10);
		}
		if (unk_0x22929DCF418D8AAF(iParam0))
		{
			unk_0x9956FB0E4B50ECB8(&(uParam1->f_77), 13);
			unk_0x6A5331108E27160A(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0x3781B3A8FED51121(iParam0))
		{
			unk_0x9956FB0E4B50ECB8(&(uParam1->f_77), 12);
		}
		func_192(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0xDF705551345526F6(iParam0, iVar0 + 1))
			{
				unk_0x9956FB0E4B50ECB8(&(uParam1->f_77), func_191(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x43CA43F21BD77772(iParam0, 0))
		{
			unk_0x9956FB0E4B50ECB8(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0x73817D396768E4C6(&(uParam1->f_77), 11);
		}
		if (unk_0xB7AFC499DA70400A(iParam0, "IgnoredByQuickSave") && unk_0x4A36D1C22F217975(iParam0, "IgnoredByQuickSave"))
		{
			unk_0x9956FB0E4B50ECB8(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0x73817D396768E4C6(&(uParam1->f_77), 27);
		}
	}
}

int func_191(int iParam0)
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

int func_192(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xC45A34912542C4EB(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0xA9D3956F42AEC644(*iParam0) == 0)
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
			if (unk_0x44EF52A7698B3306(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0x1C8AF615CFEF2FE5(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0xB4686A5F9149447D(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0xB4686A5F9149447D(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

void func_193(var uParam0)
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

int func_194(int iParam0)
{
	if ((((((((((!unk_0xD51CFE69539DB6D8(iParam0) || !unk_0xC45A34912542C4EB(iParam0, 0)) || func_206(iParam0, 0, 0)) || func_206(iParam0, 1, 0)) || func_206(iParam0, 2, 0)) || func_205(iParam0) != 145) || func_204(iParam0)) || func_203(iParam0)) || func_202(iParam0)) || func_201(iParam0)) || !func_195(unk_0x1B2DC87EFB36DF80(iParam0)))
	{
		if (func_203(iParam0))
		{
		}
		if (func_203(iParam0))
		{
		}
		if (func_206(iParam0, 0, 0))
		{
		}
		if (func_206(iParam0, 1, 0))
		{
		}
		if (func_206(iParam0, 2, 0))
		{
		}
		if (func_205(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_195(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_196(iParam0))
	{
		return 0;
	}
	if (((unk_0xAA65D1F2BF4AAFFB(iParam0) || unk_0xD1C57B32C6DE7BB6(iParam0)) || unk_0xFFD2CE10E8C7E77F(iParam0)) || unk_0x437C3632DA4A7584(iParam0))
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

int func_196(int iParam0)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x6A3E3EA4770CE80A(iParam0))
	{
		return 0;
	}
	if ((((((((((((iParam0 == joaat("dodo") || iParam0 == joaat("dukes")) || iParam0 == joaat("dukes2")) || (iParam0 == joaat("dominator2") && !unk_0x00AAD79B42B3E036())) || (iParam0 == joaat("buffalo3") && !unk_0x00AAD79B42B3E036())) || (iParam0 == joaat("gauntlet2") && !unk_0x00AAD79B42B3E036())) || iParam0 == joaat("blimp2")) || iParam0 == joaat("stalion")) || (iParam0 == joaat("stalion2") && !unk_0x00AAD79B42B3E036())) || iParam0 == joaat("submersible2")) || iParam0 == joaat("marshall")) || iParam0 == joaat("blista2")) || iParam0 == joaat("blista3"))
	{
		if (!func_174())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0x49371C7B668CA46F())
		{
			if (unk_0x373784C902F4F74E(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0xCA0E36ABF4510784(Var1.f_0))
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
		if ((((!func_200() && !func_199()) && !func_198()) && !func_197()) && !func_174())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0xFD563D1BF81A2CB8() || unk_0xA78EA29AC2FFBADE()) || unk_0x7ECD3D8283875DD1())
		{
		}
		else if (!func_198())
		{
			return 0;
		}
	}
	return 1;
}

int func_197()
{
	return 0;
}

int func_198()
{
	return 1;
}

int func_199()
{
	return 1;
}

int func_200()
{
	if (unk_0x3442D8DA379C5187(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_201(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = unk_0x1B2DC87EFB36DF80(iParam0);
	uVar1 = unk_0xC2421167AF5744AC(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x04E7E853E31F41A3(uVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_196(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_202(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xD51CFE69539DB6D8(Global_88719[iVar0]))
		{
			if (Global_88719[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_203(int iParam0)
{
	int iVar0;
	
	if (unk_0xD51CFE69539DB6D8(iParam0) && unk_0xC45A34912542C4EB(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0xD51CFE69539DB6D8(Global_88689[iVar0]) && unk_0xC45A34912542C4EB(Global_88689[iVar0], 0))
			{
				if (Global_88689[iVar0] == iParam0 && unk_0x1B2DC87EFB36DF80(Global_88689[iVar0]) == unk_0x1B2DC87EFB36DF80(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_204(int iParam0)
{
	int iVar0;
	
	if (unk_0xD51CFE69539DB6D8(Global_68105.f_484[24]))
	{
		if (iParam0 == Global_68105.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0xD51CFE69539DB6D8(Global_68105.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_68105.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_205(int iParam0)
{
	int iVar0;
	
	if (!unk_0xD51CFE69539DB6D8(iParam0))
	{
		return 145;
	}
	if (!unk_0xC45A34912542C4EB(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xD51CFE69539DB6D8(Global_88689[iVar0]))
		{
			if (Global_88689[iVar0] == iParam0)
			{
				return Global_88699[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_206(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!unk_0xD51CFE69539DB6D8(iParam0) || !unk_0xC45A34912542C4EB(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_207(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || unk_0xB519E5386FBF69E5(Global_99155.f_5843[iVar9], 0))
		{
			if (unk_0x56C8E476471194F1(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_207(int iParam0, int iParam1, char* sParam2, var uParam3)
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

void func_208(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 45)
	{
		func_121(iVar0, bParam0);
		iVar0++;
	}
}

