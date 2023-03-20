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
	if (unk_0x524AF15206846700(11))
	{
		if (!unk_0xE4F7206742848BAF(iLocal_55))
		{
			if (unk_0x17297F499604E052(iLocal_55))
			{
				unk_0xBFE5E4F12033E3EF(iLocal_55);
			}
		}
		if (!unk_0xE4F7206742848BAF(iLocal_57))
		{
			if (unk_0x17297F499604E052(iLocal_57))
			{
				unk_0xBFE5E4F12033E3EF(iLocal_57);
			}
		}
		func_177();
	}
	if (func_176(283, 1))
	{
		unk_0x7C3AA2D27E16E2AD();
	}
	if (func_147(Local_52, -1, 0, 0, 0))
	{
		if ((unk_0xEFEADD7EBD01C0A6() > 2 && unk_0xEFEADD7EBD01C0A6() < 15) && !unk_0x14B5449970A1C2DA(unk_0x4D29100D094E5511(), 0))
		{
		}
		else
		{
			unk_0x7C3AA2D27E16E2AD();
		}
		func_144(-1);
	}
	else
	{
		unk_0x7C3AA2D27E16E2AD();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x7742FB54677E08D9() || bLocal_116)
		{
			if (!func_143())
			{
				if (func_142())
				{
					func_177();
				}
			}
			unk_0x14CA049761F06FFB("RE_SDRM", 0);
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
						if (!unk_0xC2AE0A979757C34A(uLocal_318))
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
							if (unk_0x676D4CD42E0837CA(unk_0xA8CFDE65C45F813B(unk_0x27D769C59BC9D030(), 1), Local_87, 1) < 100f)
							{
								if (!unk_0xB1FDEE75A71D93F5())
								{
									unk_0xE592C68A352C5B0A("sdrm_mcs_2", 8);
								}
								if (unk_0xB1FDEE75A71D93F5())
								{
									if (unk_0x95921D2FB0B6ACDD())
									{
										if ((((!unk_0xE4F7206742848BAF(iLocal_55) && !unk_0xE4F7206742848BAF(iLocal_57)) && !unk_0xE4F7206742848BAF(iLocal_56)) && !unk_0xE4F7206742848BAF(iLocal_58)) && !unk_0x2006A8C1BA2AFE80(iLocal_132, 0))
										{
											unk_0xB68D048BCF11270A("Groom", iLocal_55, 0);
											unk_0xB68D048BCF11270A("Groomsman", iLocal_57, 0);
											unk_0xB68D048BCF11270A("Bride", iLocal_56, 0);
											unk_0xB68D048BCF11270A("Father_of_the_bride", iLocal_58, 0);
										}
									}
								}
							}
							else if (unk_0xB1FDEE75A71D93F5())
							{
								unk_0x18159512D699D089();
							}
							if (bLocal_118)
							{
								if (func_60(1, 0, 1))
								{
									func_25();
								}
							}
							else if (!unk_0xE4F7206742848BAF(iLocal_57))
							{
								if (unk_0x9A4E2270C2271219(iLocal_57, 0))
								{
									if (unk_0x7B4654D62B7E0E9E(uLocal_322))
									{
										unk_0x9403D0F4C7711241(&uLocal_322);
										if (unk_0x7B4654D62B7E0E9E(uLocal_320))
										{
											unk_0x9403D0F4C7711241(&uLocal_320);
										}
										if (!unk_0x7B4654D62B7E0E9E(uLocal_320))
										{
											uLocal_320 = func_23(Local_67, 1);
										}
									}
								}
							}
						}
						if (func_3())
						{
							if (!unk_0xE4F7206742848BAF(iLocal_55))
							{
								unk_0x3DA9DFE29006A19F(iLocal_55, unk_0x27D769C59BC9D030(), 1000f, -1, 0, 0);
							}
							if (!unk_0xE4F7206742848BAF(iLocal_57))
							{
								unk_0x3DA9DFE29006A19F(iLocal_57, unk_0x27D769C59BC9D030(), 1000f, -1, 0, 0);
							}
							if (!unk_0xE4F7206742848BAF(iLocal_56))
							{
								unk_0x3DA9DFE29006A19F(iLocal_56, unk_0x27D769C59BC9D030(), 1000f, -1, 0, 0);
							}
							if (!unk_0xE4F7206742848BAF(iLocal_58))
							{
								unk_0x3DA9DFE29006A19F(iLocal_58, unk_0x27D769C59BC9D030(), 1000f, -1, 0, 0);
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
	if (!unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()))
	{
		if (unk_0xE4F7206742848BAF(iLocal_55))
		{
			return 1;
		}
		else
		{
			if (unk_0x77F1B7F6C32990D6(iLocal_55, unk_0x27D769C59BC9D030(), 1) || unk_0xA8ED23ED7AA60A97(iLocal_55))
			{
				return 1;
			}
			if (bLocal_116)
			{
				if (unk_0x14B5449970A1C2DA(unk_0x4D29100D094E5511(), 0))
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
	if (!unk_0x2006A8C1BA2AFE80(iLocal_59, 0))
	{
		if ((!unk_0x0B4DDB992C7BCF57(iLocal_59, 0) || unk_0x60FBB0737865465C(iLocal_59)) || unk_0xA8ED23ED7AA60A97(iLocal_59))
		{
			func_21();
			if (func_4(&uLocal_136, "stagdau", "stagdwrcar", 4, 0, 0, 0))
			{
				return 1;
			}
		}
		if (unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 0))
		{
			if (unk_0x07B15F13B2FC3D21(unk_0x27D769C59BC9D030(), joaat("towtruck")) || unk_0x07B15F13B2FC3D21(unk_0x27D769C59BC9D030(), joaat("towtruck2")))
			{
				if (unk_0x10BD59A398C824DA(unk_0xD9FFE8E1642C81E2(unk_0x27D769C59BC9D030(), 0), iLocal_59))
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
	if (!unk_0xE4F7206742848BAF(iLocal_55))
	{
		if (!unk_0xC4F9E3DD5445F8E4(iLocal_55, unk_0x27D769C59BC9D030(), 150f, 150f, 150f, 0, 1, 0))
		{
			if (!unk_0x2006A8C1BA2AFE80(iLocal_59, 0))
			{
				if (unk_0x1C48F76B3D032074(unk_0x27D769C59BC9D030(), iLocal_59, 0))
				{
					unk_0xB2758D8199128B65(unk_0x4D29100D094E5511(), 1, 0);
					unk_0xBF46735BC3D9C3D9(unk_0x4D29100D094E5511(), 0f);
				}
			}
			return 1;
		}
	}
	if (iLocal_49 >= 1)
	{
		if (bLocal_123)
		{
			if (unk_0xE4F7206742848BAF(iLocal_57))
			{
				func_21();
				return 1;
			}
			else if (unk_0x77F1B7F6C32990D6(iLocal_57, unk_0x27D769C59BC9D030(), 1))
			{
				func_21();
				return 1;
			}
		}
		if (!unk_0x2006A8C1BA2AFE80(iLocal_59, 0))
		{
			if (!unk_0xC4F9E3DD5445F8E4(iLocal_59, unk_0x27D769C59BC9D030(), 20f, 20f, 20f, 0, 1, 0))
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
			if (!unk_0xC4F9E3DD5445F8E4(iLocal_59, unk_0x27D769C59BC9D030(), 150f, 150f, 150f, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	if (iLocal_49 == 3)
	{
		if (!unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()))
		{
			if (unk_0xE4F7206742848BAF(iLocal_56) || unk_0xE4F7206742848BAF(iLocal_58))
			{
				return 1;
			}
			else if (unk_0x77F1B7F6C32990D6(iLocal_56, unk_0x27D769C59BC9D030(), 1) || unk_0x77F1B7F6C32990D6(iLocal_58, unk_0x27D769C59BC9D030(), 1))
			{
				return 1;
			}
		}
		if (!unk_0xE4F7206742848BAF(iLocal_57))
		{
			if (!unk_0xC4F9E3DD5445F8E4(iLocal_57, unk_0x27D769C59BC9D030(), 20f, 20f, 20f, 0, 1, 0) && iLocal_310)
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
			if (!unk_0xC4F9E3DD5445F8E4(iLocal_57, unk_0x27D769C59BC9D030(), 150f, 150f, 150f, 0, 1, 0))
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
					unk_0x94DA6AACA7F07289(0);
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
		if (unk_0x1BF2632AED6B5924())
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
			unk_0xF17F4B0641AB2DE1(&Global_2283, 20);
			unk_0xF17F4B0641AB2DE1(&Global_2284, 17);
			unk_0xF17F4B0641AB2DE1(&Global_2285, 0);
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
			if (unk_0x2DB75A8F096AB1F1(unk_0x4D29100D094E5511()))
			{
				if (unk_0x1FEDE585C0F25C08(unk_0x27D769C59BC9D030()))
				{
					return 0;
				}
				if (func_9())
				{
					return 0;
				}
				if (unk_0x431C14C947878B67(unk_0x27D769C59BC9D030()))
				{
					return 0;
				}
				if (unk_0xBD036012AF60D938(unk_0x27D769C59BC9D030()))
				{
					return 0;
				}
				if (unk_0x225B3357C492A629(unk_0x27D769C59BC9D030()))
				{
					return 0;
				}
				if (unk_0x397ABA0C937BB0B4(unk_0x27D769C59BC9D030(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69489)
				{
					if (unk_0xA8ED23ED7AA60A97(unk_0x27D769C59BC9D030()))
					{
						return 0;
					}
					if (unk_0x300FBC9A9F898890(unk_0x4D29100D094E5511()))
					{
						return 0;
					}
					if (unk_0xB0821632434D6AED(unk_0x27D769C59BC9D030()))
					{
						return 0;
					}
					if (unk_0x37C10326493962AC(unk_0x4D29100D094E5511()))
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
				if (unk_0xF426A5DE932B3BEE(Global_2283, 9))
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
	unk_0x94DA6AACA7F07289(0);
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
	unk_0xF17F4B0641AB2DE1(&Global_2284, 16);
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
	
	if (Global_69489)
	{
		iVar0 = 0;
		unk_0x4CF6F4DF2C64D299(unk_0x27D769C59BC9D030(), &iVar1, 1);
		if (unk_0x2DB75A8F096AB1F1(unk_0x4D29100D094E5511()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x32B2DBD1EB9EECE3() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x2DB75A8F096AB1F1(unk_0x4D29100D094E5511()))
	{
		if (unk_0xCDA4E7364CE84AA7(unk_0x27D769C59BC9D030(), 78, 1))
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
		if (!unk_0x2006A8C1BA2AFE80(unk_0x27D769C59BC9D030(), 0))
		{
			if (unk_0x946C63BD9EF05437(unk_0x27D769C59BC9D030()) == Global_101154.f_32575[0 /*29*/])
			{
				Global_14413 = 0;
			}
			else if (unk_0x946C63BD9EF05437(unk_0x27D769C59BC9D030()) == Global_101154.f_32575[1 /*29*/])
			{
				Global_14413 = 1;
			}
			else if (unk_0x946C63BD9EF05437(unk_0x27D769C59BC9D030()) == Global_101154.f_32575[2 /*29*/])
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
		if (Global_69489)
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
	return Global_101154.f_1826.f_539.f_3549;
}

void func_12()
{
	int iVar0;
	
	if (unk_0xD2CFFE76B625AE55(unk_0x27D769C59BC9D030()))
	{
		if (func_15(Global_101154.f_1826.f_539.f_3549) != unk_0x946C63BD9EF05437(unk_0x27D769C59BC9D030()))
		{
			iVar0 = func_14(unk_0x27D769C59BC9D030());
			if (func_13(iVar0) && (!func_16(14) || Global_100106))
			{
				if (Global_101154.f_1826.f_539.f_3549 != iVar0 && func_13(Global_101154.f_1826.f_539.f_3549))
				{
					Global_101154.f_1826.f_539.f_3550 = Global_101154.f_1826.f_539.f_3549;
				}
				Global_101154.f_1826.f_539.f_3551 = iVar0;
				Global_101154.f_1826.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_101154.f_1826.f_539.f_3549 != 145)
			{
				Global_101154.f_1826.f_539.f_3551 = Global_101154.f_1826.f_539.f_3549;
			}
			return;
		}
	}
	Global_101154.f_1826.f_539.f_3549 = 145;
}

bool func_13(int iParam0)
{
	return iParam0 < 3;
}

int func_14(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD2CFFE76B625AE55(iParam0))
	{
		iVar1 = unk_0x946C63BD9EF05437(iParam0);
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
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_16(int iParam0)
{
	return Global_35711 == iParam0;
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
				return Global_1338622.f_203[iParam1];
			}
			break;
	}
	return unk_0xF426A5DE932B3BEE(Global_1338622.f_949, iParam0);
}

void func_19()
{
	unk_0xF022734652B12EB3();
	Global_16723 = 0;
	if ((unk_0x0EFEEF8E6B0B4E34() || Global_14413.f_1 == 9) || Global_14412 == 1)
	{
		unk_0x94DA6AACA7F07289(0);
		Global_15712 = 6;
		Global_14413.f_1 = 3;
		return;
	}
	if (unk_0x1BF2632AED6B5924())
	{
		unk_0x94DA6AACA7F07289(1);
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
	unk_0xF022734652B12EB3();
	Global_16723 = 0;
	if (unk_0x1BF2632AED6B5924())
	{
		unk_0x94DA6AACA7F07289(0);
		Global_15712 = 6;
	}
}

var func_23(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x43B8950858CAD66F(Param0);
	unk_0xC5B4E9487339A2BB(uVar0, func_24(unk_0x0E063DDE8855EC52(), 1f, 1f));
	unk_0xAB27F3DE6390C749(uVar0, iParam3);
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
			unk_0x2C71E9DE00620D10(0);
			iLocal_310 = 0;
			iLocal_131++;
			break;
		
		case 1:
			iLocal_131++;
			break;
		
		case 2:
			if ((((!unk_0xE4F7206742848BAF(iLocal_55) && !unk_0xE4F7206742848BAF(iLocal_57)) && !unk_0xE4F7206742848BAF(iLocal_56)) && !unk_0xE4F7206742848BAF(iLocal_58)) && !unk_0x2006A8C1BA2AFE80(iLocal_132, 0))
			{
				if (func_51())
				{
					unk_0x90F1D412CA4CF490(iLocal_132, "SDRM_Car", 0, 0, 0);
					unk_0x90F1D412CA4CF490(iLocal_55, "Groom", 0, 0, 0);
					unk_0x90F1D412CA4CF490(iLocal_57, "Groomsman", 0, 0, 0);
					unk_0x90F1D412CA4CF490(iLocal_56, "Bride", 0, 0, 0);
					unk_0x90F1D412CA4CF490(iLocal_58, "Father_of_the_bride", 0, 0, 0);
					unk_0xBC7FB8D910011C75(4);
					iLocal_131++;
				}
			}
			break;
		
		case 3:
			if (unk_0x260AD5C1BAEF7765(0))
			{
				if (!unk_0x2006A8C1BA2AFE80(iLocal_132, 0))
				{
					unk_0xFA3ED0FFF3FD8F34(iLocal_132);
					unk_0x48C585788C05DB37(iLocal_132, 1);
					unk_0x3DFCFAD590F85BF7(1);
					unk_0x83DB85FD25128C55(1);
					unk_0x0B28AEB595CB09AF(0f);
					unk_0x4523FDDB9926E1D8(-7f, 1065353216);
				}
				iLocal_131++;
			}
			break;
		
		case 4:
			unk_0xF6ADC11BDB5ECA41(&iLocal_55);
			unk_0xF6ADC11BDB5ECA41(&iLocal_57);
			unk_0xF6ADC11BDB5ECA41(&iLocal_56);
			unk_0xF6ADC11BDB5ECA41(&iLocal_58);
			func_52(0, 1, 1, 0);
			unk_0x2C71E9DE00620D10(1);
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
	if (Global_91317.f_8)
	{
		if (Global_91317.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_91317.f_10 > 1)
	{
		return 0;
	}
	Global_91317.f_10++;
	return 1;
}

bool func_29(bool bParam0)
{
	if (!bParam0 && unk_0xD32535FA4397160F(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xF426A5DE932B3BEE(Global_69737, 0);
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
			Global_101154.f_29520.f_2 = 3;
		}
		if (func_38(iParam0, iParam1) != 322)
		{
			func_32(func_38(iParam0, iParam1), Local_45.f_0, Local_45.f_1);
		}
		Global_101142 = iParam1;
		if (Global_101140 == 0)
		{
			if (((Global_101143 == 1 || Global_101143 == 5) || Global_101143 == 11) || Global_101143 == 25)
			{
				func_31(2);
			}
			else if ((Global_101143 == 26 || Global_101143 == 8) || Global_101143 == 17)
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
	Global_101140 = iParam0;
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
	if (Global_101154.f_8884[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_101154.f_8884[iParam0 /*12*/].f_6 == 11 || Global_101154.f_8884[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_101154.f_8884[iParam0 /*12*/].f_5 = 1;
		Global_101154.f_8884[iParam0 /*12*/].f_10 = uParam1;
		Global_101154.f_8884[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			unk_0x1C7E45166E04C12C(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x1C7E45166E04C12C(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x1C7E45166E04C12C(joaat("num_hidden_packages_3"), 50, 0);
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
	Global_100890 = 0;
	Global_100891 = 0;
	Global_100892 = 0;
	Global_100893 = 0;
	Global_100894 = 0;
	Global_100895 = 0;
	Global_100896 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_101154.f_8884.f_3853;
	Global_101154.f_8884.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_101154.f_8884[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_101154.f_8884[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_100890++;
					fVar1 = (fVar1 + Global_101154.f_8884[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_100891++;
					fVar2 = (fVar2 + Global_101154.f_8884[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_100892++;
					fVar3 = (fVar3 + Global_101154.f_8884[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_100893++;
					fVar4 = (fVar4 + Global_101154.f_8884[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_100894++;
					fVar5 = (fVar5 + (Global_101154.f_8884[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_100895++;
					fVar6 = (fVar6 + Global_101154.f_8884[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_100896++;
					fVar7 = (fVar7 + Global_101154.f_8884[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_100873 > 0)
	{
		if (Global_100890 == Global_100873)
		{
			fVar1 = 55f;
		}
	}
	if (Global_100874 > 0)
	{
		if (Global_100891 == Global_100874)
		{
			fVar2 = 10f;
		}
	}
	if (Global_100875 > 0)
	{
		if (Global_100892 == Global_100875)
		{
			fVar3 = 0f;
		}
	}
	if (Global_100876 > 0)
	{
		if (Global_100893 == Global_100876)
		{
			fVar4 = 10f;
		}
	}
	if (Global_100877 > 0)
	{
		if (((Global_100894 == Global_100877 || (Global_100877 * 10 / Global_100894) < 41) || Global_100894 > Global_100880) || Global_100894 == Global_100880)
		{
			if (!unk_0xF426A5DE932B3BEE(Global_101154.f_8884.f_3856, 14))
			{
				if (Global_100894 == Global_100877)
				{
					unk_0x1C7E45166E04C12C(joaat("num_rndevents_completed"), Global_100877, 0);
					unk_0x26545538B51562AD(&(Global_101154.f_8884.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_100878 > 0)
	{
		if (Global_100895 == Global_100878)
		{
			fVar6 = 15f;
		}
	}
	if (Global_100879 > 0)
	{
		if (Global_100896 == Global_100879)
		{
			fVar7 = 5f;
		}
	}
	Global_101154.f_8884.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_100894 > Global_100880 || Global_100894 == Global_100880)
	{
		iVar9 = Global_100880;
	}
	else
	{
		iVar9 = Global_100894;
	}
	unk_0xE2A8B026FA4DDFFF(joaat("num_missions_completed"), Global_100890, 1);
	unk_0xE2A8B026FA4DDFFF(joaat("num_missions_available"), Global_100873, 1);
	unk_0xE2A8B026FA4DDFFF(joaat("num_minigames_completed"), Global_100891, 1);
	unk_0xE2A8B026FA4DDFFF(joaat("num_minigames_available"), Global_100874, 1);
	unk_0xE2A8B026FA4DDFFF(joaat("num_oddjobs_completed"), Global_100892, 1);
	unk_0xE2A8B026FA4DDFFF(joaat("num_oddjobs_available"), Global_100875, 1);
	unk_0xE2A8B026FA4DDFFF(joaat("num_rndpeople_completed"), Global_100893, 1);
	unk_0xE2A8B026FA4DDFFF(joaat("num_rndpeople_available"), Global_100876, 1);
	unk_0xE2A8B026FA4DDFFF(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0xE2A8B026FA4DDFFF(joaat("num_rndevents_available"), Global_100880, 1);
	unk_0xE2A8B026FA4DDFFF(joaat("num_misc_completed"), (Global_100896 + Global_100895), 1);
	unk_0xE2A8B026FA4DDFFF(joaat("num_misc_available"), (Global_100879 + Global_100878), 1);
	Global_100897 = (Global_100890 * 100 / Global_100873);
	Global_100899 = ((Global_100892 + Global_100891) * 100 / (Global_100875 + Global_100874));
	Global_100898 = ((Global_100893 + iVar9) * 100 / (Global_100876 + Global_100880));
	Global_100900 = ((Global_100895 + Global_100896) * 100 / (Global_100878 + Global_100879));
	unk_0x349899F07A0A435F(joaat("total_progress_made"), Global_101154.f_8884.f_3853, 1);
	unk_0xE2A8B026FA4DDFFF(joaat("percent_story_missions"), Global_100897, 1);
	unk_0xE2A8B026FA4DDFFF(joaat("percent_ambient_missions"), Global_100898, 1);
	unk_0xE2A8B026FA4DDFFF(joaat("percent_oddjobs"), Global_100899, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_101154.f_8884.f_3853))
	{
		func_35(13, unk_0xF34EE736CF047844(Global_101154.f_8884.f_3853));
	}
	if (!unk_0x1AB59BFCD46AAD2F())
	{
		if (!Global_69489)
		{
			if (func_34() == 2 == 0 && !unk_0x0E063DDE8855EC52())
			{
				if (unk_0x878E45E8C4AA7963())
				{
					Global_100888 = 0;
				}
				if (!Global_55749)
				{
					func_28();
				}
			}
		}
	}
}

int func_34()
{
	return Global_25120;
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
	iVar0 = unk_0x4ED42D8FD5CFED41(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x4BF394A19129A9AD(iParam0, iParam1);
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
	
	if (iParam2 == -1)
	{
		iParam2 = func_37();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0x0093FE57B4BFD543((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xC5B2C78271F9ACBC((iParam0 - 0)) * 64);
		iVar0 = unk_0x6DC1154549B437EC(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x0093FE57B4BFD543((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xC5B2C78271F9ACBC((iParam0 - 192)) * 64);
		iVar0 = unk_0x6DC1154549B437EC(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x0093FE57B4BFD543((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xC5B2C78271F9ACBC((iParam0 - 513)) * 64);
		iVar0 = unk_0x6DC1154549B437EC(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x0093FE57B4BFD543((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xC5B2C78271F9ACBC((iParam0 - 705)) * 64);
		iVar0 = unk_0x6DC1154549B437EC(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x86AA01B00A711C0B((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xC5B2C78271F9ACBC((iParam0 - 3111)) * 64);
		iVar0 = unk_0x6DC1154549B437EC(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x86AA01B00A711C0B((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xC5B2C78271F9ACBC((iParam0 - 2919)) * 64);
		iVar0 = unk_0x6DC1154549B437EC(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0xD69CE51110B42B5E((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xC5B2C78271F9ACBC((iParam0 - 4207)) * 64);
		iVar0 = unk_0x6DC1154549B437EC(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0xD69CE51110B42B5E((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xC5B2C78271F9ACBC((iParam0 - 4335)) * 64);
		iVar0 = unk_0x6DC1154549B437EC(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0xD69CE51110B42B5E((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0xC5B2C78271F9ACBC((iParam0 - 6029)) * 64);
		iVar0 = unk_0x6DC1154549B437EC(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = unk_0xD69CE51110B42B5E((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0xC5B2C78271F9ACBC((iParam0 - 7385)) * 64);
		iVar0 = unk_0x6DC1154549B437EC(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = unk_0xD69CE51110B42B5E((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0xC5B2C78271F9ACBC((iParam0 - 7321)) * 64);
		iVar0 = unk_0x6DC1154549B437EC(uVar12, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_37()
{
	return Global_1312747;
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
		unk_0x26545538B51562AD(&(Global_101154.f_24935.f_150[iVar1]), iVar0);
	}
}

void func_41(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_42(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_42(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0xC1C5B83BB6719C6C(sParam0, ""))
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
	while (iVar0 < Global_101154.f_24935.f_145)
	{
		if (unk_0xC1C5B83BB6719C6C(&(Global_101154.f_24935[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_101154.f_24935.f_145 < 9)
	{
		StringCopy(&(Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_4), sParam1, 16);
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_8 = (unk_0xA0F74982C6AAA9D4() + iParam3);
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_9 = iParam5;
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_11 = iParam6;
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_12 = uParam2;
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_13 = iParam7;
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_14 = iParam8;
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_10 = ((unk_0xA0F74982C6AAA9D4() + iParam3) + iParam4);
		}
		else
		{
			Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_10 = -1;
		}
		Global_101154.f_24935.f_145++;
		func_43();
	}
}

void func_43()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_101154.f_24935.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_101154.f_24935.f_145)
	{
		if (unk_0xF426A5DE932B3BEE(Global_101154.f_24935[iVar0 /*16*/].f_11, 0))
		{
			if (Global_101154.f_24935[iVar0 /*16*/].f_12 > Global_101154.f_24935.f_146[0])
			{
				Global_101154.f_24935.f_146[0] = Global_101154.f_24935[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xF426A5DE932B3BEE(Global_101154.f_24935[iVar0 /*16*/].f_11, 1))
		{
			if (Global_101154.f_24935[iVar0 /*16*/].f_12 > Global_101154.f_24935.f_146[1])
			{
				Global_101154.f_24935.f_146[1] = Global_101154.f_24935[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xF426A5DE932B3BEE(Global_101154.f_24935[iVar0 /*16*/].f_11, 2))
		{
			if (Global_101154.f_24935[iVar0 /*16*/].f_12 > Global_101154.f_24935.f_146[2])
			{
				Global_101154.f_24935.f_146[2] = Global_101154.f_24935[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_44()
{
	func_12();
	switch (Global_101154.f_1826.f_539.f_3549)
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
		return unk_0xF426A5DE932B3BEE(Global_101154.f_24935.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_46(int iParam0, int iParam1)
{
	unk_0x26545538B51562AD(&(Global_101154.f_29520.f_8[iParam0]), iParam1);
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
	
	StringCopy(&Var0, unk_0x3AA961419D971CB2(), 64);
	uVar16 = func_49(Var0);
	return uVar16;
}

int func_49(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0x70ABFF261710305D(&cParam0))
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
	
	bVar0 = unk_0xAA28218C604F91A5();
	if (!Global_69488)
	{
		if (!bVar0)
		{
			Global_69488 = 1;
		}
	}
	return bVar0;
}

void func_52(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0x0952A7BA90103950(unk_0x4D29100D094E5511());
		unk_0xE081805B1043BAAF(unk_0x4D29100D094E5511(), 1);
		unk_0x3BC80E39565DA04E(unk_0x4D29100D094E5511(), 1);
		func_59(1);
		unk_0xD14C6D196E70C6B0();
		unk_0x7CC7CFD7BFFAAC4C();
		if (Global_14413.f_1 > 3)
		{
			if (unk_0x0EFEEF8E6B0B4E34())
			{
				unk_0x94DA6AACA7F07289(0);
			}
			if (!func_8())
			{
				Global_14413.f_1 = 3;
			}
			Global_15712 = 5;
		}
		func_58(1, iParam3, iParam2, 0);
		Global_55755 = 1;
		Global_68061 = 1;
		Global_69487 = 1;
	}
	else
	{
		func_59(0);
		unk_0xFF2A2F3774F8F7B6();
		Global_55755 = 0;
		if (bParam1)
		{
			unk_0x2E6328B1B95241F5();
		}
		unk_0xE081805B1043BAAF(unk_0x4D29100D094E5511(), 0);
		unk_0x3BC80E39565DA04E(unk_0x4D29100D094E5511(), 0);
		func_58(0, iParam3, iParam2, 0);
		if (unk_0x0E063DDE8855EC52())
		{
			if (((!unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()) && !func_56(unk_0x4D29100D094E5511())) && !func_54(unk_0x4D29100D094E5511(), 0)) && !func_53())
			{
				unk_0xDC994C828DF12354(unk_0x27D769C59BC9D030(), 0);
			}
		}
		else if (!unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()) && !func_56(unk_0x4D29100D094E5511()))
		{
			unk_0xDC994C828DF12354(unk_0x27D769C59BC9D030(), 0);
		}
		Global_69487 = 0;
	}
}

bool func_53()
{
	return unk_0xF426A5DE932B3BEE(Global_1587523[unk_0x4D29100D094E5511() /*444*/].f_39.f_18, 14);
}

bool func_54(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x4D29100D094E5511())
	{
		bVar0 = func_55(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1587523[iParam0 /*444*/].f_195 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x27C9C05A6B4E58D2(iParam0))
		{
			bVar0 = unk_0xEDB589A956C2855F(iParam0) == 8;
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
	if (Global_1315891[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312741[iVar1];
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
		if (iParam0 == unk_0x4D29100D094E5511())
		{
			return 1;
		}
	}
	if (unk_0xF426A5DE932B3BEE(Global_2418472[iParam0 /*313*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_57()
{
	return unk_0xF426A5DE932B3BEE(Global_2359301, 3);
}

int func_58(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xDFCB321F1D24137F())
	{
		if (unk_0xE9F84F88F70445CA() != iParam0 && uParam2)
		{
			unk_0x4959DFBF16606CE5(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_59(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x26545538B51562AD(&Global_2283, 13);
	}
	else
	{
		unk_0xF17F4B0641AB2DE1(&Global_2283, 13);
	}
}

int func_60(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0x8A4F12025F4EA58F())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x2006A8C1BA2AFE80(unk_0x27D769C59BC9D030(), 0))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 0))
	{
		if (!unk_0x57ADE64D2E3798F0(unk_0x27D769C59BC9D030()))
		{
			return 0;
		}
		iVar0 = unk_0xD9FFE8E1642C81E2(unk_0x27D769C59BC9D030(), 0);
		if (bParam0)
		{
			if (unk_0x2006A8C1BA2AFE80(iVar0, 0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0x2006A8C1BA2AFE80(iVar0, 0))
			{
				if (unk_0x9297C590C99228DC(iVar0, -1) != unk_0x27D769C59BC9D030())
				{
					return 0;
				}
			}
		}
		if (!unk_0x2006A8C1BA2AFE80(iVar0, 0))
		{
			if (unk_0x45492A3571FB6301(iVar0) < 0.95f || unk_0x45492A3571FB6301(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0x0E14B2E6EB7392B5(unk_0x4D29100D094E5511()))
	{
		return 0;
	}
	if (!unk_0x5E91AC2C8CAC699C(unk_0x4D29100D094E5511()))
	{
		return 0;
	}
	return 1;
}

void func_61()
{
	if (!unk_0x2006A8C1BA2AFE80(iLocal_59, 0) && !unk_0x2006A8C1BA2AFE80(iLocal_55, 0))
	{
		if (!iLocal_117)
		{
			if (unk_0x1C48F76B3D032074(unk_0x27D769C59BC9D030(), iLocal_59, 0) && unk_0x1C48F76B3D032074(iLocal_55, iLocal_59, 0))
			{
				iLocal_117 = 1;
				if (unk_0x7B4654D62B7E0E9E(uLocal_319))
				{
					unk_0x9403D0F4C7711241(&uLocal_319);
				}
				if (iLocal_122 && !bLocal_118)
				{
					if (!unk_0x7B4654D62B7E0E9E(uLocal_320))
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
			if (unk_0x1C48F76B3D032074(unk_0x27D769C59BC9D030(), iLocal_59, 0))
			{
				if (!unk_0x1C48F76B3D032074(iLocal_55, iLocal_59, 0))
				{
					if (!func_65())
					{
					}
					if (unk_0x7B4654D62B7E0E9E(uLocal_319))
					{
						unk_0x9403D0F4C7711241(&uLocal_319);
					}
					if (!unk_0x7B4654D62B7E0E9E(uLocal_319))
					{
						uLocal_319 = func_64(iLocal_55, 0, 145);
						unk_0xD1B211F2EB392B46(uLocal_319, 1);
					}
					iLocal_117 = 0;
					iLocal_119 = 1;
				}
			}
		}
		if (iLocal_117)
		{
			if (!unk_0x1C48F76B3D032074(unk_0x27D769C59BC9D030(), iLocal_59, 0))
			{
				if (!func_65())
				{
				}
				if (!unk_0x7B4654D62B7E0E9E(uLocal_319))
				{
					uLocal_319 = func_62(iLocal_59, 0, 0);
					unk_0xD1B211F2EB392B46(uLocal_319, 1);
				}
				if (unk_0x7B4654D62B7E0E9E(uLocal_320))
				{
					unk_0x9403D0F4C7711241(&uLocal_320);
				}
				iLocal_117 = 0;
			}
			if (!unk_0x1C48F76B3D032074(unk_0x27D769C59BC9D030(), iLocal_59, 0) && !unk_0x1C48F76B3D032074(iLocal_55, iLocal_59, 0))
			{
				if (!func_65())
				{
				}
				if (!unk_0x7B4654D62B7E0E9E(uLocal_319))
				{
					uLocal_319 = func_62(iLocal_59, 0, 0);
					unk_0xD1B211F2EB392B46(uLocal_319, 1);
				}
				if (unk_0x7B4654D62B7E0E9E(uLocal_320))
				{
					unk_0x9403D0F4C7711241(&uLocal_320);
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
	
	if (!unk_0xD2CFFE76B625AE55(iParam0))
	{
		return 0;
	}
	uVar0 = unk_0xABF4388EB11AD060(iParam0);
	if (unk_0x8F8858152A9B9959(iParam0))
	{
		unk_0xC5B4E9487339A2BB(uVar0, func_24(unk_0x0E063DDE8855EC52(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xD1B211F2EB392B46(uVar0, bParam1);
		}
		else
		{
			unk_0x8D910E607F73E53D(uVar0, 2);
		}
	}
	else if (unk_0x54F37403E01EFD97(iParam0))
	{
		unk_0xC5B4E9487339A2BB(uVar0, func_24(unk_0x0E063DDE8855EC52(), 0.7f, 0.7f));
		unk_0xD1B211F2EB392B46(uVar0, bParam1);
	}
	else if (unk_0xEB9962C184DA6150(iParam0))
	{
		unk_0xC5B4E9487339A2BB(uVar0, func_24(unk_0x0E063DDE8855EC52(), 0.7f, 0.7f));
	}
	return uVar0;
}

var func_64(int iParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_63(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0x7B4654D62B7E0E9E(uVar0)) && unk_0x2A19A119886EC3BF(&(Global_101154.f_32575[iParam2 /*29*/].f_3)))
	{
		unk_0xC5B67A5E18AF2B72(uVar0, &(Global_101154.f_32575[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_65()
{
	if (Global_15712 != 0 || unk_0x1BF2632AED6B5924())
	{
		return 1;
	}
	return 0;
}

void func_66()
{
	if (unk_0xD2CFFE76B625AE55(iLocal_55))
	{
		if (!unk_0xE4F7206742848BAF(iLocal_55))
		{
			if (unk_0xC4F9E3DD5445F8E4(iLocal_55, unk_0x27D769C59BC9D030(), 4f, 4f, 4f, 0, 1, 0))
			{
				if ((!unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 0) && !unk_0x9A4E2270C2271219(iLocal_55, 0)) || unk_0x99A6DF927B71E935(unk_0x27D769C59BC9D030()))
				{
					if (unk_0x7B4654D62B7E0E9E(uLocal_321))
					{
						unk_0x9403D0F4C7711241(&uLocal_321);
						if (!unk_0x7B4654D62B7E0E9E(uLocal_320))
						{
							uLocal_320 = func_23(Local_67, 1);
						}
					}
				}
				else if (unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 0) && unk_0x9A4E2270C2271219(iLocal_55, 0))
				{
					if (unk_0x7B4654D62B7E0E9E(uLocal_321))
					{
						unk_0x9403D0F4C7711241(&uLocal_321);
						if (!unk_0x7B4654D62B7E0E9E(uLocal_320))
						{
							uLocal_320 = func_23(Local_67, 1);
						}
					}
				}
				else if (unk_0x7B4654D62B7E0E9E(uLocal_320))
				{
					unk_0x9403D0F4C7711241(&uLocal_320);
					if (!unk_0x7B4654D62B7E0E9E(uLocal_321))
					{
						uLocal_321 = func_64(iLocal_55, 0, 145);
					}
				}
				if (unk_0x804F37BBE1FFE251(unk_0x27D769C59BC9D030()))
				{
				}
			}
			else if (unk_0x7B4654D62B7E0E9E(uLocal_320))
			{
				unk_0x9403D0F4C7711241(&uLocal_320);
				if (!unk_0x7B4654D62B7E0E9E(uLocal_321))
				{
					uLocal_321 = func_64(iLocal_55, 0, 145);
				}
			}
			if (!unk_0x17297F499604E052(iLocal_55))
			{
				if (!unk_0xC4F9E3DD5445F8E4(unk_0x27D769C59BC9D030(), iLocal_55, 10f, 10f, 10f, 0, 1, 0))
				{
					unk_0xF156AA2A744B309E(iLocal_55);
					unk_0x3BD6117D6F00B83F(iLocal_55, func_67());
					unk_0xD2B9C1CC6FD508DD(iLocal_55, 1);
					unk_0x7AA5A5EF421F62F0(iLocal_55, 0);
				}
				if (unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 1))
				{
					unk_0xF156AA2A744B309E(iLocal_55);
					unk_0x3BD6117D6F00B83F(iLocal_55, func_67());
					unk_0xD2B9C1CC6FD508DD(iLocal_55, 1);
					unk_0x7AA5A5EF421F62F0(iLocal_55, 0);
				}
			}
		}
	}
}

var func_67()
{
	return unk_0x702DA8E73909DA0E(unk_0xB927AFB90873B8C1());
}

void func_68()
{
	if (!unk_0xE4F7206742848BAF(iLocal_55))
	{
		if (unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 1))
		{
			if (!func_71())
			{
				if (unk_0x17297F499604E052(iLocal_55))
				{
					unk_0xBFE5E4F12033E3EF(iLocal_55);
				}
				if (unk_0x810AFFABCBF31E2D(iLocal_55, 1227113341) != 1 && unk_0x810AFFABCBF31E2D(iLocal_55, 1227113341) != 0)
				{
					unk_0x9B6F077214CEDE77(iLocal_55, unk_0x27D769C59BC9D030(), -1, 6f, 1073741824, 1073741824, 0);
				}
				if (unk_0x9A4E2270C2271219(iLocal_55, 0))
				{
					unk_0x550B00F01FC4ADF0(iLocal_55, 0, 0);
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
				if (((unk_0x810AFFABCBF31E2D(iLocal_55, 1227113341) == 1 || unk_0x810AFFABCBF31E2D(iLocal_55, 1227113341) == 0) || unk_0x810AFFABCBF31E2D(iLocal_55, 242628503) == 1) || unk_0x810AFFABCBF31E2D(iLocal_55, 242628503) == 0)
				{
					unk_0xF156AA2A744B309E(iLocal_55);
					if (!unk_0x17297F499604E052(iLocal_55))
					{
						unk_0x3BD6117D6F00B83F(iLocal_55, func_67());
						unk_0xD2B9C1CC6FD508DD(iLocal_55, 1);
						unk_0x7AA5A5EF421F62F0(iLocal_55, 0);
					}
				}
			}
		}
		else if (((!unk_0x17297F499604E052(iLocal_55) && !unk_0x9A4E2270C2271219(iLocal_55, 0)) && unk_0x810AFFABCBF31E2D(iLocal_55, 242628503) != 1) && unk_0x810AFFABCBF31E2D(iLocal_55, 242628503) != 0)
		{
			unk_0x3BD6117D6F00B83F(iLocal_55, func_67());
			unk_0xD2B9C1CC6FD508DD(iLocal_55, 1);
			unk_0x7AA5A5EF421F62F0(iLocal_55, 0);
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

int func_70()
{
	if (unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 1))
	{
		if (unk_0x0B4DDB992C7BCF57(unk_0x841B76F992C06AAC(unk_0x27D769C59BC9D030()), 1))
		{
			if ((unk_0x9D4118D82F876A81(unk_0x946C63BD9EF05437(unk_0xD9FFE8E1642C81E2(unk_0x27D769C59BC9D030(), 1))) || unk_0x6CCC9ABA9456E815(unk_0x946C63BD9EF05437(unk_0xD9FFE8E1642C81E2(unk_0x27D769C59BC9D030(), 1)))) || unk_0xF283F0E0B39E6846(unk_0x946C63BD9EF05437(unk_0xD9FFE8E1642C81E2(unk_0x27D769C59BC9D030(), 1))))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_71()
{
	if (unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 0))
	{
		if (unk_0x0B4DDB992C7BCF57(unk_0xD9FFE8E1642C81E2(unk_0x27D769C59BC9D030(), 0), 0))
		{
			if (((((!unk_0x804F37BBE1FFE251(unk_0x27D769C59BC9D030()) && !unk_0x5723DA3F8C10C270(unk_0x27D769C59BC9D030())) && !unk_0xDF29E1AF81C00A22(unk_0x27D769C59BC9D030())) && !unk_0xD88A50C7359222FC(unk_0x27D769C59BC9D030())) && !unk_0x9E35D835B763A5DA(unk_0x27D769C59BC9D030())) && !unk_0x07B15F13B2FC3D21(unk_0x27D769C59BC9D030(), joaat("rhino")))
			{
				if (unk_0x1AEADBB0240E0B51(unk_0xD9FFE8E1642C81E2(unk_0x27D769C59BC9D030(), 0)) >= 1)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 1))
	{
		if (unk_0x0B4DDB992C7BCF57(unk_0xF67151DFE5F974F3(unk_0x27D769C59BC9D030()), 0))
		{
			if ((((!unk_0xD3AE48D8EB7DCBE6(unk_0x946C63BD9EF05437(unk_0xF67151DFE5F974F3(unk_0x27D769C59BC9D030()))) && !unk_0xDBFA5C79D9B3D622(unk_0x946C63BD9EF05437(unk_0xF67151DFE5F974F3(unk_0x27D769C59BC9D030())))) && !unk_0xEC6E5897335290DD(unk_0x946C63BD9EF05437(unk_0xF67151DFE5F974F3(unk_0x27D769C59BC9D030())))) && !unk_0x5BFC131B92C92E97(unk_0x946C63BD9EF05437(unk_0xF67151DFE5F974F3(unk_0x27D769C59BC9D030())))) && unk_0x946C63BD9EF05437(unk_0xF67151DFE5F974F3(unk_0x27D769C59BC9D030())) != joaat("rhino"))
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
	
	if (!unk_0xE4F7206742848BAF(iParam0))
	{
		bVar0 = false;
		if (bParam1)
		{
			if (unk_0x57ADE64D2E3798F0(unk_0x27D769C59BC9D030()) && unk_0x57ADE64D2E3798F0(iParam0))
			{
				if (unk_0xD9FFE8E1642C81E2(unk_0x27D769C59BC9D030(), 0) == unk_0xD9FFE8E1642C81E2(iParam0, 0))
				{
					bVar0 = true;
				}
			}
		}
		else
		{
			bVar0 = false;
		}
		if (!unk_0xFB6EC5803E0147E0(iParam0, unk_0x27D769C59BC9D030()))
		{
			if (!bVar0)
			{
				unk_0x85FD30B510E7C05E(iParam0, unk_0x27D769C59BC9D030(), -1, 2049, 2);
			}
		}
		else if (bVar0)
		{
			if (!unk_0x7D2129D13363B0E7(iParam0))
			{
				unk_0x7440EFC435CB25D1(iParam0);
			}
		}
	}
}

void func_73()
{
	if (unk_0xD2CFFE76B625AE55(iLocal_55))
	{
		if (!unk_0x2006A8C1BA2AFE80(iLocal_55, 0) && !unk_0x2006A8C1BA2AFE80(unk_0x27D769C59BC9D030(), 0))
		{
			if (func_87("stagd_chape_1"))
			{
				if (!unk_0x7B4654D62B7E0E9E(uLocal_320))
				{
					uLocal_320 = func_23(Local_67, 1);
				}
				iLocal_122 = 1;
			}
			if (func_87("stagd_chape_3"))
			{
				unk_0x7440EFC435CB25D1(unk_0x27D769C59BC9D030());
				if (!unk_0xE4F7206742848BAF(iLocal_55))
				{
					if (unk_0x9A4E2270C2271219(iLocal_55, 0))
					{
						unk_0x33A0CEA494F4C2A3(&uLocal_113);
						unk_0x7440EFC435CB25D1(0);
						unk_0x7D53E66325CAFB79(0, 30600);
						unk_0x33F83FC0F5F458E3(uLocal_113);
						unk_0x8B8674266D533E9F(iLocal_55, uLocal_113);
						unk_0x433C209504FBC7EE(&uLocal_113);
					}
				}
			}
			if (unk_0xC4F9E3DD5445F8E4(unk_0x27D769C59BC9D030(), iLocal_55, 13.5f, 13.5f, 13.5f, 0, 1, 0) && unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 0))
			{
				if (unk_0x1C48F76B3D032074(iLocal_55, unk_0xD9FFE8E1642C81E2(unk_0x27D769C59BC9D030(), 0), 0))
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
									unk_0x3DFCFAD590F85BF7(1);
									unk_0x83DB85FD25128C55(1);
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
						if (!unk_0xB1988D54B2C48CB5(unk_0x27D769C59BC9D030(), Local_87, 150f, 150f, 150f, 0, 1, 0))
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
	
	func_85(&uVar0, unk_0x2FADF5E93AB8D64B());
	func_84(&uVar0, unk_0x51C7DC141C5D0E6B());
	func_83(&uVar0, unk_0xEFEADD7EBD01C0A6());
	func_78(&uVar0, unk_0x388418AD39C0F4DE());
	func_77(&uVar0, unk_0xE3911478C9FE04B2());
	func_76(&uVar0, unk_0x8FB5B60BC869990E());
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
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_81(unk_0xF426A5DE932B3BEE(iParam0, 31), -1, 1)) + 2011;
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
	Global_14578 = 0;
	func_19();
}

int func_87(char* sParam0)
{
	var uVar0;
	
	if (func_65())
	{
		MemCopy(&uVar0, {func_88()}, 4);
		if (unk_0xC1C5B83BB6719C6C(sParam0, &uVar0))
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
	if (Global_15712 == 4)
	{
		iVar6 = unk_0x351E0C865946978E();
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

void func_89()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (unk_0xD2CFFE76B625AE55(iLocal_55))
	{
		if (!unk_0x2006A8C1BA2AFE80(iLocal_55, 0))
		{
			if (!unk_0xE4F7206742848BAF(iLocal_55))
			{
				if (!iLocal_129 && bLocal_118)
				{
					unk_0xCFF471245AFEEDCE(0, 75, 1);
					unk_0xCFF471245AFEEDCE(0, 80, 1);
					iVar0 = unk_0x7DC564DE3CF907A4();
					if (iVar0 != 0)
					{
						iVar1 = unk_0xD7DDFCF6557D9296(iVar0);
						if (iVar1 != 4)
						{
							unk_0xCFF471245AFEEDCE(0, 79, 1);
							unk_0xCFF471245AFEEDCE(0, 286, 1);
							unk_0xCFF471245AFEEDCE(0, 287, 1);
							unk_0xCFF471245AFEEDCE(0, 26, 1);
							unk_0xCFF471245AFEEDCE(0, 273, 1);
							unk_0xCFF471245AFEEDCE(0, 4, 1);
							unk_0xCFF471245AFEEDCE(0, 270, 1);
							unk_0xCFF471245AFEEDCE(0, 5, 1);
							unk_0xCFF471245AFEEDCE(0, 1, 1);
							unk_0xCFF471245AFEEDCE(0, 271, 1);
							unk_0xCFF471245AFEEDCE(0, 6, 1);
							unk_0xCFF471245AFEEDCE(0, 2, 1);
							unk_0xCFF471245AFEEDCE(0, 272, 1);
							unk_0xCFF471245AFEEDCE(0, 3, 1);
						}
					}
					if (unk_0x98CEDC9398D49BB8(iLocal_55, -2002.008f, 455.58f, 101.0381f, -2009.761f, 453.2027f, 105.9135f, 12.4375f, 0, 1, 0) || unk_0x83666F9FB8FEBD4B() > 5000)
					{
						iLocal_129 = 1;
						unk_0xC1B1E9A034A63A62(0);
						func_52(1, 1, 1, 0);
						unk_0x5BD150B52CE8D356(1);
						unk_0x3DFCFAD590F85BF7(0);
						unk_0x83DB85FD25128C55(0);
						unk_0x9F805E4A6F671CEE(unk_0x4D29100D094E5511(), 0, 0);
						unk_0x41D6B0C62443EFBB(joaat("superd"), 3);
						while (!unk_0x7F4F64DCC48E87D6(joaat("superd")))
						{
							unk_0x4EDE34FBADD967A6(0);
						}
						uLocal_134 = unk_0x4B49D13510261EFF("DEFAULT_SCRIPTED_CAMERA", -2014.228f, 456.4961f, 103.5524f, -6.509435f, -0.037031f, -95.98762f, 29.00143f, 0, 2);
						uLocal_135 = unk_0x4B49D13510261EFF("DEFAULT_SCRIPTED_CAMERA", -2014.334f, 456.418f, 103.3152f, -6.198685f, -0.037031f, -100.5736f, 29.00143f, 0, 2);
						unk_0xB936630341324D47(uLocal_134, "HAND_SHAKE", 0.25f);
						unk_0xB936630341324D47(uLocal_135, "HAND_SHAKE", 0.25f);
						unk_0xA931FF68636DF31C(uLocal_134, 1);
						unk_0x04E786541E35ECB1(1, 0, 3000, 1, 0, 0);
						unk_0x4EDE34FBADD967A6(1000);
						unk_0x5C309DFF11824A69(uLocal_135, uLocal_134, 4000, 1, 1);
						unk_0x04E786541E35ECB1(1, 0, 3000, 1, 0, 0);
						unk_0xC972AA2C9F94741D(Local_99, 10f, 0, 0, 0, 0, 0);
						if (!unk_0x2006A8C1BA2AFE80(unk_0x070841EC2D20AB5A(), 0))
						{
							unk_0xEA5FA5650C01AFF6(unk_0x070841EC2D20AB5A());
							if (unk_0xB1988D54B2C48CB5(unk_0x070841EC2D20AB5A(), Local_99, 8f, 8f, 8f, 0, 1, 0))
							{
								iLocal_133 = unk_0x070841EC2D20AB5A();
								unk_0xAF3355298F537BB0(iLocal_133, 1, 0);
								unk_0xF6E128C391C16F7C(&iLocal_133);
							}
						}
						if (!unk_0x2006A8C1BA2AFE80(iLocal_59, 0))
						{
							unk_0x37B592C0F74990D2(iLocal_59, 1);
							if (!unk_0x7B4654D62B7E0E9E(uLocal_319))
							{
								uLocal_319 = func_62(iLocal_59, 0, 0);
								unk_0xD1B211F2EB392B46(uLocal_319, true);
							}
						}
						iLocal_117 = 0;
					}
				}
				if (iLocal_129 && unk_0x54DA78A82349F5AC(uLocal_134))
				{
					if (unk_0x83666F9FB8FEBD4B() > 5700 && !iLocal_317)
					{
						if ((unk_0x17753565205CF66F(unk_0x27D769C59BC9D030()) && unk_0x6A60A80D676F74A7() == 4) || (unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 0) && unk_0x0D1F37E8DD733194() == 4))
						{
							unk_0xEC04D6F4A1ED71ED("CamPushInNeutral", 0, 0);
							unk_0x954BCDB8FDB0AC0F(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
							iLocal_317 = 1;
						}
					}
					if (unk_0x83666F9FB8FEBD4B() > 6000)
					{
						if (unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 0))
						{
							unk_0x550B00F01FC4ADF0(unk_0x27D769C59BC9D030(), 0, 0);
						}
						unk_0x9F805E4A6F671CEE(unk_0x4D29100D094E5511(), 1, 0);
						unk_0x3DFCFAD590F85BF7(1);
						unk_0x83DB85FD25128C55(1);
						func_52(0, 1, 1, 0);
						unk_0xA931FF68636DF31C(uLocal_134, 0);
						unk_0x04E786541E35ECB1(0, 0, 3000, 1, 0, 0);
						unk_0x1D1A369233055AEC(uLocal_134, 0);
						unk_0x2776343F9772A0A9(0);
					}
				}
				if (unk_0xB1988D54B2C48CB5(unk_0x27D769C59BC9D030(), -2201.417f, 4296.06f, 47.5076f, 100f, 100f, 100f, 0, 1, 0))
				{
					unk_0xC972AA2C9F94741D(Local_87, 5f, 0, 0, 0, 0, 0);
				}
			}
			if (!bLocal_123)
			{
				if (unk_0xB1988D54B2C48CB5(unk_0x27D769C59BC9D030(), Local_103, 100f, 100f, 100f, 0, 1, 0))
				{
					unk_0x97C59C4E8349D15F(joaat("ig_bestmen"));
					if (unk_0x875098323FCA8FE6(joaat("ig_bestmen")))
					{
						iLocal_57 = unk_0x91D233CD0204A37F(4, joaat("ig_bestmen"), -2202.747f, 4299.008f, 47.4293f, 73.0028f, 1, 1);
						func_90(&uLocal_136, 4, iLocal_57, "BESTMAN", 0, 1);
						unk_0x5D927D8655264D6C(iLocal_57, 0, 0, 0, 0);
						unk_0x71065DDFF8D7744C(iLocal_57, joaat("player"));
						unk_0xA8ED9F72DC442242(iLocal_57, 1);
						unk_0x56F64CC9254C2E4F(iLocal_57, 185, 1);
						unk_0x33A0CEA494F4C2A3(&uLocal_113);
						unk_0xF14C2AE8A3F59CE0(0, unk_0x27D769C59BC9D030(), -1);
						unk_0x85FD30B510E7C05E(0, unk_0x27D769C59BC9D030(), -1, 2048, 2);
						unk_0x33F83FC0F5F458E3(uLocal_113);
						unk_0x8B8674266D533E9F(iLocal_57, uLocal_113);
						unk_0x433C209504FBC7EE(&uLocal_113);
						bLocal_123 = true;
					}
				}
			}
			if (!bLocal_124)
			{
				if (unk_0xB1988D54B2C48CB5(unk_0x27D769C59BC9D030(), Local_77, 20f, 20f, 20f, 0, 1, 0))
				{
					func_21();
					if (!func_65())
					{
						func_4(&uLocal_136, "stagdau", "stagd_spot", 4, 0, 0, 0);
						bLocal_124 = true;
					}
				}
			}
			if (((unk_0x98CEDC9398D49BB8(unk_0x27D769C59BC9D030(), Local_70, Local_73, fLocal_76, 0, 1, 0) && unk_0x98CEDC9398D49BB8(iLocal_55, Local_70, Local_73, fLocal_76, 0, 1, 0)) || (unk_0xB1988D54B2C48CB5(iLocal_55, Local_67, 0f, 0f, 2f, 1, 1, 0) && func_60(1, 0, 1))) || bLocal_118)
			{
				switch (iLocal_49)
				{
					case 0:
						unk_0x9403D0F4C7711241(&uLocal_320);
						if (!bLocal_118)
						{
							Local_67 = { Local_103 };
							if (unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 0))
							{
								if (!unk_0x2006A8C1BA2AFE80(unk_0x070841EC2D20AB5A(), 0))
								{
									unk_0x29D71D9710F2540E(unk_0x070841EC2D20AB5A(), 10.5f, 4, 0);
								}
							}
							if (!unk_0x2006A8C1BA2AFE80(iLocal_59, 0))
							{
								iVar2 = unk_0x7DC564DE3CF907A4();
								if (iVar2 != 0)
								{
									iVar3 = unk_0xD7DDFCF6557D9296(iVar2);
									if (iVar3 == 4)
									{
										unk_0x85FD30B510E7C05E(unk_0x27D769C59BC9D030(), iLocal_55, 5000, 0, 2);
									}
									else
									{
										unk_0x85FD30B510E7C05E(unk_0x27D769C59BC9D030(), iLocal_59, 5000, 2052, 4);
										unk_0x1A934C912339621C(iLocal_59, 0f, 0f, 0f, 1, -1, 3000, 2000);
									}
								}
							}
							func_21();
							if (!func_65())
							{
								func_4(&uLocal_136, "stagdau", "stagd_wait1", 4, 0, 0, 0);
								if (!unk_0xE4F7206742848BAF(iLocal_55))
								{
									unk_0xF156AA2A744B309E(iLocal_55);
									unk_0x33A0CEA494F4C2A3(&uLocal_113);
									unk_0xE4A57337AE998385(0, -2013.094f, 460.3515f, 101.8024f, 2f, 20000, 1048576000, 0, 1193033728);
									unk_0xE4A57337AE998385(0, Local_99, 3f, 20000, 1048576000, 0, 1193033728);
									unk_0xF14C2AE8A3F59CE0(0, unk_0x27D769C59BC9D030(), -1);
									unk_0x85FD30B510E7C05E(0, unk_0x27D769C59BC9D030(), -1, 2048, 2);
									unk_0x33F83FC0F5F458E3(uLocal_113);
									unk_0x8B8674266D533E9F(iLocal_55, uLocal_113);
									unk_0x433C209504FBC7EE(&uLocal_113);
									unk_0x94DC76C688E7D222(iLocal_55, 1);
								}
								bLocal_118 = true;
								unk_0xC1B1E9A034A63A62(0);
							}
						}
						if (!unk_0xE4F7206742848BAF(iLocal_55) && !unk_0x2006A8C1BA2AFE80(iLocal_59, 0))
						{
							if ((bLocal_118 && unk_0xB1988D54B2C48CB5(iLocal_55, Local_99, 1f, 1f, 1f, 0, 1, 0)) && !unk_0x9A4E2270C2271219(iLocal_55, 0))
							{
								if (unk_0x17297F499604E052(iLocal_55))
								{
									if (!func_65())
									{
										if (func_11() == 2)
										{
											func_4(&uLocal_136, "stagdau", "stagd_reply", 4, 0, 0, 0);
										}
									}
									unk_0xBFE5E4F12033E3EF(iLocal_55);
								}
								if (unk_0x5EE69620FB6ABC8D(iLocal_55))
								{
									if (!unk_0xE4F7206742848BAF(iLocal_55))
									{
										unk_0xFBE386F7181B95E8(iLocal_55, 0, 0);
										unk_0xF1919C21714E9FAF(iLocal_55, 0, 0);
										unk_0xDC994C828DF12354(iLocal_55, 1);
										unk_0xA8CA82EB31D1626F(iLocal_55, 1);
									}
									if (unk_0x83666F9FB8FEBD4B() > 15000)
									{
										if (!unk_0xE4F7206742848BAF(iLocal_55))
										{
											unk_0x5D927D8655264D6C(iLocal_55, 2, 1, 0, 0);
											unk_0x5D927D8655264D6C(iLocal_55, 0, 0, 1, 0);
											unk_0x5D927D8655264D6C(iLocal_55, 3, 1, 0, 0);
											unk_0x5D927D8655264D6C(iLocal_55, 4, 1, 0, 0);
											unk_0x5D927D8655264D6C(iLocal_55, 11, 0, 0, 0);
											unk_0xFBE386F7181B95E8(iLocal_55, 1, 0);
											unk_0xF1919C21714E9FAF(iLocal_55, 1, 0);
											unk_0xDC994C828DF12354(iLocal_55, 0);
											unk_0xA8CA82EB31D1626F(iLocal_55, 0);
											unk_0x4EEE9D9427E70F4E(iLocal_55, Local_99, 1, 0, 0, 1);
											unk_0xFBDCF3D5834B58D8(iLocal_55, 106.5078f);
											unk_0x7AA5A5EF421F62F0(iLocal_55, 0);
											unk_0x7ED3655E5924C6F4(iLocal_55, 17, 1);
											unk_0x042CFDB2A4591841(iLocal_55, 1);
											unk_0x85FD30B510E7C05E(unk_0x27D769C59BC9D030(), iLocal_55, -1, 2048, 4);
											if (!unk_0x2006A8C1BA2AFE80(iLocal_59, 0))
											{
												unk_0x33A0CEA494F4C2A3(&uLocal_113);
												unk_0x85FD30B510E7C05E(0, unk_0x27D769C59BC9D030(), -1, 2052, 4);
												unk_0x835BBE043A81D6DD(0, iLocal_59, -1, 0, 2f, 1, 0);
												unk_0x33F83FC0F5F458E3(uLocal_113);
												unk_0x8B8674266D533E9F(iLocal_55, uLocal_113);
												unk_0x433C209504FBC7EE(&uLocal_113);
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
						if (!unk_0xE4F7206742848BAF(iLocal_55) && !unk_0x2006A8C1BA2AFE80(iLocal_59, 0))
						{
							if (unk_0xC4F9E3DD5445F8E4(iLocal_55, iLocal_59, 5f, 5f, 5f, 0, 1, 0) && !iLocal_128)
							{
								func_4(&uLocal_136, "stagdau", "stagd_suit", 4, 0, 0, 0);
								iLocal_128 = 1;
							}
							if (unk_0x9A4E2270C2271219(iLocal_55, 0))
							{
								if (unk_0x1C48F76B3D032074(unk_0x27D769C59BC9D030(), iLocal_59, 0))
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
										iLocal_308 = unk_0xA0F74982C6AAA9D4();
									}
									if (iLocal_308 != 0 && unk_0xA0F74982C6AAA9D4() > iLocal_308 + 6000)
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
								if (unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 0))
								{
									if (!unk_0x2006A8C1BA2AFE80(unk_0x070841EC2D20AB5A(), 0))
									{
										iLocal_132 = unk_0xD9FFE8E1642C81E2(unk_0x27D769C59BC9D030(), 0);
										unk_0x29D71D9710F2540E(unk_0x070841EC2D20AB5A(), 10.5f, 2, 0);
									}
								}
								if (!unk_0xE4F7206742848BAF(iLocal_57) && !unk_0xE4F7206742848BAF(iLocal_55))
								{
									if (unk_0x9A4E2270C2271219(iLocal_55, 0))
									{
										iLocal_132 = unk_0xD9FFE8E1642C81E2(iLocal_55, 0);
										unk_0x33A0CEA494F4C2A3(&uLocal_113);
										unk_0x835BBE043A81D6DD(0, iLocal_132, -1, 2, 1f, 1, 0);
										unk_0x7440EFC435CB25D1(0);
										unk_0x33F83FC0F5F458E3(uLocal_113);
										unk_0x8B8674266D533E9F(iLocal_57, uLocal_113);
										unk_0x56F64CC9254C2E4F(iLocal_57, 185, 0);
									}
									else
									{
										unk_0x9B6F077214CEDE77(iLocal_57, iLocal_55, -1, 8f, 1073741824, 1073741824, 0);
									}
									if (!unk_0x7B4654D62B7E0E9E(uLocal_322))
									{
										uLocal_322 = func_64(iLocal_57, 0, 145);
									}
									if (unk_0x7B4654D62B7E0E9E(uLocal_320))
									{
										unk_0x9403D0F4C7711241(&uLocal_320);
									}
								}
								unk_0xC1B1E9A034A63A62(0);
								iLocal_120 = 1;
								bLocal_118 = true;
							}
						}
						if (bLocal_118 && !unk_0xE4F7206742848BAF(iLocal_55))
						{
							if (unk_0x810AFFABCBF31E2D(iLocal_55, 242628503) == 7 || unk_0x83666F9FB8FEBD4B() > 12000)
							{
								Local_67 = { Local_77 };
								Local_70 = { Local_80 };
								Local_73 = { Local_83 };
								fLocal_76 = fLocal_86;
								unk_0x97C59C4E8349D15F(joaat("ig_bride"));
								unk_0x97C59C4E8349D15F(joaat("washington"));
								unk_0x97C59C4E8349D15F(joaat("baller2"));
								unk_0x97C59C4E8349D15F(joaat("primo"));
								if (((unk_0x875098323FCA8FE6(joaat("ig_bride")) && unk_0x875098323FCA8FE6(joaat("washington"))) && unk_0x875098323FCA8FE6(joaat("baller2"))) && unk_0x875098323FCA8FE6(joaat("primo")))
								{
									iLocal_56 = unk_0x91D233CD0204A37F(5, joaat("ig_bride"), -330.36f, 6154.03f, 30.8f, 90f, 1, 1);
									unk_0xA8ED9F72DC442242(iLocal_56, 1);
									unk_0x33A0CEA494F4C2A3(&uLocal_113);
									unk_0xF14C2AE8A3F59CE0(0, unk_0x27D769C59BC9D030(), -1);
									unk_0x33F83FC0F5F458E3(uLocal_113);
									unk_0x8B8674266D533E9F(iLocal_56, uLocal_113);
									unk_0x433C209504FBC7EE(&uLocal_113);
									iLocal_58 = unk_0x91D233CD0204A37F(4, joaat("ig_bestmen"), -333.3692f, 6157.644f, 30.489f, 83.2763f, 1, 1);
									unk_0xA8ED9F72DC442242(iLocal_58, 1);
									unk_0xF14C2AE8A3F59CE0(iLocal_58, unk_0x27D769C59BC9D030(), -1);
									unk_0x5D927D8655264D6C(iLocal_58, 0, 1, 0, 0);
									uLocal_60[0] = unk_0x4E76306EE6AE7596(joaat("washington"), -342.1295f, 6141.404f, 30.4839f, 133.4604f, 1, 1);
									uLocal_60[1] = unk_0x4E76306EE6AE7596(joaat("baller2"), -338.3777f, 6137.41f, 30.476f, 135.6866f, 1, 1);
									uLocal_60[2] = unk_0x4E76306EE6AE7596(joaat("primo"), -329.4687f, 6143.247f, 30.4893f, 313.82f, 1, 1);
									uLocal_60[3] = unk_0x4E76306EE6AE7596(joaat("washington"), -322.3235f, 6135.427f, 30.4924f, 316.5898f, 1, 1);
									unk_0xFD2475756036347D(uLocal_60[0], unk_0x3A5708FEE1B560A9(0, 127), 0);
									unk_0xFD2475756036347D(uLocal_60[1], unk_0x3A5708FEE1B560A9(0, 127), 0);
									unk_0xFD2475756036347D(uLocal_60[2], unk_0x3A5708FEE1B560A9(0, 127), 0);
									unk_0xFD2475756036347D(uLocal_60[3], unk_0x3A5708FEE1B560A9(0, 127), 0);
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
							if (unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 0))
							{
								if (!unk_0x2006A8C1BA2AFE80(unk_0x070841EC2D20AB5A(), 0))
								{
									unk_0x29D71D9710F2540E(unk_0x070841EC2D20AB5A(), 10.5f, 2, 0);
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
		else if (unk_0x2006A8C1BA2AFE80(iLocal_55, 0))
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
	if (!Global_69489)
	{
		if (!unk_0xE4F7206742848BAF(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x6B8EBAC1C87F6645(iParam2, 0);
			}
			else
			{
				unk_0x6B8EBAC1C87F6645(iParam2, 1);
			}
		}
		if (!unk_0xE4F7206742848BAF(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xBDBBE2B9920C24A7(iParam2, 0);
			}
			else
			{
				unk_0xBDBBE2B9920C24A7(iParam2, 1);
			}
		}
	}
}

void func_91()
{
	if ((iLocal_310 && iLocal_307 != func_74(func_75())) && !unk_0x54DA78A82349F5AC(uLocal_134))
	{
		func_95(((iLocal_307 * 1000 * 60 - func_74(func_75()) * 1000 * 60) + (iLocal_306 * 1000 - func_98(func_75()) * 1000)), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0);
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
			if (!unk_0xE4F7206742848BAF(iLocal_55))
			{
				unk_0xB1F3893795B13F9B(iLocal_55, 1, 1);
			}
			if (!unk_0xE4F7206742848BAF(iLocal_56))
			{
				unk_0x3DA9DFE29006A19F(iLocal_56, unk_0x27D769C59BC9D030(), 300f, -1, 0, 0);
			}
			if (!unk_0xE4F7206742848BAF(iLocal_58))
			{
				unk_0x3DA9DFE29006A19F(iLocal_58, unk_0x27D769C59BC9D030(), 300f, -1, 0, 0);
			}
			unk_0x4EDE34FBADD967A6(8500);
			if (unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 0))
			{
				if (!unk_0x2006A8C1BA2AFE80(unk_0x070841EC2D20AB5A(), 0))
				{
					unk_0x29D71D9710F2540E(unk_0x070841EC2D20AB5A(), 10.5f, 3, 0);
				}
			}
			unk_0x4EDE34FBADD967A6(2000);
			if (!unk_0x2006A8C1BA2AFE80(iLocal_55, 0))
			{
				unk_0xF156AA2A744B309E(iLocal_55);
				unk_0x85FD30B510E7C05E(unk_0x27D769C59BC9D030(), iLocal_55, 5000, 2048, 2);
				unk_0x85FD30B510E7C05E(iLocal_55, unk_0x27D769C59BC9D030(), 5000, 2048, 2);
				unk_0x550B00F01FC4ADF0(iLocal_55, 0, 0);
				unk_0xBFE5E4F12033E3EF(iLocal_55);
			}
			if (!unk_0x2006A8C1BA2AFE80(iLocal_57, 0))
			{
				unk_0x85FD30B510E7C05E(unk_0x27D769C59BC9D030(), iLocal_55, 5000, 0, 2);
				unk_0x550B00F01FC4ADF0(iLocal_57, 500, 0);
			}
			unk_0x4EDE34FBADD967A6(1000);
			if (!unk_0x2006A8C1BA2AFE80(iLocal_59, 0))
			{
				if (unk_0x1C48F76B3D032074(unk_0x27D769C59BC9D030(), iLocal_59, 0))
				{
					unk_0x550B00F01FC4ADF0(unk_0x27D769C59BC9D030(), 0, 0);
				}
			}
			if (!unk_0x2006A8C1BA2AFE80(iLocal_55, 0) && !unk_0x2006A8C1BA2AFE80(unk_0x070841EC2D20AB5A(), 0))
			{
				unk_0x33A0CEA494F4C2A3(&uLocal_113);
				if (unk_0x070841EC2D20AB5A() == iLocal_59)
				{
					unk_0x835BBE043A81D6DD(0, iLocal_59, -1, -1, 1f, 8, 0);
					unk_0xE88C6873CB5C0508(0, iLocal_59, unk_0x27D769C59BC9D030(), 8, 15f, 786469, 10f, 10f, 1);
				}
				else
				{
					unk_0x3DA9DFE29006A19F(0, unk_0x27D769C59BC9D030(), 300f, -1, 0, 0);
				}
				unk_0x33F83FC0F5F458E3(uLocal_113);
				unk_0x8B8674266D533E9F(iLocal_55, uLocal_113);
				unk_0x433C209504FBC7EE(&uLocal_113);
				unk_0x94DC76C688E7D222(iLocal_55, 1);
				if (!unk_0x2006A8C1BA2AFE80(iLocal_57, 0))
				{
					unk_0x33A0CEA494F4C2A3(&uLocal_113);
					if (unk_0x070841EC2D20AB5A() == iLocal_59)
					{
						unk_0x835BBE043A81D6DD(0, iLocal_59, -1, 0, 2f, 1, 0);
						unk_0x963F67A22BBFA2AE(0, 100000);
					}
					else
					{
						unk_0x3DA9DFE29006A19F(0, unk_0x27D769C59BC9D030(), 300f, -1, 0, 0);
					}
					unk_0x33F83FC0F5F458E3(uLocal_113);
					unk_0x8B8674266D533E9F(iLocal_57, uLocal_113);
					unk_0x433C209504FBC7EE(&uLocal_113);
					unk_0x94DC76C688E7D222(iLocal_57, 1);
				}
			}
			unk_0x9F805E4A6F671CEE(unk_0x4D29100D094E5511(), 1, 0);
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
	Global_14578 = 0;
	func_93();
}

void func_93()
{
	if (unk_0x1BF2632AED6B5924())
	{
		unk_0xF022734652B12EB3();
		Global_16723 = 0;
		unk_0x94DA6AACA7F07289(1);
		Global_15712 = 6;
		return;
	}
}

void func_94()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = unk_0xEFEADD7EBD01C0A6();
	iVar1 = unk_0x51C7DC141C5D0E6B();
	iVar2 = unk_0x2FADF5E93AB8D64B();
	if (iLocal_309 == 0)
	{
		if (iVar1 == 55 && iVar2 >= 30)
		{
			unk_0x954BCDB8FDB0AC0F(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_309++;
		}
	}
	else if (iLocal_309 == 1)
	{
		if (iVar1 == 56 && iVar2 >= 0)
		{
			unk_0x954BCDB8FDB0AC0F(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_309++;
		}
	}
	else if (iLocal_309 == 2)
	{
		if (iVar1 == 56 && iVar2 >= 30)
		{
			unk_0x954BCDB8FDB0AC0F(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_309++;
		}
	}
	else if (iLocal_309 == 3)
	{
		if (iVar1 == 57 && iVar2 >= 0)
		{
			unk_0x954BCDB8FDB0AC0F(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_309++;
		}
	}
	else if (iLocal_309 == 4)
	{
		if (iVar1 == 57 && iVar2 >= 30)
		{
			unk_0x954BCDB8FDB0AC0F(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_309++;
		}
	}
	else if (iLocal_309 == 5)
	{
		if (iVar1 == 58 && iVar2 >= 0)
		{
			unk_0x954BCDB8FDB0AC0F(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_309++;
		}
	}
	else if (iLocal_309 == 6)
	{
		if (iVar1 == 58 && iVar2 >= 15)
		{
			unk_0x954BCDB8FDB0AC0F(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_309++;
		}
	}
	else if (iLocal_309 == 7)
	{
		if (iVar1 == 58 && iVar2 >= 30)
		{
			unk_0x954BCDB8FDB0AC0F(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_309++;
		}
	}
	else if (iLocal_309 == 8)
	{
		if (iVar1 == 58 && iVar2 >= 45)
		{
			unk_0x954BCDB8FDB0AC0F(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_309++;
		}
	}
	else if (iLocal_309 == 9)
	{
		if (iVar1 == 59 && iVar2 >= 0)
		{
			unk_0x954BCDB8FDB0AC0F(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_309++;
		}
	}
	else if (iLocal_309 == 10)
	{
		if (iVar1 == 59 && iVar2 >= 15)
		{
			unk_0x954BCDB8FDB0AC0F(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_309++;
		}
	}
	else if (iLocal_309 == 11)
	{
		if (iVar1 == 59 && iVar2 >= 30)
		{
			unk_0x954BCDB8FDB0AC0F(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_309++;
		}
	}
	else if (iLocal_309 == 12)
	{
		if (iVar1 == 59 && iVar2 >= 45)
		{
			unk_0x954BCDB8FDB0AC0F(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_309++;
		}
	}
	else if (iLocal_309 == 13)
	{
		if (iVar1 >= 0 && iVar0 == iLocal_307)
		{
			unk_0x954BCDB8FDB0AC0F(-1, "TIMER_STOP", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_309++;
		}
	}
}

void func_95(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15)
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
		Global_1339940.f_1 = 1;
		func_96(7, iVar0);
		Global_1339940.f_4109[iVar0] = iParam0;
		StringCopy(&(Global_1339940.f_4109.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1339940.f_4109.f_172[iVar0] = iParam2;
		Global_1339940.f_4109.f_216[iVar0] = iParam3;
		Global_1339940.f_4109.f_183[iVar0] = iParam4;
		Global_1339940.f_4109.f_194[iVar0] = iParam5;
		Global_1339940.f_4109.f_249[iVar0] = iParam6;
		Global_1339940.f_4109.f_260[iVar0] = iParam7;
		Global_1339940.f_4109.f_205[iVar0] = iParam8;
		Global_1339940.f_4109.f_314[iVar0] = iParam9;
		Global_1339940.f_4109.f_325[iVar0] = iParam10;
		Global_1339940.f_4109.f_357[iVar0] = iParam11;
		Global_1339940.f_4109.f_238[iVar0] = iParam12;
		Global_1339940.f_4109.f_271[iVar0] = iParam13;
		Global_1339940.f_4109.f_368[iVar0] = iParam14;
		Global_1339940.f_4109.f_379[iVar0] = iParam15;
	}
}

void func_96(int iParam0, int iParam1)
{
	unk_0x26545538B51562AD(&(Global_1339940.f_4726[iParam0]), iParam1);
}

bool func_97(int iParam0, int iParam1)
{
	return unk_0xF426A5DE932B3BEE(Global_1339940.f_4726[iParam0], iParam1);
}

int func_98(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

void func_99()
{
	if (!unk_0xE4F7206742848BAF(iLocal_55))
	{
		if (!unk_0x2006A8C1BA2AFE80(iLocal_59, 0) && unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 0))
		{
			if (unk_0x1C48F76B3D032074(iLocal_55, iLocal_59, 0) && unk_0xF6E7E32D0D604675(iLocal_59))
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
			else if (unk_0x1C48F76B3D032074(iLocal_55, unk_0xD9FFE8E1642C81E2(unk_0x27D769C59BC9D030(), 0), 0) && unk_0xF6E7E32D0D604675(unk_0xD9FFE8E1642C81E2(unk_0x27D769C59BC9D030(), 0)))
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
	if (unk_0xF426A5DE932B3BEE(unk_0x3A5708FEE1B560A9(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_101()
{
	if (!unk_0xE4F7206742848BAF(iLocal_55))
	{
		unk_0xD0731BD9ADB40FF5(iLocal_55, 0);
	}
	if (!unk_0xE4F7206742848BAF(iLocal_57))
	{
		unk_0xD0731BD9ADB40FF5(iLocal_57, 0);
	}
	if (((((unk_0xC4F9E3DD5445F8E4(iLocal_55, unk_0x27D769C59BC9D030(), 4f, 4f, 4f, 0, 1, 0) || iLocal_49 == 1) || iLocal_126) || iLocal_127) || iLocal_125) || bLocal_118)
	{
		if ((((((iLocal_49 >= 2 && iLocal_120) && iLocal_49 != 1) && !iLocal_126) && !iLocal_127) && !iLocal_125) && !bLocal_118)
		{
			if (unk_0xC4F9E3DD5445F8E4(iLocal_57, unk_0x27D769C59BC9D030(), 4f, 4f, 4f, 0, 1, 0))
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
	Global_16723 = iParam0;
}

int func_103()
{
	if (Global_16723 == 1)
	{
		return 1;
	}
	return 0;
}

void func_104()
{
	if ((unk_0xEFEADD7EBD01C0A6() > 2 && unk_0xEFEADD7EBD01C0A6() < 15) && !unk_0x14B5449970A1C2DA(unk_0x4D29100D094E5511(), 0))
	{
	}
	else
	{
		if (!unk_0xE4F7206742848BAF(iLocal_55))
		{
			unk_0xF156AA2A744B309E(iLocal_55);
			func_21();
			unk_0x4EDE34FBADD967A6(0);
			func_4(&uLocal_136, "stagdau", "stagd_failda", 4, 0, 0, 0);
			if (unk_0xD2CFFE76B625AE55(iLocal_66))
			{
				unk_0xE223D49B3EFFD3E3(iLocal_66, 1, 1);
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
	if (!unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()) && !unk_0xE4F7206742848BAF(iLocal_55))
	{
		if (!iLocal_115)
		{
			if ((unk_0xC4F9E3DD5445F8E4(unk_0x27D769C59BC9D030(), iLocal_55, 130f, 60f, 50f, 0, 1, 0) && !unk_0x5EE69620FB6ABC8D(iLocal_55)) || unk_0xC4F9E3DD5445F8E4(unk_0x27D769C59BC9D030(), iLocal_55, 10f, 10f, 10f, 0, 1, 0))
			{
				if (!unk_0x7B4654D62B7E0E9E(uLocal_321))
				{
					uLocal_321 = func_64(iLocal_55, 0, 145);
					unk_0xE7BA3946385B4D19(uLocal_321, 0);
					unk_0x85FD30B510E7C05E(iLocal_55, unk_0x27D769C59BC9D030(), -1, 2052, 4);
				}
				if (unk_0xC4F9E3DD5445F8E4(unk_0x27D769C59BC9D030(), iLocal_55, 10f, 10f, 10f, 0, 1, 0))
				{
					if (unk_0x7B4654D62B7E0E9E(uLocal_321))
					{
						unk_0xE7BA3946385B4D19(uLocal_321, 1);
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
			if (!unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()) && !unk_0xE4F7206742848BAF(iLocal_55))
			{
				if ((!func_143() && unk_0x98CEDC9398D49BB8(unk_0x27D769C59BC9D030(), -1131.777f, 2636.418f, 15.589f, -1040.995f, 2717.077f, 31.715f, 60.75f, 0, 1, 0)) && unk_0x7B4654D62B7E0E9E(uLocal_321))
				{
					if (!func_65())
					{
						func_4(&uLocal_136, "stagdau", "stagd_greet2", 4, 0, 0, 0);
					}
					if (!unk_0x2006A8C1BA2AFE80(unk_0x070841EC2D20AB5A(), 0))
					{
						iLocal_65 = unk_0x070841EC2D20AB5A();
					}
					func_106(1);
				}
			}
		}
		else if (!iLocal_301)
		{
			if (!unk_0xE4F7206742848BAF(iLocal_55))
			{
				if (!unk_0xC4F9E3DD5445F8E4(unk_0x27D769C59BC9D030(), iLocal_55, 25f, 25f, 25f, 0, 1, 0))
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
		Global_101144 = 1;
		Global_101141 = unk_0xA0F74982C6AAA9D4();
		if (func_39(Global_101143))
		{
			func_107(0);
		}
		unk_0x0F0476353304C917(1, "RE_TITLE");
		if (iParam0 && func_39(Global_101143))
		{
			unk_0x1CD366AAE9844369();
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
			if (Global_101154.f_29520.f_2 < 3)
			{
				if (!unk_0x164719CB1B4867A4())
				{
					func_108(func_109(iParam0), -1);
					Global_101154.f_29520.f_2++;
					unk_0x26545538B51562AD(&Global_101150, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0xF426A5DE932B3BEE(Global_101150, 1))
			{
				if (!unk_0x164719CB1B4867A4())
				{
					func_108(func_109(iParam0), -1);
					Global_101154.f_29520.f_3++;
					unk_0x26545538B51562AD(&Global_101150, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0xF426A5DE932B3BEE(Global_101150, 2))
			{
				if (!unk_0x164719CB1B4867A4())
				{
					func_108(func_109(iParam0), -1);
					Global_101154.f_29520.f_4++;
					unk_0x26545538B51562AD(&Global_101150, 2);
				}
			}
			break;
	}
}

void func_108(var uParam0, int iParam1)
{
	unk_0x3432AC8623AF4EAC(uParam0);
	unk_0x9785EE0D78241684(0, 0, 1, iParam1);
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
	switch (func_111(&Global_25179, 0, 5, 0, unk_0xF42B3EF31F918DB2()))
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
		if (Global_89089.f_44 == 1)
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
		Global_35675++;
		*uParam0 = Global_35675;
		unk_0x4056514F44BCBB31(unk_0xB927AFB90873B8C1(), 0);
		Global_17118.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0xB1063C2349425DD1(8);
		}
		Global_35711 = iParam2;
		Global_35673 = *uParam0;
		Global_35674 = iParam4;
		Global_35672 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_35672 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_35672)
			{
				if (Global_35678[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_35673 == *uParam0)
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
		if (Global_35672 == 8)
		{
			return 0;
		}
		Global_35675++;
		*uParam0 = Global_35675;
		Global_35678[Global_35672 /*4*/] = Global_35675;
		Global_35678[Global_35672 /*4*/].f_1 = iParam1;
		Global_35678[Global_35672 /*4*/].f_2 = iParam2;
		Global_35678[Global_35672 /*4*/].f_3 = 0;
		Global_35672++;
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
	
	if (Global_35672 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_35672)
	{
		if (Global_35678[iVar0 /*4*/] == *uParam0)
		{
			Global_35678[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_113(int iParam0)
{
	return func_114(iParam0, Global_35711);
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
	if (Global_35711 == 15)
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
	if (unk_0xD2CFFE76B625AE55(iLocal_55))
	{
		if (!unk_0xE4F7206742848BAF(iLocal_55))
		{
			if (unk_0xACD604A3AE9C4A92(-1, unk_0xA8CFDE65C45F813B(iLocal_55, 1), 3f))
			{
				unk_0x09D2BE36C9D2B76F(iLocal_55);
				unk_0x51F79AC13D2AD286(iLocal_55, 99);
			}
			if (!unk_0x2006A8C1BA2AFE80(unk_0x070841EC2D20AB5A(), 0))
			{
				if (unk_0xECC01072E61D2F3A(unk_0x070841EC2D20AB5A()) < 3f)
				{
					unk_0xA8CA82EB31D1626F(iLocal_55, 1);
				}
				else
				{
					unk_0xA8CA82EB31D1626F(iLocal_55, 0);
					if (unk_0x799B2D82E6E6C363(unk_0x070841EC2D20AB5A(), iLocal_55))
					{
						unk_0x09D2BE36C9D2B76F(iLocal_55);
						unk_0x51F79AC13D2AD286(iLocal_55, 99);
					}
				}
			}
			if (unk_0xC4F9E3DD5445F8E4(unk_0x27D769C59BC9D030(), iLocal_55, 2f, 2f, 2f, 0, 1, 0))
			{
				if (!unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 0))
				{
					if (func_60(1, 0, 1))
					{
						if (!iLocal_311)
						{
							func_106(1);
							func_52(1, 1, 1, 0);
							unk_0x9F805E4A6F671CEE(unk_0x4D29100D094E5511(), 0, 0);
							unk_0x20D5AEE19ED62C7F(unk_0x27D769C59BC9D030(), 1);
							unk_0x5BD150B52CE8D356(1);
							unk_0x3DFCFAD590F85BF7(0);
							unk_0x83DB85FD25128C55(0);
							if (!unk_0xE4F7206742848BAF(iLocal_55))
							{
								unk_0xEFA71310CAEBAE1F(unk_0xA8CFDE65C45F813B(iLocal_55, 1), 5f, 1, 0, 0, 0);
								unk_0x19FAF10EF91E58C1(unk_0xA8CFDE65C45F813B(unk_0x27D769C59BC9D030(), 1), 5f);
							}
							if (!unk_0x2006A8C1BA2AFE80(unk_0x070841EC2D20AB5A(), 0))
							{
								if (unk_0xC4F9E3DD5445F8E4(unk_0x070841EC2D20AB5A(), iLocal_55, 5f, 5f, 5f, 0, 1, 0))
								{
									unk_0x4EEE9D9427E70F4E(unk_0x070841EC2D20AB5A(), unk_0xA8CFDE65C45F813B(iLocal_55, 1) - Vector(1.5f, 4f, 3f), 1, 0, 0, 1);
									unk_0xFA3ED0FFF3FD8F34(unk_0x070841EC2D20AB5A());
								}
							}
							if (!unk_0xE4F7206742848BAF(iLocal_55))
							{
								uLocal_318 = unk_0x239E9E07DB537DC9(-935.57f, 2767.616f, 24.448f, 2.433f, 0.152f, 53.743f, 2);
								uLocal_134 = unk_0x3A5E675E99CE82DC("DEFAULT_ANIMATED_CAMERA", 0);
								unk_0x221689C0DCB71BAA(uLocal_318, 0.158f);
								unk_0x5FEC4EB24E8C1ADE(uLocal_134, uLocal_318, "untie_cam", "re@stag_do@");
								unk_0x09D2BE36C9D2B76F(unk_0x27D769C59BC9D030());
								unk_0x09D2BE36C9D2B76F(iLocal_55);
								unk_0x98E2FD5DA7CF97D3(iLocal_55, uLocal_318, "re@stag_do@", "untie_ped", 1000f, -1000f, 4, 0, 1148846080, 0);
								unk_0x8A3D3E40973625F0(iLocal_55, 0, 0);
								unk_0x98E2FD5DA7CF97D3(unk_0x27D769C59BC9D030(), uLocal_318, "re@stag_do@", "untie_player", 1000f, -1000f, 0, 0, 1148846080, 0);
								unk_0x8A3D3E40973625F0(unk_0x27D769C59BC9D030(), 0, 0);
								unk_0xA931FF68636DF31C(uLocal_134, 1);
								unk_0x04E786541E35ECB1(1, 0, 3000, 1, 0, 0);
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
			if (unk_0xB3BBF60126795AAD(uLocal_318) > 0.2f && unk_0xB3BBF60126795AAD(uLocal_318) < 0.3f)
			{
				unk_0x2A5264C35FD91CE4(-1, "ROPE_CUT", unk_0x27D769C59BC9D030(), "ROPE_CUT_SOUNDSET", 0, 0);
				iLocal_316 = 1;
			}
		}
		if (unk_0xB3BBF60126795AAD(uLocal_318) > 0.4647059f && !iLocal_317)
		{
			if (unk_0x6A60A80D676F74A7() == 4)
			{
				unk_0xEC04D6F4A1ED71ED("CamPushInNeutral", 0, 0);
				unk_0x954BCDB8FDB0AC0F(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
				iLocal_317 = 1;
			}
		}
		if (unk_0xB3BBF60126795AAD(uLocal_318) > 0.5f)
		{
			iLocal_312 = 1;
		}
		if (func_117(1000))
		{
			unk_0x4E63F662FDE672C3(800);
			while (unk_0xA07829C3F763B9B6())
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			iLocal_312 = 1;
			iLocal_315 = 1;
		}
	}
	if (iLocal_312 && !iLocal_314)
	{
		if (unk_0xD2CFFE76B625AE55(iLocal_66))
		{
			unk_0xE223D49B3EFFD3E3(iLocal_66, 1, 1);
		}
		unk_0x09D2BE36C9D2B76F(unk_0x27D769C59BC9D030());
		unk_0x4EEE9D9427E70F4E(unk_0x27D769C59BC9D030(), -936.6537f, 2767.497f, 24.4289f, 1, 0, 0, 1);
		unk_0xFBDCF3D5834B58D8(unk_0x27D769C59BC9D030(), 208.4017f);
		unk_0x8A3D3E40973625F0(unk_0x27D769C59BC9D030(), 0, 0);
		unk_0xA931FF68636DF31C(uLocal_134, 0);
		unk_0x04E786541E35ECB1(0, 0, 3000, 1, 0, 0);
		unk_0x1D1A369233055AEC(uLocal_134, 0);
		unk_0x0B28AEB595CB09AF(0f);
		unk_0x4523FDDB9926E1D8(-7f, 1065353216);
		func_52(0, 1, 1, 0);
		unk_0x20D5AEE19ED62C7F(unk_0x27D769C59BC9D030(), 0);
		unk_0x3DFCFAD590F85BF7(1);
		unk_0x83DB85FD25128C55(1);
		if (!unk_0xE4F7206742848BAF(iLocal_55))
		{
			unk_0xA8CA82EB31D1626F(iLocal_55, 0);
			unk_0x09D2BE36C9D2B76F(iLocal_55);
			unk_0x64708EB51448F86F(iLocal_55, 1);
			unk_0x4EEE9D9427E70F4E(iLocal_55, -935.6716f, 2767.772f, 24.4289f, 1, 0, 0, 1);
			unk_0xFBDCF3D5834B58D8(iLocal_55, 136.9073f);
			unk_0x8A3D3E40973625F0(iLocal_55, 0, 0);
		}
		if (iLocal_315)
		{
			unk_0x4AD174B0D4656163(800);
			while (unk_0xF1384D7CDC020749())
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			iLocal_315 = 0;
		}
		iLocal_317 = 0;
		iLocal_314 = 1;
	}
	if (iLocal_314 && !unk_0xE4F7206742848BAF(iLocal_55))
	{
		if (unk_0x0B4DDB992C7BCF57(unk_0x070841EC2D20AB5A(), 0))
		{
			if ((((((unk_0xC4F9E3DD5445F8E4(iLocal_55, unk_0x070841EC2D20AB5A(), 20f, 20f, 20f, 0, 1, 0) && unk_0x1AEADBB0240E0B51(unk_0x070841EC2D20AB5A()) >= 1) && !unk_0xD3AE48D8EB7DCBE6(unk_0x946C63BD9EF05437(unk_0x070841EC2D20AB5A()))) && !unk_0xDBFA5C79D9B3D622(unk_0x946C63BD9EF05437(unk_0x070841EC2D20AB5A()))) && !unk_0xEC6E5897335290DD(unk_0x946C63BD9EF05437(unk_0x070841EC2D20AB5A()))) && !unk_0x5BFC131B92C92E97(unk_0x946C63BD9EF05437(unk_0x070841EC2D20AB5A()))) && unk_0x946C63BD9EF05437(unk_0x070841EC2D20AB5A()) != joaat("rhino"))
			{
				unk_0x33A0CEA494F4C2A3(&uLocal_113);
				unk_0x85FD30B510E7C05E(0, unk_0x27D769C59BC9D030(), 10000, 2048, 3);
				unk_0xF14C2AE8A3F59CE0(0, unk_0x27D769C59BC9D030(), 6500);
				unk_0x835BBE043A81D6DD(0, unk_0x070841EC2D20AB5A(), -1, 0, 1f, 1, 0);
				unk_0x33F83FC0F5F458E3(uLocal_113);
				unk_0x8B8674266D533E9F(iLocal_55, uLocal_113);
				unk_0x433C209504FBC7EE(&uLocal_113);
			}
			else if (!unk_0x17297F499604E052(iLocal_55))
			{
				unk_0x3BD6117D6F00B83F(iLocal_55, func_67());
				unk_0xD2B9C1CC6FD508DD(iLocal_55, 1);
				unk_0x7AA5A5EF421F62F0(iLocal_55, 0);
			}
		}
		else if (!unk_0x17297F499604E052(iLocal_55))
		{
			unk_0x3BD6117D6F00B83F(iLocal_55, func_67());
			unk_0xD2B9C1CC6FD508DD(iLocal_55, 1);
			unk_0x7AA5A5EF421F62F0(iLocal_55, 0);
		}
		unk_0xA8ED9F72DC442242(iLocal_55, 0);
		unk_0x9F805E4A6F671CEE(unk_0x4D29100D094E5511(), 1, 0);
		uLocal_320 = func_23(Local_67, 1);
		iLocal_114 = 1;
		bLocal_116 = true;
		unk_0x651E63BA2F4975EC("re@stag_do@");
		unk_0x651E63BA2F4975EC("re@stag_do@idle_a");
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
	if (unk_0xCBB243DDC0D132D1())
	{
		if ((unk_0xA0F74982C6AAA9D4() - Global_28) > iParam0)
		{
			Global_27 = unk_0xA0F74982C6AAA9D4();
		}
		Global_28 = unk_0xA0F74982C6AAA9D4();
		if ((unk_0xA0F74982C6AAA9D4() - Global_27) > iParam0)
		{
			if (func_118())
			{
				Global_27 = unk_0xA0F74982C6AAA9D4();
				return 1;
			}
		}
	}
	return 0;
}

int func_118()
{
	if (unk_0x1E114237D972903B())
	{
		return 0;
	}
	if (unk_0x117D586920E8F7BA(0, 18) || unk_0x117D586920E8F7BA(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_119()
{
	if (!unk_0xE4F7206742848BAF(iLocal_55))
	{
		if (unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 0))
		{
			if (!unk_0xE24B37600DCB21FC(unk_0xD9FFE8E1642C81E2(unk_0x27D769C59BC9D030(), 0)))
			{
				unk_0xAF3355298F537BB0(unk_0xD9FFE8E1642C81E2(unk_0x27D769C59BC9D030(), 0), 1, 0);
			}
		}
		iLocal_133 = unk_0x63BC24621BDD8342(unk_0xA8CFDE65C45F813B(iLocal_55, 0), 30f, 0, 4);
		if (!unk_0x2006A8C1BA2AFE80(iLocal_133, 0))
		{
			if (!unk_0x32C6487B93CCAF4F(iLocal_133, -1))
			{
				if (unk_0xC4F9E3DD5445F8E4(iLocal_133, iLocal_55, 30f, 30f, 30f, 0, 1, 0))
				{
					unk_0xAF3355298F537BB0(iLocal_133, 1, 0);
					if (unk_0x0B4DDB992C7BCF57(iLocal_133, 0))
					{
						unk_0x533E03CFA6081F13(iLocal_133, 3000, 0, 0);
						if (!unk_0xE4F7206742848BAF(iLocal_55))
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
					unk_0x9846B4D56971A958(&iLocal_133);
				}
			}
		}
	}
}

void func_120()
{
	int iVar0;
	int iVar1;
	
	if (unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 1))
	{
		iVar0 = unk_0xF67151DFE5F974F3(unk_0x27D769C59BC9D030());
		if (unk_0x0B4DDB992C7BCF57(iVar0, 0))
		{
			iVar1 = unk_0x9297C590C99228DC(iVar0, 0);
			if (!unk_0xE4F7206742848BAF(iVar1))
			{
				if (iVar1 != unk_0x27D769C59BC9D030())
				{
					if (unk_0xE24B37600DCB21FC(iVar1))
					{
						if (!unk_0xFB6EC5803E0147E0(iVar1, unk_0x27D769C59BC9D030()))
						{
							unk_0x85FD30B510E7C05E(iVar1, unk_0x27D769C59BC9D030(), 2000, 2048, 2);
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
	unk_0x97C59C4E8349D15F(joaat("u_m_y_staggrm_01"));
	unk_0x97C59C4E8349D15F(joaat("superd"));
	unk_0x97C59C4E8349D15F(joaat("prop_stag_do_rope"));
	while ((!unk_0x875098323FCA8FE6(joaat("u_m_y_staggrm_01")) || !unk_0x875098323FCA8FE6(joaat("superd"))) || !unk_0x875098323FCA8FE6(joaat("prop_stag_do_rope")))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0x88172B3983EC5071("re@stag_do@");
	unk_0x88172B3983EC5071("re@stag_do@idle_a");
	unk_0x386AEE656157CB3A("ROPE_CUT", 0);
	while ((!unk_0x482101C9B3483958("re@stag_do@") || !unk_0x482101C9B3483958("re@stag_do@idle_a")) || !unk_0x386AEE656157CB3A("ROPE_CUT", 0))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	iLocal_55 = unk_0x91D233CD0204A37F(26, joaat("u_m_y_staggrm_01"), -935.57f, 2767.616f, 24.448f, 140.5f, 1, 1);
	unk_0x4410225696D7183B(iLocal_55, "GROOM");
	unk_0x71065DDFF8D7744C(iLocal_55, joaat("player"));
	unk_0xA8ED9F72DC442242(iLocal_55, 1);
	unk_0x0705DFFD1CB9FCA6(iLocal_55, 0);
	unk_0x5D927D8655264D6C(iLocal_55, 2, 0, 0, 0);
	unk_0x5D927D8655264D6C(iLocal_55, 0, 0, 0, 0);
	unk_0x5D927D8655264D6C(iLocal_55, 3, 0, 0, 0);
	unk_0x5D927D8655264D6C(iLocal_55, 4, 0, 0, 0);
	unk_0x5D927D8655264D6C(iLocal_55, 11, 1, 0, 0);
	unk_0xB0E2B335371D29B1(iLocal_55, joaat("empty"));
	unk_0x2A3F4ACD0DB18011(iLocal_55, 3);
	unk_0x56F64CC9254C2E4F(iLocal_55, 206, 1);
	unk_0x56F64CC9254C2E4F(iLocal_55, 134, 1);
	iLocal_66 = unk_0xA8C993B9F5CB4D92(joaat("prop_stag_do_rope"), unk_0xA8CFDE65C45F813B(iLocal_55, 1), 1, 1, 0);
	unk_0x356675505D724E40(iLocal_66, iLocal_55, unk_0x5C9720EC37666AF2(iLocal_55, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
	iLocal_59 = unk_0x4E76306EE6AE7596(joaat("superd"), -2009.015f, 455.3556f, 101.6528f, 274.8103f, 0, 0);
	unk_0x1B7FCBF5F0A9F480(iLocal_59, 1);
	unk_0x9B3E806EC535DBC3(iLocal_59, 0f);
	unk_0x37B592C0F74990D2(iLocal_59, 3);
	unk_0x66E8010228AFE795(iLocal_59, 0);
	unk_0xB5AD07DFDC37E1F1(iLocal_59, 0, 73, 0);
	unk_0x06CAD98E40B90607(iLocal_59, 2, 48);
	unk_0x406E9DA605D8FD2B(iLocal_59, 11, 1, 0);
	unk_0x406E9DA605D8FD2B(iLocal_59, 12, 1, 0);
	unk_0x41D6B0C62443EFBB(joaat("superd"), 3);
	unk_0x6C2E94E5E71423B4(iLocal_59, 10000);
	unk_0xE640F7052EEB67D9(iLocal_59, 5f);
	unk_0xDD8638B43D499C77(iLocal_59);
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
	unk_0x7C898812896A5304(joaat("superd"), 1);
	unk_0x5B40EC93D0367189(Local_87 - Vector(10f, 10f, 10f), Local_87 + Vector(10f, 10f, 10f), 0, 1);
	unk_0x84496C593C3C7F04(Local_87 - Vector(20f, 20f, 20f), Local_87 + Vector(20f, 20f, 20f), 0, 1, 1, 1);
	unk_0x84496C593C3C7F04(unk_0xA8CFDE65C45F813B(iLocal_55, 0) - Vector(10f, 10f, 10f), unk_0xA8CFDE65C45F813B(iLocal_55, 0) + Vector(10f, 10f, 10f), 0, 1, 1, 1);
	unk_0x84496C593C3C7F04(Vector(101.6406f, 455.1994f, -2007.751f) - Vector(15f, 15f, 15f), Vector(101.6406f, 455.1994f, -2007.751f) + Vector(15f, 15f, 15f), 0, 1, 1, 1);
	unk_0x84496C593C3C7F04(Vector(47.4293f, 4299.008f, -2202.747f) - Vector(15f, 25f, 25f), Vector(47.4293f, 4299.008f, -2202.747f) + Vector(15f, 25f, 25f), 0, 1, 1, 1);
	unk_0x90CDF5C9FC20A5BF(unk_0xA8CFDE65C45F813B(iLocal_55, 1), 10f, 0);
	if (!unk_0x2006A8C1BA2AFE80(iLocal_55, 0))
	{
		unk_0x33A0CEA494F4C2A3(&uLocal_113);
		unk_0x878D12AEFBF5BAF0(0, "re@stag_do@idle_a", "idle_a_ped", 8f, -8f, -1, 9, 0, 0, 0, 0);
		unk_0x33F83FC0F5F458E3(uLocal_113);
		unk_0x8B8674266D533E9F(iLocal_55, uLocal_113);
		unk_0x433C209504FBC7EE(&uLocal_113);
		unk_0x94DC76C688E7D222(iLocal_55, 1);
	}
	if (func_11() == 0)
	{
		func_90(&uLocal_136, 0, unk_0x27D769C59BC9D030(), "MICHAEL", 0, 1);
	}
	if (func_11() == 1)
	{
		func_90(&uLocal_136, 0, unk_0x27D769C59BC9D030(), "FRANKLIN", 0, 1);
	}
	if (func_11() == 2)
	{
		func_90(&uLocal_136, 0, unk_0x27D769C59BC9D030(), "TREVOR", 0, 1);
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
		unk_0xF17F4B0641AB2DE1(&(Global_91330.f_1300[iParam0]), iParam1);
	}
	else if (unk_0x0E063DDE8855EC52())
	{
		if (func_34() == 0)
		{
			uVar0 = func_126(func_127(iParam0), -1, 0);
			unk_0xF17F4B0641AB2DE1(&uVar0, iParam1);
			func_124(func_127(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0xF17F4B0641AB2DE1(&(Global_101154.f_668[iParam0]), iParam1);
	}
}

void func_124(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2469339[iParam0 /*5*/][func_125(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xE2A8B026FA4DDFFF(iVar0, uParam1, iParam3);
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
			Global_2469052 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2469052 = 1;
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
	uVar0 = Global_2469339[iParam0 /*5*/][func_125(iParam1)];
	if (unk_0xD0D748C6C14C0E92(uVar0, &uVar1, -1))
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
			return 820;
			break;
		
		case 1:
			return 821;
			break;
		
		case 2:
			return 822;
			break;
		
		case 3:
			return 823;
			break;
		
		case 4:
			return 824;
			break;
		
		case 5:
			return 825;
			break;
		
		case 6:
			return 826;
			break;
		
		case 7:
			return 827;
			break;
		
		case 8:
			return 828;
			break;
		
		case 9:
			return 829;
			break;
		
		case 10:
			return 830;
			break;
		
		case 11:
			return 831;
			break;
		
		case 12:
			return 832;
			break;
		
		case 13:
			return 833;
			break;
		
		case 14:
			return 834;
			break;
		
		case 15:
			return 836;
			break;
		
		case 16:
			return 837;
			break;
		
		case 17:
			return 838;
			break;
		
		case 18:
			return 839;
			break;
		
		case 19:
			return 840;
			break;
		
		case 20:
			return 841;
			break;
		
		case 21:
			return 842;
			break;
		
		case 22:
			return 843;
			break;
		
		case 23:
			return 844;
			break;
		
		case 24:
			return 845;
			break;
		
		case 25:
			return 846;
			break;
		
		case 26:
			return 847;
			break;
		
		case 27:
			return 848;
			break;
		
		case 28:
			return 849;
			break;
		
		case 29:
			return 850;
			break;
		
		case 30:
			return 851;
			break;
		
		case 31:
			return 852;
			break;
		
		case 32:
			return 853;
			break;
		
		case 33:
			return 854;
			break;
		
		case 34:
			return 855;
			break;
		
		case 35:
			return 856;
			break;
		
		case 36:
			return 857;
			break;
		
		case 37:
			return 858;
			break;
		
		case 38:
			return 859;
			break;
		
		case 39:
			return 860;
			break;
		
		case 40:
			return 864;
			break;
		
		case 41:
			return 865;
			break;
		
		case 42:
			return 866;
			break;
		
		case 43:
			return 867;
			break;
		
		case 44:
			return 3852;
			break;
		
		default:
			break;
	}
	return 3949;
}

void func_128(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0x26545538B51562AD(&(Global_91330.f_1300[iParam0]), iParam1);
	}
	else if (unk_0x0E063DDE8855EC52())
	{
		if (func_34() == 0)
		{
			uVar0 = func_126(func_127(iParam0), -1, 0);
			unk_0x26545538B51562AD(&uVar0, iParam1);
			func_124(func_127(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0x26545538B51562AD(&(Global_101154.f_668[iParam0]), iParam1);
	}
}

int func_129(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0xF426A5DE932B3BEE(Global_91330.f_1300[iParam0], iParam1);
	}
	else if (unk_0x0E063DDE8855EC52())
	{
		if (func_34() == 0)
		{
			return unk_0xF426A5DE932B3BEE(func_126(func_127(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xF426A5DE932B3BEE(Global_101154.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_130()
{
	if (unk_0x2DB75A8F096AB1F1(unk_0x4D29100D094E5511()) && !unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()))
	{
		if (unk_0xB7A628320EFF8E47(unk_0xA8CFDE65C45F813B(unk_0x27D769C59BC9D030(), 1), Local_45) < (75f * 75f))
		{
			return 1;
		}
		if (unk_0xA8CEACB4F35AE058(unk_0x73A52F9295BA1599(unk_0x27D769C59BC9D030())) > 1369f && !func_141())
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
	if (unk_0x2DB75A8F096AB1F1(unk_0x4D29100D094E5511()))
	{
		if (func_13(func_11()))
		{
			iVar36 = func_44();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0xF426A5DE932B3BEE(Global_101154.f_17264[iVar32 /*6*/], 2) && !unk_0xF426A5DE932B3BEE(Global_101154.f_17264[iVar32 /*6*/], 3))
				{
					func_132(iVar32, &Var0);
					fVar35 = unk_0x676D4CD42E0837CA(unk_0xA8CFDE65C45F813B(unk_0x27D769C59BC9D030(), 0), Var0.f_6, 1);
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
	if (unk_0x75CB9E30BA492FF0(&cVar2))
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
	return Global_100872 > 0;
}

int func_139()
{
	if (Global_88533 != -1)
	{
		return 1;
	}
	return 0;
}

int func_140()
{
	if (Global_88533 != -1)
	{
		return unk_0xF426A5DE932B3BEE(Global_82399[Global_88533 /*34*/].f_15, 20);
	}
	return 0;
}

int func_141()
{
	if (unk_0xDFCB321F1D24137F())
	{
		if (unk_0x0D8B62403640E4FC() == 1f)
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
	if (!unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()))
	{
		if (unk_0xA8CEACB4F35AE058(unk_0x73A52F9295BA1599(unk_0x27D769C59BC9D030())) > 1369f && !func_141())
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
	if ((Global_101143 == func_48() && unk_0xE020981ADD7B744F()) && Global_101144)
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
	unk_0x00DE3CC10C30E794(0);
	unk_0x82AF1068A2CD2D6A(1);
	Global_101140 = 0;
	func_145();
}

void func_145()
{
	if (!unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()))
	{
		if (unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 0))
		{
			unk_0x7C898812896A5304(unk_0x946C63BD9EF05437(unk_0xD9FFE8E1642C81E2(unk_0x27D769C59BC9D030(), 0)), 1);
		}
		unk_0x56F64CC9254C2E4F(unk_0x27D769C59BC9D030(), 32, 0);
	}
}

void func_146(int iParam0)
{
	Global_101143 = iParam0;
}

int func_147(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_138022)
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
		if (unk_0x2DB75A8F096AB1F1(unk_0x4D29100D094E5511()) && !unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()))
		{
			Var1 = { unk_0xA8CFDE65C45F813B(unk_0x27D769C59BC9D030(), 1) };
			if (unk_0xA8CEACB4F35AE058(unk_0x73A52F9295BA1599(unk_0x27D769C59BC9D030())) > 1369f && !func_141())
			{
				return 0;
			}
		}
		if (!Global_101154.f_7775)
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
		if (Global_101143 != -1)
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
		if (unk_0x2DB75A8F096AB1F1(unk_0x4D29100D094E5511()) && !bParam6)
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
		if (!func_170(Global_101154.f_29520.f_43[iParam3]))
		{
			return 0;
		}
		if ((unk_0xA0F74982C6AAA9D4() - Global_101145) < 150000)
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
		if (unk_0x9332944411A91CF6())
		{
			return 0;
		}
		if (unk_0xE020981ADD7B744F())
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
		if (unk_0xBFF8C08B5EEF0974(unk_0x94F32809C13F5225(unk_0x27D769C59BC9D030())))
		{
			if ((unk_0x94F32809C13F5225(unk_0x27D769C59BC9D030()) == unk_0x53DE78F24F01D352(377.153f, -717.567f, 10.0536f) || unk_0x94F32809C13F5225(unk_0x27D769C59BC9D030()) == unk_0x53DE78F24F01D352(320.9934f, 265.2515f, 82.1221f)) || unk_0x94F32809C13F5225(unk_0x27D769C59BC9D030()) == unk_0x53DE78F24F01D352(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_159(0, 0))
		{
			return 0;
		}
		if (Global_25266)
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
				Var5 = { Global_101154.f_1826.f_539.f_1528[iVar4 /*3*/] };
				iVar8 = Global_101154.f_1826.f_539.f_1524[iVar4];
				if (func_158(iVar8))
				{
					if (func_149(iVar4))
					{
						if (!func_148(Var5, 0f, 0f, 0f, 0))
						{
							if (unk_0xB7A628320EFF8E47(unk_0xA8CFDE65C45F813B(unk_0x27D769C59BC9D030(), 0), Var5) < (210f * 210f))
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
	
	iVar0 = Global_101154.f_1826.f_539.f_1524[iParam0];
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
	if (unk_0xF426A5DE932B3BEE(Global_101154.f_29520.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_160(int iParam0)
{
	int iVar0;
	
	if (unk_0x2DB75A8F096AB1F1(unk_0x4D29100D094E5511()))
	{
		if (unk_0xD2CFFE76B625AE55(unk_0x27D769C59BC9D030()))
		{
			if (!unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()))
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
						if (((((((((((((((((!unk_0x0E14B2E6EB7392B5(unk_0x4D29100D094E5511()) || unk_0x0BAF34551BADE6DC(unk_0x27D769C59BC9D030())) || unk_0x0F74EBD810C90005(unk_0x27D769C59BC9D030())) || unk_0xBD036012AF60D938(unk_0x27D769C59BC9D030())) || unk_0x91C2FD50D18141F4(unk_0x27D769C59BC9D030())) || unk_0xA3626A14E36A87F3(unk_0x4D29100D094E5511(), 1)) || unk_0x300FBC9A9F898890(unk_0x4D29100D094E5511())) || unk_0x55AE67E25C3C8024(unk_0x27D769C59BC9D030(), 0)) || func_168()) || Global_100201) || Global_25122) || func_167()) || func_18(8, -1)) || func_166()) || func_165()) || func_164()) || func_163()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xA3626A14E36A87F3(unk_0x4D29100D094E5511(), 1) || func_168()) || Global_25122) || func_167()) || func_18(8, -1)) || func_164()) || func_166()) || func_165()) || func_163()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x0E14B2E6EB7392B5(unk_0x4D29100D094E5511()) || unk_0x0BAF34551BADE6DC(unk_0x27D769C59BC9D030())) || unk_0x0F74EBD810C90005(unk_0x27D769C59BC9D030())) || unk_0xBD036012AF60D938(unk_0x27D769C59BC9D030())) || unk_0x91C2FD50D18141F4(unk_0x27D769C59BC9D030())) || unk_0xA3626A14E36A87F3(unk_0x4D29100D094E5511(), 1)) || unk_0x300FBC9A9F898890(unk_0x4D29100D094E5511())) || unk_0x55AE67E25C3C8024(unk_0x27D769C59BC9D030(), 0)) || func_168()) || Global_100201) || Global_25122) || func_167()) || func_18(8, -1)) || func_164()) || func_166()) || func_165()) || func_163()) || Global_101154.f_6378.f_919[iVar0] == 5) || Global_36258 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0xBD036012AF60D938(unk_0x27D769C59BC9D030()) || unk_0x91C2FD50D18141F4(unk_0x27D769C59BC9D030())) || unk_0xA3626A14E36A87F3(unk_0x4D29100D094E5511(), 1)) || unk_0x55AE67E25C3C8024(unk_0x27D769C59BC9D030(), 0)) || func_168()) || Global_100201) || Global_25122) || func_167()) || func_18(8, -1)) || func_166()) || func_165()) || func_163()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_168() || unk_0xC6861DC0B749762A(unk_0x4D29100D094E5511()) > 0) || func_18(8, -1)) || func_163()) || func_162()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_18(8, -1) || func_166()) || func_165()) || func_162()) || func_161())
						{
							return 0;
						}
						if ((unk_0x5D293E404CA20AA5() && unk_0x472A7A9D6102404C() != 3) && unk_0x00798D768A589710() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0xD2CFFE76B625AE55(unk_0x27D769C59BC9D030()))
						{
							if ((((((((((((((unk_0x55AE67E25C3C8024(unk_0x27D769C59BC9D030(), 0) || unk_0xC6861DC0B749762A(unk_0x4D29100D094E5511()) > 0) || unk_0x0BAF34551BADE6DC(unk_0x27D769C59BC9D030())) || unk_0xBD036012AF60D938(unk_0x27D769C59BC9D030())) || unk_0x91C2FD50D18141F4(unk_0x27D769C59BC9D030())) || unk_0xA3626A14E36A87F3(unk_0x4D29100D094E5511(), 1)) || unk_0x300FBC9A9F898890(unk_0x4D29100D094E5511())) || func_168()) || Global_25122) || func_167()) || func_18(8, -1)) || func_165()) || func_164()) || func_163()) || Global_101154.f_6378.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x55AE67E25C3C8024(unk_0x27D769C59BC9D030(), 0) || !unk_0x170C6E2649B67440(unk_0x4D29100D094E5511())) || !unk_0x0E14B2E6EB7392B5(unk_0x4D29100D094E5511())) || !unk_0xCBB243DDC0D132D1()) || unk_0x0BAF34551BADE6DC(unk_0x27D769C59BC9D030())) || unk_0xBD036012AF60D938(unk_0x27D769C59BC9D030())) || unk_0x91C2FD50D18141F4(unk_0x27D769C59BC9D030())) || unk_0xA3626A14E36A87F3(unk_0x4D29100D094E5511(), 1)) || func_168()) || func_165()) || Global_100201) || Global_25122) || func_167()) || Global_36839) || func_18(8, -1)) || func_164()) || func_162()) || func_163()) || Global_101154.f_6378.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x55AE67E25C3C8024(unk_0x27D769C59BC9D030(), 0) || !unk_0x170C6E2649B67440(unk_0x4D29100D094E5511())) || !unk_0x0E14B2E6EB7392B5(unk_0x4D29100D094E5511())) || !unk_0xCBB243DDC0D132D1()) || unk_0x14B5449970A1C2DA(unk_0x4D29100D094E5511(), 0)) || unk_0x0BAF34551BADE6DC(unk_0x27D769C59BC9D030())) || unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 1)) || unk_0xBD036012AF60D938(unk_0x27D769C59BC9D030())) || unk_0x91C2FD50D18141F4(unk_0x27D769C59BC9D030())) || unk_0x27B3DE54D214014B(unk_0x27D769C59BC9D030())) || unk_0xA3626A14E36A87F3(unk_0x4D29100D094E5511(), 1)) || unk_0x300FBC9A9F898890(unk_0x4D29100D094E5511())) || func_168()) || Global_100201) || Global_25122) || func_167()) || func_18(8, -1)) || func_164()) || func_162()) || func_166()) || func_165()) || func_163())
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
	return Global_91317.f_1;
}

int func_162()
{
	if (Global_88533 != -1)
	{
		return unk_0xF426A5DE932B3BEE(Global_82399[Global_88533 /*34*/].f_15, 13);
	}
	return 0;
}

int func_163()
{
	if (unk_0xD32535FA4397160F(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_164()
{
	if (Global_69749)
	{
		return 1;
	}
	else if (Global_55743 && !Global_55749)
	{
		return 1;
	}
	return 0;
}

bool func_165()
{
	return Global_91330.f_297 > 0;
}

bool func_166()
{
	return Global_91330.f_296 > 0;
}

var func_167()
{
	return Global_1315913;
}

int func_168()
{
	if (!unk_0x0E063DDE8855EC52())
	{
		return Global_89089.f_44 == 1;
	}
	return 0;
}

int func_169()
{
	func_10();
	if (Global_3088[Global_14413 /*2811*/][0 /*281*/].f_259 == 2)
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
	return Global_101154.f_6378.f_919[iParam0];
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
		bVar1 = unk_0xF426A5DE932B3BEE(Global_101154.f_29520, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0xF426A5DE932B3BEE(Global_101154.f_29520.f_1, iVar0);
	}
	return bVar1;
}

int func_174()
{
	int iVar0;
	
	if (Global_25270)
	{
		if (unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 0))
		{
			iVar0 = unk_0xD9FFE8E1642C81E2(unk_0x27D769C59BC9D030(), 0);
			if (unk_0x0B4DDB992C7BCF57(iVar0, 0))
			{
				if (!unk_0xE4F7206742848BAF(unk_0x9297C590C99228DC(iVar0, 0)))
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
	
	if (unk_0xB3081451628A5D6C())
	{
		if (unk_0xF8B1AB221BA632B5())
		{
			if (unk_0x4C5F5AF635DED95E())
			{
				unk_0xD0D748C6C14C0E92(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0x26545538B51562AD(&uVar0, 2);
				unk_0x26545538B51562AD(&uVar0, 4);
				unk_0x26545538B51562AD(&uVar0, 6);
				unk_0x26545538B51562AD(&Global_25, 2);
				unk_0x26545538B51562AD(&Global_25, 4);
				unk_0x26545538B51562AD(&Global_25, 6);
				unk_0xE2A8B026FA4DDFFF(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0x755BFB74ADDC1524())
				{
					iVar0 = unk_0xC06A80AF9911D7A8(866);
					unk_0x26545538B51562AD(&iVar0, 0);
					unk_0xD020BAA9D2E33978(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_138274 == 2)
	{
		return 1;
	}
	else if (Global_138274 == 3)
	{
		return 0;
	}
	if (unk_0x755BFB74ADDC1524())
	{
		if (unk_0xF426A5DE932B3BEE(unk_0xC06A80AF9911D7A8(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_176(int iParam0, int iParam1)
{
	if (Global_101154.f_8884[iParam0 /*12*/].f_5 == 1)
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
		func_210(0);
		unk_0x5B40EC93D0367189(Local_87 - Vector(10f, 10f, 10f), Local_87 + Vector(10f, 10f, 10f), 1, 1);
		unk_0x9383B9CF64BA49DB();
		func_21();
		unk_0x2612FD04639C180F(unk_0x4D29100D094E5511());
		if (!unk_0x2006A8C1BA2AFE80(iLocal_65, 0))
		{
			if (!unk_0x1C48F76B3D032074(unk_0x27D769C59BC9D030(), iLocal_65, 0) && !unk_0xC4F9E3DD5445F8E4(unk_0x27D769C59BC9D030(), iLocal_65, 50f, 50f, 50f, 0, 1, 0))
			{
				func_189(iLocal_65, 0, 145);
			}
		}
		if (unk_0xB1988D54B2C48CB5(unk_0x27D769C59BC9D030(), Local_87, 100f, 100f, 100f, 0, 1, 0))
		{
			if (!unk_0xE4F7206742848BAF(iLocal_55) && !unk_0xE4F7206742848BAF(iLocal_57))
			{
				unk_0x33A0CEA494F4C2A3(&uLocal_113);
				unk_0xE4A57337AE998385(0, -330.36f, 6154.03f, 31.8f, 1f, -1, 1048576000, 0, 1193033728);
				unk_0xAFEA49BE83A57A1A(0, iLocal_57, 16, 0f, 0f, 0f, 0f, 0f);
				unk_0x33F83FC0F5F458E3(uLocal_113);
				unk_0x8B8674266D533E9F(iLocal_55, uLocal_113);
				unk_0x433C209504FBC7EE(&uLocal_113);
				unk_0x33A0CEA494F4C2A3(&uLocal_113);
				unk_0xE4A57337AE998385(0, -330.36f, 6155.03f, 31.8f, 1f, -1, 1048576000, 0, 1193033728);
				unk_0xAFEA49BE83A57A1A(0, iLocal_55, 16, 0f, 0f, 0f, 0f, 0f);
				unk_0x33F83FC0F5F458E3(uLocal_113);
				unk_0x8B8674266D533E9F(iLocal_57, uLocal_113);
				unk_0x433C209504FBC7EE(&uLocal_113);
			}
		}
		unk_0x9846B4D56971A958(&iLocal_133);
		unk_0x9846B4D56971A958(&iLocal_59);
		if (!unk_0xE319A8D4D9264966(unk_0x4D29100D094E5511()))
		{
			unk_0x9F805E4A6F671CEE(unk_0x4D29100D094E5511(), 1, 0);
		}
		if (!unk_0xE4F7206742848BAF(iLocal_55))
		{
			unk_0x56F64CC9254C2E4F(iLocal_55, 317, 1);
			if (!unk_0xBF99E4112970270F(iLocal_55))
			{
				unk_0xA8CA82EB31D1626F(iLocal_55, 0);
			}
			unk_0xBFE5E4F12033E3EF(iLocal_55);
			unk_0xA8ED9F72DC442242(iLocal_55, 0);
		}
		else if (unk_0xD2CFFE76B625AE55(iLocal_66))
		{
			unk_0xE223D49B3EFFD3E3(iLocal_66, 1, 1);
		}
		unk_0x7E8F7C1D05860F53(&iLocal_55);
		if (!unk_0xE4F7206742848BAF(iLocal_57))
		{
			unk_0x56F64CC9254C2E4F(iLocal_57, 317, 1);
			unk_0xA8ED9F72DC442242(iLocal_57, 0);
		}
		unk_0x7E8F7C1D05860F53(&iLocal_57);
		if (!unk_0xE4F7206742848BAF(iLocal_56))
		{
			unk_0xA8ED9F72DC442242(iLocal_56, 0);
		}
		if (!unk_0xE4F7206742848BAF(iLocal_58))
		{
			unk_0xA8ED9F72DC442242(iLocal_58, 0);
		}
		unk_0x7E8F7C1D05860F53(&iLocal_56);
	}
	func_178(-1);
	unk_0x7C3AA2D27E16E2AD();
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
		unk_0x0F0476353304C917(0, 0);
		Global_101145 = unk_0xA0F74982C6AAA9D4();
		func_181(30000);
		StringCopy(&cVar0, func_180(Global_101143, 1), 64);
		if (func_47(Global_101143) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_101142, 64);
		}
		unk_0xD644264381925B2A(&cVar0, Global_101140, (unk_0xA0F74982C6AAA9D4() - Global_101141), 0);
	}
	else if (unk_0xF426A5DE932B3BEE(Global_101150, 0) && Global_101154.f_29520.f_2 < 3)
	{
		unk_0xF17F4B0641AB2DE1(&Global_101150, 0);
	}
	func_179(&Global_25179);
	Global_101144 = 0;
	func_146(-1);
}

void func_179(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_35673)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_35672 = 0;
	Global_35674 = 0;
	Global_35711 = 15;
	Global_55746 = 0;
	Global_55747 = 0;
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
	Global_36262 = (unk_0xA0F74982C6AAA9D4() + iParam0);
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
	Global_101154.f_29520.f_43[iParam0] = *uParam1;
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
		uVar1 = unk_0x608A5034B2871DB1(iParam0, &uVar0);
		if (!unk_0x75CB9E30BA492FF0(uVar1))
		{
			if (unk_0x70ABFF261710305D(uVar1) == unk_0x70ABFF261710305D("vehicle_gen_controller"))
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
		iVar0 = unk_0x9297C590C99228DC(iParam0, -1);
		if (!unk_0xD2CFFE76B625AE55(iVar0))
		{
			iVar0 = unk_0x8704B0F200BD412D(iParam0, -1);
		}
		if (unk_0xD2CFFE76B625AE55(iVar0) && !unk_0xE4F7206742848BAF(iVar0))
		{
			if (unk_0x946C63BD9EF05437(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0x946C63BD9EF05437(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0x946C63BD9EF05437(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_101154.f_1826.f_539.f_3549;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0x946C63BD9EF05437(iParam0) == Global_101154.f_18807.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!unk_0x75CB9E30BA492FF0(&(Global_101154.f_18807.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (unk_0xC1C5B83BB6719C6C(unk_0x9111F14F8ABAE773(iParam0), &(Global_101154.f_18807.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_101154.f_18807.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_101154.f_18807.f_5592[iVar1] = iVar2;
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
		if (unk_0x946C63BD9EF05437(iParam0) == Global_101154.f_18807.f_5600[iVar1 /*78*/].f_66)
		{
			if (!unk_0x75CB9E30BA492FF0(&(Global_101154.f_18807.f_5600[iVar1 /*78*/].f_1)))
			{
				if (unk_0xC1C5B83BB6719C6C(unk_0x9111F14F8ABAE773(iParam0), &(Global_101154.f_18807.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_101154.f_18807.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_101154.f_18807.f_5590 = iParam1;
	Global_69224 = iParam0;
	Global_101154.f_18807.f_5588 = 1;
	func_191(iParam0, &(Global_101154.f_18807.f_5510));
}

void func_191(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0x0B4DDB992C7BCF57(iParam0, 0))
	{
		func_194(uParam1);
		uParam1->f_66 = unk_0x946C63BD9EF05437(iParam0);
		StringCopy(&(uParam1->f_1), unk_0x9111F14F8ABAE773(iParam0), 16);
		*uParam1 = unk_0xC960169422AD5363(iParam0);
		unk_0x923073D63782E037(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0xC780DEE9C0D887BF(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0x0C8CAFCFEDEEF36D(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0xEF90EF7B0A4543EE(iParam0);
		uParam1->f_67 = unk_0xC3362AC1471926AA(iParam0);
		uParam1->f_69 = unk_0xA2A724EEE80F007F(iParam0);
		uParam1->f_70 = unk_0x977E90DD5881BA08(iParam0);
		unk_0x477102A8963B16B4(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0x486F923523D0F4DB(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0x8A455A983374FA6C(iParam0, 2))
		{
			unk_0x26545538B51562AD(&(uParam1->f_77), 28);
		}
		if (unk_0x8A455A983374FA6C(iParam0, 3))
		{
			unk_0x26545538B51562AD(&(uParam1->f_77), 29);
		}
		if (unk_0x8A455A983374FA6C(iParam0, 0))
		{
			unk_0x26545538B51562AD(&(uParam1->f_77), 30);
		}
		if (unk_0x8A455A983374FA6C(iParam0, 1))
		{
			unk_0x26545538B51562AD(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && uParam1->f_66 != joaat("granger"))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0x1BCE164A254176FA(iParam0, 0))
		{
			uParam1->f_68 = unk_0xD3A88CAE99C338A3(iParam0);
		}
		if (unk_0xEC6E5897335290DD(uParam1->f_66))
		{
			if (unk_0x7D5667109E828021(iParam0))
			{
				switch (unk_0xDBA4852736CE4FDB(iParam0))
				{
					case 2:
					case 0:
						unk_0xF17F4B0641AB2DE1(&(uParam1->f_77), 23);
						unk_0x26545538B51562AD(&(uParam1->f_77), 22);
						break;
					
					case 3:
					case 1:
						unk_0xF17F4B0641AB2DE1(&(uParam1->f_77), 23);
						unk_0xF17F4B0641AB2DE1(&(uParam1->f_77), 22);
						break;
					
					case 4:
						unk_0x26545538B51562AD(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0x26545538B51562AD(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0x480DA4A4EBDCE31C(iParam0))
		{
			unk_0x26545538B51562AD(&(uParam1->f_77), 9);
		}
		if (unk_0x6509ED7AD3D989FE(iParam0))
		{
			unk_0x26545538B51562AD(&(uParam1->f_77), 10);
		}
		if (unk_0xFD1E4AF84D93E688(iParam0))
		{
			unk_0x26545538B51562AD(&(uParam1->f_77), 13);
			unk_0x3E4DACD1434531DD(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0xE00D5F67AE8F1A68(iParam0))
		{
			unk_0x26545538B51562AD(&(uParam1->f_77), 12);
		}
		func_193(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0x3D866A165E63B4FE(iParam0, iVar0 + 1))
			{
				unk_0x26545538B51562AD(&(uParam1->f_77), func_192(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x3E70A6BAFEE797B2(iParam0, 0))
		{
			unk_0x26545538B51562AD(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0xF17F4B0641AB2DE1(&(uParam1->f_77), 11);
		}
		if (unk_0xE8E046017EE675F2(iParam0, "IgnoredByQuickSave") && unk_0xF47B23D65F733C81(iParam0, "IgnoredByQuickSave"))
		{
			unk_0x26545538B51562AD(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0xF17F4B0641AB2DE1(&(uParam1->f_77), 27);
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
	
	if (!unk_0x0B4DDB992C7BCF57(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x41EEFFCF5FB2A6E4(*iParam0) == 0)
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
			if (unk_0x56F45DEAAF97E44B(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0xC90889BF6C7006D1(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0x0334928DD9F6AEB8(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0x0334928DD9F6AEB8(*iParam0, iVar0);
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
	if ((((((((((!unk_0xD2CFFE76B625AE55(iParam0) || !unk_0x0B4DDB992C7BCF57(iParam0, 0)) || func_208(iParam0, 0, 0)) || func_208(iParam0, 1, 0)) || func_208(iParam0, 2, 0)) || func_207(iParam0) != 145) || func_206(iParam0)) || func_205(iParam0)) || func_204(iParam0)) || func_203(iParam0)) || !func_196(unk_0x946C63BD9EF05437(iParam0)))
	{
		if (func_205(iParam0))
		{
		}
		if (func_205(iParam0))
		{
		}
		if (func_208(iParam0, 0, 0))
		{
		}
		if (func_208(iParam0, 1, 0))
		{
		}
		if (func_208(iParam0, 2, 0))
		{
		}
		if (func_207(iParam0) != 145)
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
	if (((unk_0xD3AE48D8EB7DCBE6(iParam0) || unk_0xEC6E5897335290DD(iParam0)) || unk_0xDBFA5C79D9B3D622(iParam0)) || unk_0x5BFC131B92C92E97(iParam0))
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
	if (!unk_0xCCCEEEDD3FD9AA24(iParam0))
	{
		return 0;
	}
	if ((((((((((((iParam0 == joaat("dodo") || iParam0 == joaat("dukes")) || iParam0 == joaat("dukes2")) || (iParam0 == joaat("dominator2") && !unk_0x0E063DDE8855EC52())) || (iParam0 == joaat("buffalo3") && !unk_0x0E063DDE8855EC52())) || (iParam0 == joaat("gauntlet2") && !unk_0x0E063DDE8855EC52())) || iParam0 == joaat("blimp2")) || iParam0 == joaat("stalion")) || (iParam0 == joaat("stalion2") && !unk_0x0E063DDE8855EC52())) || iParam0 == joaat("submersible2")) || iParam0 == joaat("marshall")) || iParam0 == joaat("blista2")) || iParam0 == joaat("blista3"))
	{
		if (!func_175())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0xF91F65A88EC73320())
		{
			if (unk_0xB1B63407FCB8DC25(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0x80EC20FBCB429863(Var1.f_0))
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
		if ((((!func_202() && !func_201()) && !func_200()) && !func_199()) && !func_175())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0xD0333FE560420AC5() || unk_0xDFCB321F1D24137F()) || unk_0x748A964A12412EBB())
		{
		}
		else if (!func_200())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_198(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

int func_198(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2459480)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = unk_0x9CC4C10F8D665832();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_5004 && !Global_262145.f_10847) && iVar1 < Global_262145.f_10848)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_11652 && iVar1 < Global_262145.f_11664)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_11648 && iVar1 < Global_262145.f_11660)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_11649 && iVar1 < Global_262145.f_11661)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_11650 && iVar1 < Global_262145.f_11662)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_11651 && iVar1 < Global_262145.f_11663)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_11653 && iVar1 < Global_262145.f_11665)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_11654 && iVar1 < Global_262145.f_11657)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_11655 && iVar1 < Global_262145.f_11658)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_11656 && iVar1 < Global_262145.f_11659)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_199()
{
	return 0;
}

int func_200()
{
	return 1;
}

int func_201()
{
	return 1;
}

int func_202()
{
	if (unk_0xA29E536967D6DF2E(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_203(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = unk_0x946C63BD9EF05437(iParam0);
	uVar1 = unk_0x9111F14F8ABAE773(iParam0);
	if (iVar0 == joaat("speedo") && unk_0xC1C5B83BB6719C6C(uVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_197(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_204(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xD2CFFE76B625AE55(Global_88972[iVar0]))
		{
			if (Global_88972[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_205(int iParam0)
{
	int iVar0;
	
	if (unk_0xD2CFFE76B625AE55(iParam0) && unk_0x0B4DDB992C7BCF57(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0xD2CFFE76B625AE55(Global_88942[iVar0]) && unk_0x0B4DDB992C7BCF57(Global_88942[iVar0], 0))
			{
				if (Global_88942[iVar0] == iParam0 && unk_0x946C63BD9EF05437(Global_88942[iVar0]) == unk_0x946C63BD9EF05437(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_206(int iParam0)
{
	int iVar0;
	
	if (unk_0xD2CFFE76B625AE55(Global_68319.f_484[24]))
	{
		if (iParam0 == Global_68319.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0xD2CFFE76B625AE55(Global_68319.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_68319.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_207(int iParam0)
{
	int iVar0;
	
	if (!unk_0xD2CFFE76B625AE55(iParam0))
	{
		return 145;
	}
	if (!unk_0x0B4DDB992C7BCF57(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xD2CFFE76B625AE55(Global_88942[iVar0]))
		{
			if (Global_88942[iVar0] == iParam0)
			{
				return Global_88952[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_208(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!unk_0xD2CFFE76B625AE55(iParam0) || !unk_0x0B4DDB992C7BCF57(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_209(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || unk_0xF426A5DE932B3BEE(Global_101154.f_5919[iVar9], 0))
		{
			if (unk_0x005659B4CDF2566C(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_209(int iParam0, int iParam1, char* sParam2, var uParam3)
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

void func_210(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 45)
	{
		func_122(iVar0, bParam0);
		iVar0++;
	}
}

