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
	int iLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
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
	struct<3> Local_43 = { 0, 0, 0 } ;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	bool bLocal_49 = 0;
	bool bLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	var uLocal_54 = 16;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
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
	struct<3> Local_219 = { 0, 0, 0 } ;
	int iLocal_222 = 0;
	int iLocal_223 = 0;
	int iLocal_224 = 0;
	int iLocal_225 = 0;
	int iLocal_226[3] = { 0, 0, 0 };
	int iLocal_230 = 0;
	int iLocal_231 = 0;
	int iLocal_232[3] = { 0, 0, 0 };
	int iLocal_236 = 0;
	int iLocal_237 = 0;
	int iLocal_238 = 0;
	int iLocal_239 = 0;
	int iLocal_240 = 0;
	int iLocal_241 = 0;
	int iLocal_242 = 0;
	var uLocal_243[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_260 = 0;
	bool bLocal_261 = 0;
	int iLocal_262 = 0;
	int iLocal_263 = 0;
	int iLocal_264 = 0;
	int iLocal_265 = 0;
	int iLocal_266 = 0;
	int iLocal_267 = 0;
	int iLocal_268 = 0;
	var uLocal_269 = 0;
	int iLocal_270 = 0;
	struct<3> Local_271 = { 0, 0, 0 } ;
	int iLocal_274 = 0;
	int iLocal_275 = 0;
	int iLocal_276 = 0;
	int iLocal_277 = 0;
	int iLocal_278 = 0;
	int iLocal_279 = 0;
	int iLocal_280 = 0;
	int iLocal_281 = 0;
	int iLocal_282 = 0;
	int iLocal_283 = 0;
	bool bLocal_284 = 0;
	int iLocal_285 = 0;
	bool bLocal_286 = 0;
	bool bLocal_287 = 0;
	int iLocal_288 = 0;
	int iLocal_289 = 0;
	int iLocal_290 = 0;
	int iLocal_291 = 0;
	var uLocal_292[2] = { 0, 0 };
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297[3] = { 0, 0, 0 };
	var uLocal_301[2] = { 0, 0 };
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
	iLocal_18 = 3;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	Local_219 = { ScriptParam_0.f_1[0 /*3*/] };
	if (unk_0x7D9C4B359376D38A(11))
	{
		func_142();
	}
	if (func_89(Local_219, -1, 0, 0, 0))
	{
		func_86(-1);
	}
	else
	{
		unk_0x96A3D9A8A4C7AFD4();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (unk_0x42F1FE4C7EC5F51E() || iLocal_274)
		{
			unk_0x48D75120C879E65E("RE_CR", 0);
			switch (iLocal_46)
			{
				case 0:
					if (unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), Local_219, 100f, 100f, 100f, 0, 1, 0))
					{
						func_142();
					}
					if (iLocal_47)
					{
						iLocal_46 = 1;
					}
					else
					{
						func_85();
						iLocal_48 = 1;
					}
					break;
				
				case 1:
					unk_0x7D1BE399F484E23E(unk_0x9EB17624F44A8DA4());
					func_84();
					func_82();
					if (!func_81())
					{
						func_78();
					}
					if (!bLocal_49)
					{
						func_67();
					}
					if (!bLocal_50 && !bLocal_284)
					{
						func_63();
					}
					if (iLocal_266 && !bLocal_49)
					{
						func_62(iLocal_226[0]);
						func_62(iLocal_226[1]);
						func_62(iLocal_226[2]);
					}
					if ((!iLocal_266 && !bLocal_284) && func_81())
					{
						func_61(iLocal_232[0], &(uLocal_243[0]), 1, 0.7f);
						func_61(iLocal_232[0], &(uLocal_243[1]), 5, 0.7f);
						func_61(iLocal_232[0], &(uLocal_243[2]), 0, 0.7f);
						func_61(iLocal_232[0], &(uLocal_243[3]), 4, 0.7f);
						func_61(iLocal_232[1], &(uLocal_243[4]), 1, 0.7f);
						func_61(iLocal_232[1], &(uLocal_243[5]), 5, 0.7f);
						func_61(iLocal_232[1], &(uLocal_243[6]), 0, 0.7f);
						func_61(iLocal_232[1], &(uLocal_243[7]), 4, 0.7f);
						func_61(iLocal_232[2], &(uLocal_243[8]), 1, 0.7f);
						func_61(iLocal_232[2], &(uLocal_243[9]), 5, 0.7f);
						func_61(iLocal_232[2], &(uLocal_243[10]), 0, 0.7f);
						func_61(iLocal_232[2], &(uLocal_243[11]), 4, 0.7f);
						func_61(iLocal_236, &(uLocal_243[12]), 1, 0.7f);
						func_61(iLocal_236, &(uLocal_243[13]), 5, 0.7f);
						func_61(iLocal_236, &(uLocal_243[14]), 0, 0.7f);
						func_61(iLocal_236, &(uLocal_243[15]), 4, 0.7f);
					}
					if (!iLocal_264)
					{
						func_59();
					}
					else
					{
						if (!bLocal_284)
						{
							func_58();
						}
						else if (!iLocal_281 && bLocal_49)
						{
							func_56();
						}
						if (!iLocal_285)
						{
							func_55();
						}
						func_54();
					}
					func_2();
					func_1();
					break;
			}
		}
		else
		{
			func_142();
		}
	}
}

void func_1()
{
}

void func_2()
{
	int iVar0;
	
	if (!iLocal_279)
	{
		if (unk_0x191BE1BC8F26F3C1(iLocal_226[0], 0) || unk_0x3AB6A1A9084FB0A4(iLocal_226[0]))
		{
			func_53(&uLocal_54, 4);
			iLocal_279 = 1;
		}
	}
	if (!bLocal_260)
	{
		if ((unk_0x191BE1BC8F26F3C1(iLocal_222, 0) || unk_0x3AB6A1A9084FB0A4(iLocal_222)) || unk_0xB81987085B8F391E(iLocal_222))
		{
			unk_0x6FF834D85E2DD4C6(joaat("prop_security_case_01"));
			if (unk_0x9A0B2ED5055D3F0B(joaat("prop_security_case_01")))
			{
				Local_271 = { unk_0x1478170665DA3CEC(iLocal_222, 1067030938, 1069547520) };
				Local_271.f_2 = (Local_271.f_2 + 0.3f);
				uLocal_292[0] = unk_0x85CE54AA667066FE(joaat("pickup_money_case"), Local_271 + Vector(-0.49f, 0f, 0f), -90f, 0f, 0f, 0, 5000, 2, 1, joaat("prop_security_case_01"));
				if (!unk_0xA6DECE14FC9A8C51(uLocal_301[0]))
				{
					uLocal_301[0] = func_51(uLocal_292[0]);
				}
				bLocal_260 = true;
				func_53(&uLocal_54, 5);
			}
		}
	}
	if (!bLocal_261)
	{
		if ((unk_0x191BE1BC8F26F3C1(iLocal_223, 0) || unk_0x3AB6A1A9084FB0A4(iLocal_223)) || unk_0xB81987085B8F391E(iLocal_223))
		{
			unk_0x6FF834D85E2DD4C6(joaat("prop_security_case_01"));
			if (unk_0x9A0B2ED5055D3F0B(joaat("prop_security_case_01")))
			{
				Local_271 = { unk_0x1478170665DA3CEC(iLocal_223, 1067030938, 1069547520) };
				Local_271.f_2 = (Local_271.f_2 + 0.3f);
				uLocal_292[1] = unk_0x85CE54AA667066FE(joaat("pickup_money_case"), Local_271 + Vector(-0.49f, 0f, 0f), -90f, 0f, 0f, 0, 5000, 2, 1, joaat("prop_security_case_01"));
				if (!unk_0xA6DECE14FC9A8C51(uLocal_301[1]))
				{
					uLocal_301[1] = func_51(uLocal_292[1]);
				}
				bLocal_261 = true;
				func_53(&uLocal_54, 6);
			}
		}
	}
	if (!bLocal_284)
	{
		if (!iLocal_276)
		{
			if (unk_0x6ADD12BF4D6D2587(iLocal_222))
			{
				if (unk_0x191BE1BC8F26F3C1(iLocal_222, 0) || unk_0x3AB6A1A9084FB0A4(iLocal_222))
				{
					if (unk_0xEBE499597C718EB8(iLocal_222, unk_0xFC1458A37D98B502(), 1))
					{
						unk_0xE30CF11C0EE14316(&uLocal_295);
						iLocal_276 = 1;
						bLocal_50 = true;
						unk_0xF96119FCCD4D1889(5, iLocal_267, joaat("player"));
						if (!unk_0x3AB6A1A9084FB0A4(iLocal_223))
						{
							unk_0xD7F5B2902EBBD04E(iLocal_223, unk_0xFC1458A37D98B502(), 0, 16);
							unk_0xE9B3D12A64CC7C1A(iLocal_223, 1);
							unk_0x1EAF03DA3947BBC2(iLocal_223, unk_0xFC1458A37D98B502());
							unk_0x2A2AEB84A449E99E(iLocal_223, 1);
							func_53(&uLocal_54, 5);
							func_50(&uLocal_54, 5, iLocal_223, "RECSBRobber1", 0, 1);
							func_38(&uLocal_54, "recsbau", "recsb_deadcr", 3, 0, 0, 0);
						}
					}
				}
			}
		}
		if (!iLocal_275)
		{
			if (unk_0x6ADD12BF4D6D2587(iLocal_223))
			{
				if (unk_0x191BE1BC8F26F3C1(iLocal_223, 0) || unk_0x3AB6A1A9084FB0A4(iLocal_223))
				{
					if (unk_0xEBE499597C718EB8(iLocal_223, unk_0xFC1458A37D98B502(), 1))
					{
						unk_0xE30CF11C0EE14316(&uLocal_296);
						iLocal_275 = 1;
						bLocal_50 = true;
						unk_0xF96119FCCD4D1889(5, iLocal_267, joaat("player"));
						if (!unk_0x3AB6A1A9084FB0A4(iLocal_222))
						{
							unk_0xD7F5B2902EBBD04E(iLocal_222, unk_0xFC1458A37D98B502(), 0, 16);
							unk_0xE9B3D12A64CC7C1A(iLocal_222, 1);
							unk_0x1EAF03DA3947BBC2(iLocal_222, unk_0xFC1458A37D98B502());
							unk_0x2A2AEB84A449E99E(iLocal_222, 1);
							func_38(&uLocal_54, "recsbau", "recsb_deadcr", 3, 0, 0, 0);
						}
					}
				}
			}
		}
		if (func_37() || !unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), 310.6203f, 2642.854f, 43.5173f, 150f, 150f, 180f, 0, 1, 0))
		{
			if (unk_0x3AB6A1A9084FB0A4(iLocal_222) && unk_0x3AB6A1A9084FB0A4(iLocal_223))
			{
				if (func_37() && !unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), Local_219, 50f, 50f, 50f, 0, 1, 0))
				{
					func_7();
				}
				if (bLocal_50 && !bLocal_49)
				{
					if (!unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), 310.6203f, 2642.854f, 43.5173f, 150f, 150f, 180f, 0, 1, 0))
					{
						func_6(5);
						func_7();
					}
				}
			}
			else if (!unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), 310.6203f, 2642.854f, 43.5173f, 200f, 200f, 180f, 0, 1, 0))
			{
				func_5();
			}
		}
	}
	if (bLocal_284)
	{
		if (func_37())
		{
			if (unk_0x191BE1BC8F26F3C1(iLocal_222, 0) && unk_0x191BE1BC8F26F3C1(iLocal_223, 0))
			{
				func_7();
			}
			if (bLocal_284)
			{
				if (unk_0x6ADD12BF4D6D2587(iLocal_222))
				{
					if (!unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_222, 150f, 150f, 150f, 0, 0, 0))
					{
						if (!bLocal_50)
						{
							func_6(6);
						}
						func_7();
					}
				}
				if (!unk_0x6ADD12BF4D6D2587(iLocal_223))
				{
					if (!unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_223, 150f, 150f, 150f, 0, 0, 0))
					{
						if (!bLocal_50)
						{
							func_6(6);
						}
						func_7();
					}
				}
			}
		}
	}
	else if (!iLocal_266 && !bLocal_49)
	{
		unk_0x8A4311269B560FDF(418.2996f, 2650.597f, 42.84723f, 297.8981f, 2617.968f, 53.6412f, 49.6875f, 1);
		unk_0x6FF834D85E2DD4C6(joaat("ambulance"));
		unk_0x6450931B826B49D9("random@countrysiderobbery");
		if (((unk_0x191BE1BC8F26F3C1(iLocal_222, 0) && unk_0x191BE1BC8F26F3C1(iLocal_223, 0)) && unk_0x9A0B2ED5055D3F0B(joaat("ambulance"))) && unk_0x3A801AA34DD821BE("random@countrysiderobbery"))
		{
			unk_0xE30CF11C0EE14316(&uLocal_295);
			unk_0xE30CF11C0EE14316(&uLocal_296);
			func_53(&uLocal_54, 5);
			func_53(&uLocal_54, 6);
			iVar0 = 0;
			while (iVar0 < iLocal_226)
			{
				if (unk_0xA6DECE14FC9A8C51(uLocal_297[iVar0]))
				{
					unk_0xE30CF11C0EE14316(&(uLocal_297[iVar0]));
				}
				iVar0++;
			}
			unk_0xF96119FCCD4D1889(1, iLocal_268, joaat("player"));
			unk_0x1D29C781A978C4FB(5, 1);
			unk_0x1D29C781A978C4FB(3, 1);
			if (unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), 267.94f, 2700.48f, 43.6f, 15f, 15f, 15f, 0, 1, 0))
			{
				uLocal_237 = unk_0xEA60F3B426BB095B(joaat("ambulance"), 267.94f, 2700.48f, 43.1f, 180f, 1, 1, 0);
			}
			else
			{
				uLocal_237 = unk_0xEA60F3B426BB095B(joaat("ambulance"), 185.94f, 2603.48f, 46.9f, 0f, 1, 1, 0);
			}
			unk_0xBB4910CCAB2BEDFA(uLocal_237, 1);
			iLocal_224 = unk_0x00D1A9572426E8DD(uLocal_237, 20, joaat("s_m_m_paramedic_01"), -1, 1, 1);
			iLocal_225 = unk_0x00D1A9572426E8DD(uLocal_237, 20, joaat("s_m_m_paramedic_01"), 0, 1, 1);
			unk_0xAE6EBBBBD8B9FB30(iLocal_224, 17, 1);
			unk_0xAE6EBBBBD8B9FB30(iLocal_225, 17, 1);
			unk_0xAE01EF4BC84AFE7C(iLocal_224, 185, 1);
			unk_0xAE01EF4BC84AFE7C(iLocal_225, 185, 1);
			if (unk_0x6ADD12BF4D6D2587(iLocal_222))
			{
				unk_0x6931076730A4AC5D(&uLocal_269);
				unk_0x87A3E70B0AB01608(0, uLocal_237, 307.1379f, 2640.042f, 43.4639f, 18f, 0, joaat("ambulance"), 786475, 5f, 5f);
				unk_0x4C7AF3B2BE8C3193(0, iLocal_222, -1, 2f, 1f, 10f, 0);
				unk_0x60C06BFD037BB7CF(0, iLocal_222, -1, 2052, 2);
				unk_0xAC838A977FB6E6BC(0, iLocal_222, 0);
				unk_0x12C9D41D52A560D6(0, "random@countrysiderobbery", "enter", 2f, -2f, -1, 0, 0, 0, 0, 0);
				unk_0x12C9D41D52A560D6(0, "random@countrysiderobbery", "base", 2f, -2f, -1, 1, 0, 0, 0, 0);
				unk_0x1B16DD5C115FE009(uLocal_269);
				unk_0xAB30B1CF01A198C1(iLocal_224, uLocal_269);
				unk_0xFAA3EF7FF92E1F9E(&uLocal_269);
				unk_0xE9B3D12A64CC7C1A(iLocal_224, 1);
			}
			if (unk_0x6ADD12BF4D6D2587(iLocal_223))
			{
				unk_0x6931076730A4AC5D(&uLocal_269);
				unk_0xB6A7F1EF9625AE96(0, 15000);
				unk_0x4C7AF3B2BE8C3193(0, iLocal_223, -1, 2f, 1f, 10f, 0);
				unk_0x60C06BFD037BB7CF(0, iLocal_223, -1, 2052, 2);
				unk_0xAC838A977FB6E6BC(0, iLocal_223, 0);
				unk_0x12C9D41D52A560D6(0, "random@countrysiderobbery", "enter", 2f, -2f, -1, 0, 0, 0, 0, 0);
				unk_0x12C9D41D52A560D6(0, "random@countrysiderobbery", "base", 2f, -2f, -1, 1, 0, 0, 0, 0);
				unk_0x1B16DD5C115FE009(uLocal_269);
				unk_0xAB30B1CF01A198C1(iLocal_225, uLocal_269);
				unk_0xFAA3EF7FF92E1F9E(&uLocal_269);
				unk_0xE9B3D12A64CC7C1A(iLocal_225, 1);
			}
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_226[0]) && unk_0x6ADD12BF4D6D2587(iLocal_236))
			{
				unk_0xAE01EF4BC84AFE7C(iLocal_226[0], 185, 1);
				unk_0x6931076730A4AC5D(&uLocal_269);
				unk_0x380C1E7B7740D618(0, unk_0xB3328BA8976B416C(iLocal_236, 0) + Vector(0f, 5f, 0f), 1f, -1, 1048576000, 0, 1193033728);
				unk_0xF1794430C256DBC0(0, 0);
				unk_0x12C9D41D52A560D6(0, "random@countrysiderobbery", "idle_a", 2f, -2f, -1, 0, 0, 0, 0, 0);
				unk_0x12C9D41D52A560D6(0, "random@countrysiderobbery", "idle_d", 2f, -2f, -1, 1, 0, 0, 0, 0);
				unk_0x1B16DD5C115FE009(uLocal_269);
				unk_0xAB30B1CF01A198C1(iLocal_226[0], uLocal_269);
				unk_0xFAA3EF7FF92E1F9E(&uLocal_269);
				unk_0xE9B3D12A64CC7C1A(iLocal_226[0], 1);
			}
			if (!unk_0x191BE1BC8F26F3C1(iLocal_226[1], 0) && unk_0x6ADD12BF4D6D2587(iLocal_230))
			{
				unk_0xAE01EF4BC84AFE7C(iLocal_226[1], 185, 1);
				unk_0x385A213BEB355C2B(iLocal_226[1], joaat("weapon_unarmed"), 1);
				unk_0x6931076730A4AC5D(&uLocal_269);
				unk_0x380C1E7B7740D618(0, unk_0xB3328BA8976B416C(iLocal_230, 0) + Vector(0f, 1f, 0f), 2f, -1, 1048576000, 0, 1193033728);
				unk_0xBA54D3D84EF38E3D(0, unk_0xB3328BA8976B416C(iLocal_230, 0), -1, 2052, 2);
				unk_0x7FC89099E65488E2(0, unk_0xB3328BA8976B416C(iLocal_230, 0), 0);
				unk_0x12C9D41D52A560D6(0, "random@countrysiderobbery", "enter", 2f, -2f, -1, 0, 0, 0, 0, 0);
				unk_0x12C9D41D52A560D6(0, "random@countrysiderobbery", "base", 2f, -2f, -1, 1, 0, 0, 0, 0);
				unk_0x1B16DD5C115FE009(uLocal_269);
				unk_0xAB30B1CF01A198C1(iLocal_226[1], uLocal_269);
				unk_0xFAA3EF7FF92E1F9E(&uLocal_269);
				unk_0xE9B3D12A64CC7C1A(iLocal_226[1], 1);
			}
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_226[2]) && unk_0x6ADD12BF4D6D2587(iLocal_223))
			{
				unk_0xAE01EF4BC84AFE7C(iLocal_226[2], 185, 1);
				if (unk_0x6ADD12BF4D6D2587(iLocal_223))
				{
					unk_0x6931076730A4AC5D(&uLocal_269);
					unk_0x380C1E7B7740D618(0, unk_0xB3328BA8976B416C(iLocal_223, 0) + Vector(0f, 1f, 0f), 1f, -1, 1048576000, 0, 1193033728);
					unk_0xF1794430C256DBC0(0, 0);
					unk_0x12C9D41D52A560D6(0, "random@countrysiderobbery", "idle_d", 2f, -2f, -1, 0, 0, 0, 0, 0);
					unk_0x12C9D41D52A560D6(0, "random@countrysiderobbery", "idle_a", 2f, -2f, -1, 1, 0, 0, 0, 0);
					unk_0x1B16DD5C115FE009(uLocal_269);
					unk_0xAB30B1CF01A198C1(iLocal_226[2], uLocal_269);
					unk_0xFAA3EF7FF92E1F9E(&uLocal_269);
				}
				unk_0xE9B3D12A64CC7C1A(iLocal_226[2], 1);
			}
			func_3();
			unk_0x4EDE34FBADD967A6(0);
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_226[0]))
			{
				func_50(&uLocal_54, 4, iLocal_226[0], "RECSBCop1", 0, 1);
				func_38(&uLocal_54, "recsbau", "recsb_ntouch", 4, 0, 0, 0);
			}
			else if (!unk_0x3AB6A1A9084FB0A4(iLocal_226[1]))
			{
				unk_0x350CEE66BDF90273(iLocal_226[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
				func_53(&uLocal_54, 4);
				func_50(&uLocal_54, 4, iLocal_226[1], "RECSBCop1", 0, 1);
				func_38(&uLocal_54, "recsbau", "recsb_ntouch", 4, 0, 0, 0);
			}
			else if (!unk_0x3AB6A1A9084FB0A4(iLocal_226[2]))
			{
				unk_0x350CEE66BDF90273(iLocal_226[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
				func_53(&uLocal_54, 4);
				func_50(&uLocal_54, 4, iLocal_226[2], "RECSBCop1", 0, 1);
				func_38(&uLocal_54, "recsbau", "recsb_ntouch", 4, 0, 0, 0);
			}
			func_3();
			unk_0x4EDE34FBADD967A6(0);
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_226[0]))
			{
				func_50(&uLocal_54, 4, iLocal_226[0], "RECSBCop1", 0, 1);
				func_38(&uLocal_54, "recsbau", "recsb_ntouch", 4, 0, 0, 0);
			}
			else if (!unk_0x3AB6A1A9084FB0A4(iLocal_226[1]))
			{
				unk_0x350CEE66BDF90273(iLocal_226[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
				func_53(&uLocal_54, 4);
				func_50(&uLocal_54, 4, iLocal_226[1], "RECSBCop1", 0, 1);
				func_38(&uLocal_54, "recsbau", "recsb_ntouch", 4, 0, 0, 0);
			}
			else if (!unk_0x3AB6A1A9084FB0A4(iLocal_226[2]))
			{
				unk_0x350CEE66BDF90273(iLocal_226[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
				func_53(&uLocal_54, 4);
				func_50(&uLocal_54, 4, iLocal_226[2], "RECSBCop1", 0, 1);
				func_38(&uLocal_54, "recsbau", "recsb_ntouch", 4, 0, 0, 0);
			}
			unk_0x5AE11BC36633DE4E(0);
			iLocal_266 = 1;
		}
	}
	if (iLocal_264 && !func_81())
	{
		func_5();
	}
	if (((((unk_0x191BE1BC8F26F3C1(iLocal_222, 0) && unk_0x191BE1BC8F26F3C1(iLocal_223, 0)) && unk_0x191BE1BC8F26F3C1(iLocal_226[0], 0)) && unk_0x191BE1BC8F26F3C1(iLocal_226[1], 0)) && unk_0x191BE1BC8F26F3C1(iLocal_226[2], 0)) && (func_37() || !unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), 310.6203f, 2642.854f, 43.5173f, 200f, 200f, 180f, 0, 1, 0)))
	{
		unk_0x1563F8C21480594F(unk_0x9EB17624F44A8DA4(), 2, 0);
		unk_0xFB19003EF06A954B(unk_0x9EB17624F44A8DA4(), 0f);
		func_7();
	}
}

void func_3()
{
	Global_14622 = 0;
	func_4();
}

void func_4()
{
	unk_0x495EB1DD7306493A();
	Global_16767 = 0;
	if (unk_0x42111BD51D233AAB())
	{
		unk_0xB31CEFB00C146C91(0);
		Global_15756 = 6;
	}
}

void func_5()
{
	func_142();
}

void func_6(int iParam0)
{
	Global_104541 = iParam0;
}

void func_7()
{
	if (!bLocal_49)
	{
	}
	while (func_36())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (!func_35())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	func_11(-1, 0);
	func_8();
	func_142();
}

void func_8()
{
	func_9();
}

int func_9()
{
	if (func_10(0))
	{
		return 0;
	}
	if (Global_92872.f_8)
	{
		if (Global_92872.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_92872.f_10 > 1)
	{
		return 0;
	}
	Global_92872.f_10++;
	return 1;
}

bool func_10(bool bParam0)
{
	if (!bParam0 && unk_0x8F38E94BBF3404CD(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xC80D31E4B587871C(Global_71104, 0);
}

void func_11(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_33();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_32(iParam0))
	{
		func_31(iParam0, iParam1);
		if (!func_30(51))
		{
			func_21("RE_REWARD", 1, 0, 4000, 10000, func_24(), 0, 138, 0);
			func_20(51);
		}
		if (func_19(iParam0))
		{
			Global_104555.f_24965.f_2 = 3;
		}
		if (func_18(iParam0, iParam1) != 322)
		{
			func_12(func_18(iParam0, iParam1), Local_43.f_0, Local_43.f_1);
		}
		Global_104543 = iParam1;
		if (Global_104541 == 0)
		{
			if (((Global_104544 == 1 || Global_104544 == 5) || Global_104544 == 11) || Global_104544 == 25)
			{
				func_6(2);
			}
			else if ((Global_104544 == 26 || Global_104544 == 8) || Global_104544 == 17)
			{
				func_6(7);
			}
			else
			{
				func_6(1);
			}
		}
	}
}

void func_12(int iParam0, var uParam1, var uParam2)
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
		func_16((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_104555.f_10164[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_104555.f_10164[iParam0 /*12*/].f_6 == 11 || Global_104555.f_10164[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_104555.f_10164[iParam0 /*12*/].f_5 = 1;
		Global_104555.f_10164[iParam0 /*12*/].f_10 = uParam1;
		Global_104555.f_10164[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			unk_0x02D73F783D6C1AFA(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x02D73F783D6C1AFA(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x02D73F783D6C1AFA(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_13();
	}
}

void func_13()
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
	Global_104291 = 0;
	Global_104292 = 0;
	Global_104293 = 0;
	Global_104294 = 0;
	Global_104295 = 0;
	Global_104296 = 0;
	Global_104297 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_104555.f_10164.f_3853;
	Global_104555.f_10164.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_104555.f_10164[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_104555.f_10164[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_104291++;
					fVar1 = (fVar1 + Global_104555.f_10164[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_104292++;
					fVar2 = (fVar2 + Global_104555.f_10164[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_104293++;
					fVar3 = (fVar3 + Global_104555.f_10164[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_104294++;
					fVar4 = (fVar4 + Global_104555.f_10164[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_104295++;
					fVar5 = (fVar5 + (Global_104555.f_10164[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_104296++;
					fVar6 = (fVar6 + Global_104555.f_10164[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_104297++;
					fVar7 = (fVar7 + Global_104555.f_10164[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_104274 > 0)
	{
		if (Global_104291 == Global_104274)
		{
			fVar1 = 55f;
		}
	}
	if (Global_104275 > 0)
	{
		if (Global_104292 == Global_104275)
		{
			fVar2 = 10f;
		}
	}
	if (Global_104276 > 0)
	{
		if (Global_104293 == Global_104276)
		{
			fVar3 = 0f;
		}
	}
	if (Global_104277 > 0)
	{
		if (Global_104294 == Global_104277)
		{
			fVar4 = 10f;
		}
	}
	if (Global_104278 > 0)
	{
		if (((Global_104295 == Global_104278 || (Global_104278 * 10 / Global_104295) < 41) || Global_104295 > Global_104281) || Global_104295 == Global_104281)
		{
			if (!unk_0xC80D31E4B587871C(Global_104555.f_10164.f_3856, 14))
			{
				if (Global_104295 == Global_104278)
				{
					unk_0x02D73F783D6C1AFA(joaat("num_rndevents_completed"), Global_104278, 0);
					unk_0x872F1C1F8587CCC7(&(Global_104555.f_10164.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_104279 > 0)
	{
		if (Global_104296 == Global_104279)
		{
			fVar6 = 15f;
		}
	}
	if (Global_104280 > 0)
	{
		if (Global_104297 == Global_104280)
		{
			fVar7 = 5f;
		}
	}
	Global_104555.f_10164.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_104295 > Global_104281 || Global_104295 == Global_104281)
	{
		iVar9 = Global_104281;
	}
	else
	{
		iVar9 = Global_104295;
	}
	unk_0xBFFF62F75445099D(joaat("num_missions_completed"), Global_104291, 1);
	unk_0xBFFF62F75445099D(joaat("num_missions_available"), Global_104274, 1);
	unk_0xBFFF62F75445099D(joaat("num_minigames_completed"), Global_104292, 1);
	unk_0xBFFF62F75445099D(joaat("num_minigames_available"), Global_104275, 1);
	unk_0xBFFF62F75445099D(joaat("num_oddjobs_completed"), Global_104293, 1);
	unk_0xBFFF62F75445099D(joaat("num_oddjobs_available"), Global_104276, 1);
	unk_0xBFFF62F75445099D(joaat("num_rndpeople_completed"), Global_104294, 1);
	unk_0xBFFF62F75445099D(joaat("num_rndpeople_available"), Global_104277, 1);
	unk_0xBFFF62F75445099D(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0xBFFF62F75445099D(joaat("num_rndevents_available"), Global_104281, 1);
	unk_0xBFFF62F75445099D(joaat("num_misc_completed"), (Global_104297 + Global_104296), 1);
	unk_0xBFFF62F75445099D(joaat("num_misc_available"), (Global_104280 + Global_104279), 1);
	Global_104298 = (Global_104291 * 100 / Global_104274);
	Global_104300 = ((Global_104293 + Global_104292) * 100 / (Global_104276 + Global_104275));
	Global_104299 = ((Global_104294 + iVar9) * 100 / (Global_104277 + Global_104281));
	Global_104301 = ((Global_104296 + Global_104297) * 100 / (Global_104279 + Global_104280));
	unk_0x00E69ADBDAF11A90(joaat("total_progress_made"), Global_104555.f_10164.f_3853, 1);
	unk_0xBFFF62F75445099D(joaat("percent_story_missions"), Global_104298, 1);
	unk_0xBFFF62F75445099D(joaat("percent_ambient_missions"), Global_104299, 1);
	unk_0xBFFF62F75445099D(joaat("percent_oddjobs"), Global_104300, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_104555.f_10164.f_3853))
	{
		func_15(13, unk_0xF34EE736CF047844(Global_104555.f_10164.f_3853));
	}
	if (!unk_0x787C61F862D3EF09())
	{
		if (!Global_70856)
		{
			if (func_14() == 2 == 0 && !unk_0x3A711520F83BAE98())
			{
				if (unk_0x73EC29164C21897D())
				{
					Global_104289 = 0;
				}
				if (!Global_55903)
				{
					func_9();
				}
			}
		}
	}
}

int func_14()
{
	return Global_25233;
}

int func_15(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0xDE008D1391A23FFE(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x2FD2B2D208844275(iParam0, iParam1);
	}
	return 0;
}

int func_16(int iParam0, int iParam1, int iParam2, int iParam3)
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
	var uVar14;
	var uVar15;
	var uVar16;
	var uVar17;
	
	if (iParam2 == -1)
	{
		iParam2 = func_17();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0xA7C33AF584635A56((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xDBE4A47179904C7B((iParam0 - 0)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0xA7C33AF584635A56((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xDBE4A47179904C7B((iParam0 - 192)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0xA7C33AF584635A56((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xDBE4A47179904C7B((iParam0 - 513)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0xA7C33AF584635A56((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xDBE4A47179904C7B((iParam0 - 705)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x88B5FB6273C3123E((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xDBE4A47179904C7B((iParam0 - 3111)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x88B5FB6273C3123E((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xDBE4A47179904C7B((iParam0 - 2919)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x7CD64EB2C84F32FF((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xDBE4A47179904C7B((iParam0 - 4207)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x7CD64EB2C84F32FF((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xDBE4A47179904C7B((iParam0 - 4335)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0x7CD64EB2C84F32FF((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0xDBE4A47179904C7B((iParam0 - 6029)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = unk_0x7CD64EB2C84F32FF((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0xDBE4A47179904C7B((iParam0 - 7385)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = unk_0x7CD64EB2C84F32FF((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0xDBE4A47179904C7B((iParam0 - 7321)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(uVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		uVar13 = unk_0x7CD64EB2C84F32FF((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0xDBE4A47179904C7B((iParam0 - 9361)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(uVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		uVar14 = unk_0x7CD64EB2C84F32FF((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0xDBE4A47179904C7B((iParam0 - 15369)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(uVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		uVar15 = unk_0x7CD64EB2C84F32FF((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0xDBE4A47179904C7B((iParam0 - 15562)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(uVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		uVar16 = unk_0x7CD64EB2C84F32FF((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0xDBE4A47179904C7B((iParam0 - 15946)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(uVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		uVar17 = unk_0x7CD64EB2C84F32FF((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0xDBE4A47179904C7B((iParam0 - 18098)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(uVar17, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_17()
{
	return Global_1312736;
}

int func_18(int iParam0, int iParam1)
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

int func_19(int iParam0)
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

void func_20(int iParam0)
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
		unk_0x872F1C1F8587CCC7(&(Global_104555.f_20380.f_150[iVar1]), iVar0);
	}
}

void func_21(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_22(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_22(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x74C475EB8E73D398(sParam0, ""))
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
	while (iVar0 < Global_104555.f_20380.f_145)
	{
		if (unk_0x74C475EB8E73D398(&(Global_104555.f_20380[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_104555.f_20380.f_145 < 9)
	{
		StringCopy(&(Global_104555.f_20380[Global_104555.f_20380.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_104555.f_20380[Global_104555.f_20380.f_145 /*16*/].f_4), sParam1, 16);
		Global_104555.f_20380[Global_104555.f_20380.f_145 /*16*/].f_8 = (unk_0x53C562FD2B9E3AB0() + iParam3);
		Global_104555.f_20380[Global_104555.f_20380.f_145 /*16*/].f_9 = iParam5;
		Global_104555.f_20380[Global_104555.f_20380.f_145 /*16*/].f_11 = iParam6;
		Global_104555.f_20380[Global_104555.f_20380.f_145 /*16*/].f_12 = uParam2;
		Global_104555.f_20380[Global_104555.f_20380.f_145 /*16*/].f_13 = iParam7;
		Global_104555.f_20380[Global_104555.f_20380.f_145 /*16*/].f_14 = iParam8;
		Global_104555.f_20380[Global_104555.f_20380.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_104555.f_20380[Global_104555.f_20380.f_145 /*16*/].f_10 = ((unk_0x53C562FD2B9E3AB0() + iParam3) + iParam4);
		}
		else
		{
			Global_104555.f_20380[Global_104555.f_20380.f_145 /*16*/].f_10 = -1;
		}
		Global_104555.f_20380.f_145++;
		func_23();
	}
}

void func_23()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_104555.f_20380.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_104555.f_20380.f_145)
	{
		if (unk_0xC80D31E4B587871C(Global_104555.f_20380[iVar0 /*16*/].f_11, 0))
		{
			if (Global_104555.f_20380[iVar0 /*16*/].f_12 > Global_104555.f_20380.f_146[0])
			{
				Global_104555.f_20380.f_146[0] = Global_104555.f_20380[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xC80D31E4B587871C(Global_104555.f_20380[iVar0 /*16*/].f_11, 1))
		{
			if (Global_104555.f_20380[iVar0 /*16*/].f_12 > Global_104555.f_20380.f_146[1])
			{
				Global_104555.f_20380.f_146[1] = Global_104555.f_20380[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xC80D31E4B587871C(Global_104555.f_20380[iVar0 /*16*/].f_11, 2))
		{
			if (Global_104555.f_20380[iVar0 /*16*/].f_12 > Global_104555.f_20380.f_146[2])
			{
				Global_104555.f_20380.f_146[2] = Global_104555.f_20380[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_24()
{
	func_25();
	switch (Global_104555.f_2353.f_539.f_4301)
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

void func_25()
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
	{
		if (func_29(Global_104555.f_2353.f_539.f_4301) != unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()))
		{
			iVar0 = func_28(unk_0xFC1458A37D98B502());
			if (func_27(iVar0) && (!func_26(14) || Global_103506))
			{
				if (Global_104555.f_2353.f_539.f_4301 != iVar0 && func_27(Global_104555.f_2353.f_539.f_4301))
				{
					Global_104555.f_2353.f_539.f_4302 = Global_104555.f_2353.f_539.f_4301;
				}
				Global_104555.f_2353.f_539.f_4303 = iVar0;
				Global_104555.f_2353.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_104555.f_2353.f_539.f_4301 != 145)
			{
				Global_104555.f_2353.f_539.f_4303 = Global_104555.f_2353.f_539.f_4301;
			}
			return;
		}
	}
	Global_104555.f_2353.f_539.f_4301 = 145;
}

bool func_26(int iParam0)
{
	return Global_35861 == iParam0;
}

bool func_27(int iParam0)
{
	return iParam0 < 3;
}

int func_28(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x6ADD12BF4D6D2587(uParam0))
	{
		iVar1 = unk_0x82FF3DFBC3965CC0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_29(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_29(int iParam0)
{
	if (func_27(iParam0))
	{
		return Global_104555.f_28020[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_30(int iParam0)
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
		return unk_0xC80D31E4B587871C(Global_104555.f_20380.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_31(int iParam0, int iParam1)
{
	unk_0x872F1C1F8587CCC7(&(Global_104555.f_24965.f_8[iParam0]), iParam1);
}

int func_32(int iParam0)
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

int func_33()
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, unk_0x436287B7DB306165(), 64);
	uVar16 = func_34(Var0);
	return uVar16;
}

int func_34(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0x8B948C59217A295D(&cParam0))
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

int func_35()
{
	return 1;
}

int func_36()
{
	if (Global_15756 != 0 || unk_0x42111BD51D233AAB())
	{
		return 1;
	}
	return 0;
}

int func_37()
{
	if (bLocal_260 || bLocal_261)
	{
		if (bLocal_260 && bLocal_261)
		{
			if (!unk_0xA6DECE14FC9A8C51(uLocal_301[0]) && !unk_0xA6DECE14FC9A8C51(uLocal_301[1]))
			{
				return 1;
			}
		}
		if (bLocal_260 && !bLocal_261)
		{
			if (!unk_0xA6DECE14FC9A8C51(uLocal_301[0]))
			{
				return 1;
			}
		}
		if (bLocal_261 && !bLocal_260)
		{
			if (!unk_0xA6DECE14FC9A8C51(uLocal_301[1]))
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_38(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_49(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15763 = 0;
	Global_15765 = 0;
	Global_15770 = 0;
	Global_16747 = 0;
	Global_16749 = 0;
	Global_16753 = 0;
	Global_2621441 = 0;
	return func_39(sParam2, iParam3, 0);
}

int func_39(char* sParam0, int iParam1, bool bParam2)
{
	Global_15757 = 0;
	if (Global_15756 == 0 || Global_15758 == 2)
	{
		if (Global_15756 != 0)
		{
			if (iParam1 > Global_15758)
			{
				if (Global_15763 == 0)
				{
					unk_0xB31CEFB00C146C91(0);
					Global_14453.f_1 = 3;
					Global_15756 = 0;
					Global_15757 = 1;
					Global_15809 = 0;
					Global_15752 = 0;
					Global_15753 = 0;
					Global_15767 = 0;
					Global_15766 = 0;
					Global_14452 = 0;
				}
				else
				{
					func_48();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x42111BD51D233AAB())
		{
			return 0;
		}
		if (func_47(8, -1))
		{
			return 0;
		}
		Global_15832 = { Global_15826 };
		func_46();
		Global_15045 = { Global_15210 };
		Global_15762 = Global_15763;
		Global_15769 = Global_15770;
		Global_2621442 = Global_2621441;
		Global_15771 = { Global_15787 };
		Global_15764 = Global_15765;
		Global_16746 = Global_16747;
		Global_16754 = { Global_16760 };
		Global_16748 = Global_16749;
		Global_16750 = Global_16751;
		Global_16752 = Global_16753;
		Global_15375.f_370 = Global_16745;
		Global_15375.f_368 = Global_16743;
		Global_15375.f_369 = Global_16744;
		Global_15752 = Global_15753;
		if (Global_15762)
		{
			unk_0x0EE72DB1CD8A3B86(&Global_2323, 20);
			unk_0x0EE72DB1CD8A3B86(&Global_2324, 17);
			unk_0x0EE72DB1CD8A3B86(&Global_2325, 0);
			if (bParam2)
			{
				func_44();
				if (Global_3128[Global_14453 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14453.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14419 == 1)
			{
				return 0;
			}
			if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
			{
				if (unk_0x596A22C5FEBABAC1(unk_0xFC1458A37D98B502()))
				{
					return 0;
				}
				if (func_43())
				{
					return 0;
				}
				if (unk_0xCA87B182A4F3C252(unk_0xFC1458A37D98B502()))
				{
					return 0;
				}
				if (unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502()))
				{
					return 0;
				}
				if (unk_0xA9287933382DAD33(unk_0xFC1458A37D98B502()))
				{
					return 0;
				}
				if (unk_0x63D4520BD966ECD5(unk_0xFC1458A37D98B502(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_70856)
				{
					if (unk_0x0BA31FF7931F3DD3(unk_0xFC1458A37D98B502()))
					{
						return 0;
					}
					if (unk_0x5EDC8E26D8E9BD2A(unk_0x9EB17624F44A8DA4()))
					{
						return 0;
					}
					if (unk_0x0A1D4A2F0A088C25(unk_0xFC1458A37D98B502()))
					{
						return 0;
					}
					if (unk_0x8E1DC2E7000CD6A1(unk_0x9EB17624F44A8DA4()))
					{
						return 0;
					}
				}
			}
			if (func_42())
			{
				return 0;
			}
			else
			{
				switch (Global_14453.f_1)
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
				if (unk_0xC80D31E4B587871C(Global_2323, 9))
				{
					return 0;
				}
			}
			func_41();
			Global_15766 = bParam2;
		}
		Global_15758 = iParam1;
		StringCopy(&Global_15375, sParam0, 24);
		Global_14622 = 0;
		func_40();
		return 1;
	}
	if (Global_15756 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15758 || iParam1 == Global_15758)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_48();
	}
	return 0;
}

void func_40()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14624[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xB31CEFB00C146C91(0);
	Global_15756 = 1;
}

void func_41()
{
	Global_15809 = Global_15808;
	Global_15803 = Global_15804;
	Global_15850 = { Global_15838 };
	Global_15856 = { Global_15844 };
	Global_15811 = Global_15810;
	Global_15880 = { Global_15862 };
	Global_15886 = { Global_15868 };
	Global_15892 = { Global_15874 };
	Global_15898 = { Global_15904 };
	Global_1638 = Global_1639;
	Global_1640 = Global_1641;
	Global_15767 = Global_15768;
	Global_15769 = Global_15770;
	Global_15771 = { Global_15787 };
	Global_15760 = Global_15761;
	Global_16772 = 0;
	Global_15805 = 0;
	Global_15806 = 0;
	unk_0x0EE72DB1CD8A3B86(&Global_2324, 16);
}

int func_42()
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_43()
{
	int iVar0;
	int iVar1;
	
	if (Global_70856)
	{
		iVar0 = 0;
		unk_0x5AD8564EFD5BEC2E(unk_0xFC1458A37D98B502(), &iVar1, 1);
		if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x689303135DD1F2F5() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		if (unk_0xBAEC0BAAC7E135C7(unk_0xFC1458A37D98B502(), 78, 1))
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

void func_44()
{
	if (func_26(14))
	{
		if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
		{
			if (unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()) == Global_104555.f_28020[0 /*29*/])
			{
				Global_14453 = 0;
			}
			else if (unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()) == Global_104555.f_28020[1 /*29*/])
			{
				Global_14453 = 1;
			}
			else if (unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()) == Global_104555.f_28020[2 /*29*/])
			{
				Global_14453 = 2;
			}
			else
			{
				Global_14453 = 0;
			}
		}
	}
	else
	{
		Global_14453 = func_45();
		if (Global_14453 == 145)
		{
			Global_14453 = 3;
		}
		if (Global_70856)
		{
			Global_14453 = 3;
		}
		if (Global_14453 > 3)
		{
			Global_14453 = 3;
		}
	}
}

int func_45()
{
	func_25();
	return Global_104555.f_2353.f_539.f_4301;
}

void func_46()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15045[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15045[iVar0 /*10*/].f_1), "", 24);
		Global_15045[iVar0 /*10*/].f_7 = 0;
		Global_15045[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15045.f_161 = -99;
	Global_15045.f_162 = { 0f, 0f, 0f };
}

bool func_47(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1357530.f_203[iParam1];
			}
			break;
	}
	return unk_0xC80D31E4B587871C(Global_1357530.f_1048, iParam0);
}

void func_48()
{
	unk_0x495EB1DD7306493A();
	Global_16767 = 0;
	if ((unk_0x0DBDCC9C5537E157() || Global_14453.f_1 == 9) || Global_14452 == 1)
	{
		unk_0xB31CEFB00C146C91(0);
		Global_15756 = 6;
		Global_14453.f_1 = 3;
		return;
	}
	if (unk_0x42111BD51D233AAB())
	{
		unk_0xB31CEFB00C146C91(1);
		Global_15756 = 6;
		return;
	}
}

void func_49(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15210 = { *uParam0 };
	Global_1639 = iParam1;
	StringCopy(&Global_15826, sParam2, 24);
	Global_16745 = iParam5;
	if (iParam3 == 0)
	{
		Global_16743 = 1;
		Global_16741 = 0;
	}
	else
	{
		Global_16743 = 0;
		Global_16741 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16744 = 1;
		Global_16742 = 0;
	}
	else
	{
		Global_16744 = 0;
		Global_16742 = 1;
	}
}

void func_50(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_70856)
	{
		if (!unk_0x3AB6A1A9084FB0A4(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x4ACB9D202CFF8727(iParam2, 0);
			}
			else
			{
				unk_0x4ACB9D202CFF8727(iParam2, 1);
			}
		}
		if (!unk_0x3AB6A1A9084FB0A4(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xC672DBF4ABE19DFB(iParam2, 0);
			}
			else
			{
				unk_0xC672DBF4ABE19DFB(iParam2, 1);
			}
		}
	}
}

int func_51(var uParam0)
{
	var uVar0;
	
	if (!unk_0xB8B3E5529EDB87D4(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0x4DFBD39F0EACA5CC(uParam0);
	unk_0xA5D25D3F884FF516(uVar0, func_52(unk_0x3A711520F83BAE98(), 0.7f, 0.7f));
	return uVar0;
}

float func_52(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_53(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_54()
{
	if (!iLocal_282)
	{
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_222))
		{
			if (unk_0x88DDBE9908752BF0(iLocal_222, 0))
			{
				iLocal_291 = unk_0xDFD115BB10FE46A9(iLocal_222, 0);
				if (((((unk_0xEBE499597C718EB8(iLocal_291, unk_0xFC1458A37D98B502(), 1) && unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0)) && unk_0x21B6FFFD04C9FF3A(iLocal_291, unk_0xFC1458A37D98B502(), 10f, 10f, 10f, 0, 1, 0)) || unk_0x27C8A4034A05DC21(iLocal_222)) || unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_291, 0)) || unk_0x4A54CB0F526FC86F(unk_0xFC1458A37D98B502(), iLocal_291, joaat("weapon_stickybomb"), -1))
				{
					unk_0x771A86309E0CA47B(iLocal_222, 0);
					unk_0xF96119FCCD4D1889(5, iLocal_267, joaat("player"));
					if (unk_0x88DDBE9908752BF0(iLocal_222, 0))
					{
						unk_0x9E058151726E58DE(iLocal_222, joaat("weapon_microsmg"), 200, 1, 1);
						unk_0x385A213BEB355C2B(iLocal_222, joaat("weapon_microsmg"), 1);
						unk_0x3D625AB3CFE71DF3(iLocal_222, unk_0xFC1458A37D98B502(), 0, 0f, 0f, 0f, 200f, 50, 0, -753768974);
					}
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_223))
					{
						if (unk_0x88DDBE9908752BF0(iLocal_223, 0))
						{
							unk_0x771A86309E0CA47B(iLocal_223, 0);
							unk_0x9E058151726E58DE(iLocal_223, joaat("weapon_microsmg"), 200, 1, 1);
							unk_0x385A213BEB355C2B(iLocal_223, joaat("weapon_microsmg"), 1);
							unk_0x3D625AB3CFE71DF3(iLocal_223, unk_0xFC1458A37D98B502(), 0, 0f, 0f, 0f, 200f, 50, 0, -753768974);
						}
					}
					bLocal_50 = true;
					iLocal_282 = 1;
				}
			}
			if (unk_0xEBE499597C718EB8(iLocal_222, unk_0xFC1458A37D98B502(), 1))
			{
				unk_0xF96119FCCD4D1889(5, iLocal_267, joaat("player"));
				if ((unk_0x88DDBE9908752BF0(iLocal_222, 0) && unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0)) && !unk_0x191BE1BC8F26F3C1(iLocal_291, 0))
				{
					if (unk_0x21B6FFFD04C9FF3A(iLocal_291, unk_0xFC1458A37D98B502(), 10f, 10f, 10f, 0, 1, 0))
					{
						unk_0x771A86309E0CA47B(iLocal_222, 0);
						unk_0x9E058151726E58DE(iLocal_222, joaat("weapon_microsmg"), 200, 1, 1);
						unk_0x385A213BEB355C2B(iLocal_222, joaat("weapon_microsmg"), 1);
						unk_0x3D625AB3CFE71DF3(iLocal_222, unk_0xFC1458A37D98B502(), 0, 0f, 0f, 0f, 200f, 50, 0, -753768974);
						bLocal_50 = true;
						iLocal_282 = 1;
					}
				}
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_223))
				{
					if ((unk_0x88DDBE9908752BF0(iLocal_223, 0) && unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0)) && !unk_0x191BE1BC8F26F3C1(iLocal_291, 0))
					{
						if (unk_0x21B6FFFD04C9FF3A(iLocal_291, unk_0xFC1458A37D98B502(), 10f, 10f, 10f, 0, 1, 0))
						{
							unk_0x771A86309E0CA47B(iLocal_223, 0);
							unk_0x9E058151726E58DE(iLocal_223, joaat("weapon_microsmg"), 200, 1, 1);
							unk_0x385A213BEB355C2B(iLocal_223, joaat("weapon_microsmg"), 1);
							unk_0x3D625AB3CFE71DF3(iLocal_223, unk_0xFC1458A37D98B502(), 0, 0f, 0f, 0f, 200f, 50, 0, -753768974);
							bLocal_50 = true;
							iLocal_282 = 1;
						}
					}
				}
			}
		}
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_223))
		{
			if (unk_0x88DDBE9908752BF0(iLocal_223, 0))
			{
				iLocal_291 = unk_0xDFD115BB10FE46A9(iLocal_223, 0);
				if (((unk_0xEBE499597C718EB8(iLocal_291, unk_0xFC1458A37D98B502(), 1) || unk_0x27C8A4034A05DC21(iLocal_223)) || unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_291, 0)) || unk_0x4A54CB0F526FC86F(unk_0xFC1458A37D98B502(), iLocal_291, joaat("weapon_stickybomb"), -1))
				{
					unk_0xF96119FCCD4D1889(5, iLocal_267, joaat("player"));
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_222))
					{
						if ((unk_0x88DDBE9908752BF0(iLocal_222, 0) && unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0)) && !unk_0x191BE1BC8F26F3C1(iLocal_291, 0))
						{
							if (unk_0x21B6FFFD04C9FF3A(iLocal_291, unk_0xFC1458A37D98B502(), 10f, 10f, 10f, 0, 1, 0))
							{
								unk_0x771A86309E0CA47B(iLocal_222, 0);
								unk_0x9E058151726E58DE(iLocal_222, joaat("weapon_microsmg"), 200, 1, 1);
								unk_0x385A213BEB355C2B(iLocal_222, joaat("weapon_microsmg"), 1);
								unk_0x3D625AB3CFE71DF3(iLocal_222, unk_0xFC1458A37D98B502(), 0, 0f, 0f, 0f, 200f, 50, 0, -753768974);
								bLocal_50 = true;
								iLocal_282 = 1;
							}
						}
					}
					if ((unk_0x88DDBE9908752BF0(iLocal_223, 0) && unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0)) && !unk_0x191BE1BC8F26F3C1(iLocal_291, 0))
					{
						if (unk_0x21B6FFFD04C9FF3A(iLocal_291, unk_0xFC1458A37D98B502(), 10f, 10f, 10f, 0, 1, 0))
						{
							unk_0x771A86309E0CA47B(iLocal_223, 0);
							unk_0x9E058151726E58DE(iLocal_223, joaat("weapon_microsmg"), 200, 1, 1);
							unk_0x385A213BEB355C2B(iLocal_223, joaat("weapon_microsmg"), 1);
							unk_0x3D625AB3CFE71DF3(iLocal_223, unk_0xFC1458A37D98B502(), 0, 0f, 0f, 0f, 200f, 50, 0, -753768974);
							bLocal_50 = true;
							iLocal_282 = 1;
						}
					}
				}
			}
			if (unk_0xEBE499597C718EB8(iLocal_223, unk_0xFC1458A37D98B502(), 1))
			{
				unk_0xF96119FCCD4D1889(5, iLocal_267, joaat("player"));
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_222))
				{
					if ((unk_0x88DDBE9908752BF0(iLocal_222, 0) && unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0)) && !unk_0x191BE1BC8F26F3C1(iLocal_291, 0))
					{
						if (unk_0x21B6FFFD04C9FF3A(iLocal_291, unk_0xFC1458A37D98B502(), 10f, 10f, 10f, 0, 1, 0))
						{
							unk_0x9E058151726E58DE(iLocal_222, joaat("weapon_microsmg"), 200, 1, 1);
							unk_0x385A213BEB355C2B(iLocal_222, joaat("weapon_microsmg"), 1);
							unk_0x3D625AB3CFE71DF3(iLocal_222, unk_0xFC1458A37D98B502(), 0, 0f, 0f, 0f, 200f, 50, 0, -753768974);
							bLocal_50 = true;
							iLocal_282 = 1;
						}
					}
				}
				if ((unk_0x88DDBE9908752BF0(iLocal_223, 0) && unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0)) && !unk_0x191BE1BC8F26F3C1(iLocal_291, 0))
				{
					if (unk_0x21B6FFFD04C9FF3A(iLocal_291, unk_0xFC1458A37D98B502(), 10f, 10f, 10f, 0, 1, 0))
					{
						unk_0x9E058151726E58DE(iLocal_223, joaat("weapon_microsmg"), 200, 1, 1);
						unk_0x385A213BEB355C2B(iLocal_223, joaat("weapon_microsmg"), 1);
						unk_0x3D625AB3CFE71DF3(iLocal_223, unk_0xFC1458A37D98B502(), 0, 0f, 0f, 0f, 200f, 50, 0, -753768974);
						bLocal_50 = true;
						iLocal_282 = 1;
					}
				}
			}
		}
	}
}

void func_55()
{
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_222) && !unk_0x191BE1BC8F26F3C1(iLocal_236, 0))
	{
		if (!unk_0x8EA8060A1C856203(iLocal_222, iLocal_236, -1, 0, 0) && !unk_0x8EA8060A1C856203(iLocal_222, iLocal_236, 0, 0, 0))
		{
			unk_0xFC5999E8B820470E(iLocal_222, Local_219, 1000f, -1, 0, 0);
			unk_0xE9B3D12A64CC7C1A(iLocal_222, 1);
			iLocal_285 = 1;
		}
	}
	if (!unk_0x3AB6A1A9084FB0A4(iLocal_223) && !unk_0x191BE1BC8F26F3C1(iLocal_236, 0))
	{
		if (!unk_0x8EA8060A1C856203(iLocal_223, iLocal_236, -1, 0, 0) && !unk_0x8EA8060A1C856203(iLocal_223, iLocal_236, 0, 0, 0))
		{
			unk_0xFC5999E8B820470E(iLocal_223, Local_219, 1000f, -1, 0, 0);
			unk_0xE9B3D12A64CC7C1A(iLocal_223, 1);
			iLocal_285 = 1;
		}
	}
}

void func_56()
{
	if (!unk_0x191BE1BC8F26F3C1(iLocal_222, 0))
	{
		Local_271 = { unk_0xB3328BA8976B416C(iLocal_222, 1) };
	}
	else if (!unk_0x191BE1BC8F26F3C1(iLocal_223, 0))
	{
		Local_271 = { unk_0xB3328BA8976B416C(iLocal_223, 1) };
	}
	Local_271.f_2 = (Local_271.f_2 - 0.11f);
	if (!unk_0x191BE1BC8F26F3C1(iLocal_222, 0))
	{
		unk_0xC1B1E9A034A63A62(0);
		if (!bLocal_50)
		{
			func_3();
			unk_0x4EDE34FBADD967A6(0);
			if (!unk_0x191BE1BC8F26F3C1(iLocal_222, 0))
			{
				func_57(&uLocal_54, "recsbau", "recsb_thanxa", "recsb_thanxa_3", 4, 0, 0);
			}
			else if (!unk_0x191BE1BC8F26F3C1(iLocal_223, 0))
			{
				func_53(&uLocal_54, 5);
				func_50(&uLocal_54, 5, iLocal_223, "RECSBRobber1", 0, 1);
				func_57(&uLocal_54, "recsbau", "recsb_thanxa", "recsb_thanxa_3", 4, 0, 0);
			}
			unk_0xD01469EFD4E826B3(unk_0xCC1609D1BF2658E4(Local_271, 1067030938, 1069547520), 1000, 5, 0);
			iLocal_281 = 1;
		}
	}
	if (!unk_0x191BE1BC8F26F3C1(iLocal_223, 0) && !unk_0x191BE1BC8F26F3C1(iLocal_236, 0))
	{
		if (unk_0xA8D0477084E86A92(iLocal_223, iLocal_236, 0))
		{
			unk_0xC1B1E9A034A63A62(0);
			if (!unk_0x191BE1BC8F26F3C1(iLocal_222, 0))
			{
			}
			else if (!unk_0x191BE1BC8F26F3C1(iLocal_223, 0))
			{
			}
			iLocal_281 = 1;
		}
	}
}

int func_57(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_49(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15763 = 0;
	Global_15770 = 0;
	Global_15765 = 0;
	Global_16747 = 0;
	Global_16749 = 0;
	Global_16753 = 1;
	StringCopy(&Global_16760, sParam3, 24);
	Global_2621441 = 0;
	return func_39(sParam2, iParam4, 0);
}

void func_58()
{
	if (!bLocal_284)
	{
		unk_0x8A4311269B560FDF(418.2996f, 2650.597f, 42.84723f, 297.8981f, 2617.968f, 53.6412f, 49.6875f, 1);
		if (iLocal_288)
		{
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_222))
			{
				if (unk_0x66488CC6E6AE7348(iLocal_222))
				{
					func_3();
					unk_0x4EDE34FBADD967A6(0);
					func_38(&uLocal_54, "recsbau", "recsb_jack", 3, 0, 0, 0);
					iLocal_288 = 1;
				}
			}
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_223))
			{
				if (unk_0x66488CC6E6AE7348(iLocal_223))
				{
					func_3();
					unk_0x4EDE34FBADD967A6(0);
					func_53(&uLocal_54, 5);
					func_50(&uLocal_54, 5, iLocal_223, "RECSBRobber1", 0, 1);
					func_38(&uLocal_54, "recsbau", "recsb_jack", 3, 0, 0, 0);
					iLocal_288 = 1;
				}
			}
		}
		if (iLocal_265 == 1)
		{
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_222) && !unk_0x191BE1BC8F26F3C1(iLocal_236, 0))
			{
				if (unk_0xA8D0477084E86A92(iLocal_222, iLocal_236, 0))
				{
					unk_0xE17958D3FD0F9EE9(iLocal_222, 2, 1);
					unk_0x6931076730A4AC5D(&uLocal_269);
					unk_0xD2C269DBF147B406(0, iLocal_236, unk_0xFC1458A37D98B502(), 8, 100f, 786469, 1000f, 10f, 1);
					unk_0x1B16DD5C115FE009(uLocal_269);
					unk_0xAB30B1CF01A198C1(iLocal_222, uLocal_269);
					unk_0xFAA3EF7FF92E1F9E(&uLocal_269);
					unk_0xE9B3D12A64CC7C1A(iLocal_222, 1);
					bLocal_284 = true;
				}
			}
		}
		if (iLocal_265 == 2)
		{
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_223) && !unk_0x191BE1BC8F26F3C1(iLocal_236, 0))
			{
				if (unk_0xA8D0477084E86A92(iLocal_223, iLocal_236, 0))
				{
					unk_0xE17958D3FD0F9EE9(iLocal_223, 2, 1);
					unk_0x6931076730A4AC5D(&uLocal_269);
					unk_0xD2C269DBF147B406(0, iLocal_236, unk_0xFC1458A37D98B502(), 8, 100f, 786469, 1000f, 10f, 1);
					unk_0x1B16DD5C115FE009(uLocal_269);
					unk_0xAB30B1CF01A198C1(iLocal_223, uLocal_269);
					unk_0xFAA3EF7FF92E1F9E(&uLocal_269);
					unk_0xE9B3D12A64CC7C1A(iLocal_223, 1);
					bLocal_284 = true;
				}
			}
		}
		if (iLocal_265 == 3)
		{
			if ((!unk_0x3AB6A1A9084FB0A4(iLocal_223) && !unk_0x3AB6A1A9084FB0A4(iLocal_222)) && !unk_0x191BE1BC8F26F3C1(iLocal_236, 0))
			{
				if (unk_0xA8D0477084E86A92(iLocal_222, iLocal_236, 0) && unk_0xA8D0477084E86A92(iLocal_223, iLocal_236, 0))
				{
					unk_0xE17958D3FD0F9EE9(iLocal_222, 2, 1);
					unk_0xE17958D3FD0F9EE9(iLocal_223, 2, 1);
					unk_0x6931076730A4AC5D(&uLocal_269);
					unk_0xD2C269DBF147B406(0, iLocal_236, unk_0xFC1458A37D98B502(), 8, 100f, 786469, 1000f, 10f, 1);
					unk_0x1B16DD5C115FE009(uLocal_269);
					unk_0xAB30B1CF01A198C1(iLocal_222, uLocal_269);
					unk_0xFAA3EF7FF92E1F9E(&uLocal_269);
					unk_0x771A86309E0CA47B(iLocal_223, 0);
					unk_0xE9B3D12A64CC7C1A(iLocal_222, 1);
					bLocal_284 = true;
				}
			}
			if (unk_0x3AB6A1A9084FB0A4(iLocal_222) && !unk_0x3AB6A1A9084FB0A4(iLocal_223))
			{
				func_53(&uLocal_54, 5);
				unk_0x6F8C8278B7C06889(iLocal_223, iLocal_236, -1, -1, 2f, 8, 0);
				iLocal_265 = 2;
			}
			if (unk_0x3AB6A1A9084FB0A4(iLocal_223) && !unk_0x3AB6A1A9084FB0A4(iLocal_222))
			{
				func_53(&uLocal_54, 6);
				unk_0x6F8C8278B7C06889(iLocal_222, iLocal_236, -1, -1, 2f, 8, 0);
				iLocal_265 = 1;
			}
		}
		if (iLocal_265 == 4)
		{
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_222))
			{
				unk_0xB8E08BD5B184DF4E(iLocal_222);
				unk_0xFC5999E8B820470E(iLocal_222, Local_219, 1000f, -1, 0, 0);
				unk_0xE9B3D12A64CC7C1A(iLocal_222, 1);
			}
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_223))
			{
				unk_0xB8E08BD5B184DF4E(iLocal_223);
				unk_0xFC5999E8B820470E(iLocal_223, Local_219, 1000f, -1, 0, 0);
				unk_0xE9B3D12A64CC7C1A(iLocal_223, 1);
			}
			bLocal_284 = true;
		}
	}
}

void func_59()
{
	if ((unk_0x191BE1BC8F26F3C1(iLocal_226[0], 0) && unk_0x191BE1BC8F26F3C1(iLocal_226[1], 0)) && unk_0x191BE1BC8F26F3C1(iLocal_226[2], 0))
	{
		func_53(&uLocal_54, 4);
		iLocal_274 = 1;
		iLocal_264 = 1;
		unk_0xF96119FCCD4D1889(1, iLocal_267, joaat("player"));
		if (!bLocal_50 && bLocal_49)
		{
			unk_0xE30CF11C0EE14316(&uLocal_295);
			unk_0xE30CF11C0EE14316(&uLocal_296);
		}
		if (!bLocal_50)
		{
			if (!unk_0x191BE1BC8F26F3C1(iLocal_222, 0))
			{
				func_60(&uLocal_54, "recsbau", "recsb_thanxa", "recsb_thanxa_1", 4, 0, 0);
			}
			else if (!unk_0x191BE1BC8F26F3C1(iLocal_223, 0))
			{
				func_53(&uLocal_54, 5);
				func_50(&uLocal_54, 5, iLocal_223, "RECSBRobber1", 0, 1);
				func_60(&uLocal_54, "recsbau", "recsb_thanxa", "recsb_thanxa_1", 4, 0, 0);
			}
		}
		if (unk_0xB8DE76287EDC4957(iLocal_236, 0))
		{
			unk_0x2B0DDE3D071497AD(iLocal_236);
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_222) && !unk_0xB81987085B8F391E(iLocal_222))
			{
				unk_0x730F5A4EC599BB13(iLocal_222, 1, 1, 1, 0);
				iLocal_265 = 1;
				unk_0xB8E08BD5B184DF4E(iLocal_222);
				unk_0xD40A6DFCC31D221A(iLocal_222, 1);
				unk_0x771A86309E0CA47B(iLocal_222, 1);
				unk_0x2B0DDE3D071497AD(iLocal_222);
				unk_0x2B0DDE3D071497AD(iLocal_236);
				unk_0x6931076730A4AC5D(&uLocal_269);
				unk_0x6F8C8278B7C06889(0, iLocal_236, -1, -1, 2f, 9, 0);
				unk_0x1B16DD5C115FE009(uLocal_269);
				unk_0xAB30B1CF01A198C1(iLocal_222, uLocal_269);
				unk_0xFAA3EF7FF92E1F9E(&uLocal_269);
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_223) && !unk_0xB81987085B8F391E(iLocal_223))
				{
					unk_0xB8E08BD5B184DF4E(iLocal_223);
					unk_0x771A86309E0CA47B(iLocal_223, 1);
					unk_0x2B0DDE3D071497AD(iLocal_223);
					unk_0x2B0DDE3D071497AD(iLocal_236);
					unk_0xD40A6DFCC31D221A(iLocal_223, 1);
					unk_0x6F8C8278B7C06889(iLocal_223, iLocal_236, -1, 0, 2f, 1, 0);
					iLocal_265 = 3;
				}
			}
			else if (!unk_0x3AB6A1A9084FB0A4(iLocal_223))
			{
				unk_0xD40A6DFCC31D221A(iLocal_223, 1);
				unk_0x730F5A4EC599BB13(iLocal_223, 1, 1, 1, 0);
				unk_0xB8E08BD5B184DF4E(iLocal_223);
				unk_0x771A86309E0CA47B(iLocal_223, 1);
				unk_0x2B0DDE3D071497AD(iLocal_223);
				unk_0x2B0DDE3D071497AD(iLocal_236);
				unk_0x6931076730A4AC5D(&uLocal_269);
				unk_0x6F8C8278B7C06889(0, iLocal_236, -1, -1, 2f, 1, 0);
				unk_0x1B16DD5C115FE009(uLocal_269);
				unk_0xAB30B1CF01A198C1(iLocal_223, uLocal_269);
				unk_0xFAA3EF7FF92E1F9E(&uLocal_269);
				iLocal_265 = 2;
			}
		}
		else
		{
			iLocal_265 = 4;
		}
	}
}

int func_60(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_49(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15763 = 0;
	Global_15770 = 0;
	Global_15765 = 0;
	Global_16747 = 1;
	Global_16749 = 0;
	Global_16753 = 0;
	StringCopy(&Global_16760, sParam3, 24);
	Global_2621441 = 0;
	return func_39(sParam2, iParam4, 0);
}

void func_61(int iParam0, var uParam1, int iParam2, float fParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	int iVar6;
	
	if (!unk_0x191BE1BC8F26F3C1(iParam0, 0))
	{
		if (*uParam1 < 5)
		{
			switch (iParam2)
			{
				case 0:
					Var0 = { -1f, 1f, 0.5f };
					Var3 = { -0.5f, 0.75f, 0.05f };
					iVar6 = 0;
					break;
				
				case 1:
					Var0 = { 1f, 1f, 0.5f };
					Var3 = { 0.5f, 0.75f, 0.05f };
					iVar6 = 1;
					break;
				
				case 4:
					Var0 = { -1f, -1f, 0.5f };
					Var3 = { -0.5f, -0.75f, 0.05f };
					iVar6 = 2;
					break;
				
				case 5:
					Var0 = { 1f, -1f, 0.5f };
					Var3 = { 0.5f, -0.75f, 0.05f };
					iVar6 = 3;
					break;
			}
			if (unk_0x4FB2BF5239979F9A(unk_0x3F90543934DCD7E6(iParam0, Var0), fParam3, 1, 1) || unk_0x4FB2BF5239979F9A(unk_0x3F90543934DCD7E6(iParam0, Var0), fParam3, 0, 1))
			{
				switch (*uParam1)
				{
					case 0:
						unk_0x09762DAA0F9D9309(iParam0, iParam2, 0, 1148846080);
						*uParam1++;
						break;
					
					case 1:
						unk_0xCEA670B96BB30D75(iParam0, iVar6);
						*uParam1++;
						break;
					
					case 2:
						*uParam1++;
						break;
					
					case 3:
						*uParam1++;
						break;
					
					case 4:
						unk_0x3399302C36042548(iParam0, Var3, 150f, 50f, 1);
						*uParam1++;
						break;
					}
				}
			}
	}
}

void func_62(int iParam0)
{
	if ((!unk_0x3AB6A1A9084FB0A4(iParam0) && !func_36()) && unk_0x83666F9FB8FEBD4B() > 12000)
	{
		func_50(&uLocal_54, 4, iParam0, "RECSBCop1", 0, 1);
		if (unk_0x21B6FFFD04C9FF3A(iParam0, unk_0xFC1458A37D98B502(), 20f, 20f, 20f, 0, 1, 0))
		{
			func_38(&uLocal_54, "recsbau", "recsb_sscene", 4, 0, 0, 0);
			unk_0xC1B1E9A034A63A62(0);
		}
	}
}

void func_63()
{
	if (!unk_0x191BE1BC8F26F3C1(iLocal_222, 0))
	{
		if (unk_0xEBE499597C718EB8(iLocal_222, unk_0xFC1458A37D98B502(), 1))
		{
			bLocal_50 = true;
			unk_0xC1B1E9A034A63A62(0);
			unk_0xF96119FCCD4D1889(5, iLocal_267, joaat("player"));
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_222))
			{
				unk_0xD7F5B2902EBBD04E(iLocal_222, unk_0xFC1458A37D98B502(), 0, 16);
				unk_0xE9B3D12A64CC7C1A(iLocal_222, 1);
				unk_0x1EAF03DA3947BBC2(iLocal_222, unk_0xFC1458A37D98B502());
				unk_0x2A2AEB84A449E99E(iLocal_222, 1);
			}
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_223))
			{
				unk_0xD7F5B2902EBBD04E(iLocal_223, unk_0xFC1458A37D98B502(), 0, 16);
				unk_0xE9B3D12A64CC7C1A(iLocal_223, 1);
				unk_0x1EAF03DA3947BBC2(iLocal_223, unk_0xFC1458A37D98B502());
				unk_0x2A2AEB84A449E99E(iLocal_223, 1);
			}
			if (!bLocal_49)
			{
				func_3();
				unk_0x4EDE34FBADD967A6(0);
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_226[0]))
				{
					func_50(&uLocal_54, 4, iLocal_226[0], "RECSBCop1", 0, 1);
					func_38(&uLocal_54, "recsbau", "recsb_copsth", 4, 0, 0, 0);
				}
				else if (!unk_0x3AB6A1A9084FB0A4(iLocal_226[1]))
				{
					unk_0x350CEE66BDF90273(iLocal_226[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
					func_53(&uLocal_54, 4);
					func_50(&uLocal_54, 4, iLocal_226[1], "RECSBCop1", 0, 1);
					func_38(&uLocal_54, "recsbau", "recsb_copsth", 4, 0, 0, 0);
				}
				else if (!unk_0x3AB6A1A9084FB0A4(iLocal_226[2]))
				{
					unk_0x350CEE66BDF90273(iLocal_226[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
					func_53(&uLocal_54, 4);
					func_50(&uLocal_54, 4, iLocal_226[2], "RECSBCop1", 0, 1);
					func_38(&uLocal_54, "recsbau", "recsb_copsth", 4, 0, 0, 0);
				}
			}
		}
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_222))
		{
			if (!func_66() && unk_0xC931425E2B416A2F(unk_0xFC1458A37D98B502(), 4))
			{
				if (unk_0x7B46BDDD99441E94(unk_0x9EB17624F44A8DA4(), iLocal_222) || unk_0x50D92141AE141E39(unk_0x9EB17624F44A8DA4(), iLocal_222))
				{
					if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_222, 20f, 20f, 20f, 0, 1, 0) && unk_0xE56ACE711345F330(iLocal_222, unk_0xFC1458A37D98B502()))
					{
						iLocal_240++;
						if (!iLocal_241 && !func_64("recsb_theaim"))
						{
							func_3();
							unk_0x4EDE34FBADD967A6(0);
							if (!unk_0x3AB6A1A9084FB0A4(iLocal_222))
							{
								func_38(&uLocal_54, "recsbau", "recsb_theaim", 4, 0, 0, 0);
							}
							else if (!unk_0x3AB6A1A9084FB0A4(iLocal_223))
							{
								func_53(&uLocal_54, 5);
								func_50(&uLocal_54, 5, iLocal_223, "RECSBRobber1", 0, 1);
								func_38(&uLocal_54, "recsbau", "recsb_theaim", 4, 0, 0, 0);
							}
							iLocal_241 = 1;
						}
						if (iLocal_240 > 45)
						{
							bLocal_50 = true;
							unk_0xC1B1E9A034A63A62(0);
							if (!bLocal_49)
							{
								func_3();
								unk_0x4EDE34FBADD967A6(0);
								if (!unk_0x3AB6A1A9084FB0A4(iLocal_226[0]))
								{
									func_50(&uLocal_54, 4, iLocal_226[0], "RECSBCop1", 0, 1);
									func_38(&uLocal_54, "recsbau", "recsb_copsth", 4, 0, 0, 0);
								}
								else if (!unk_0x3AB6A1A9084FB0A4(iLocal_226[1]))
								{
									unk_0x350CEE66BDF90273(iLocal_226[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
									func_53(&uLocal_54, 4);
									func_50(&uLocal_54, 4, iLocal_226[1], "RECSBCop1", 0, 1);
									func_38(&uLocal_54, "recsbau", "recsb_copsth", 4, 0, 0, 0);
								}
								else if (!unk_0x3AB6A1A9084FB0A4(iLocal_226[2]))
								{
									unk_0x350CEE66BDF90273(iLocal_226[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
									func_53(&uLocal_54, 4);
									func_50(&uLocal_54, 4, iLocal_226[2], "RECSBCop1", 0, 1);
									func_38(&uLocal_54, "recsbau", "recsb_copsth", 4, 0, 0, 0);
								}
							}
						}
					}
				}
				else if (iLocal_241 || iLocal_242)
				{
					iLocal_240 = 45;
				}
				else
				{
					iLocal_240 = 0;
				}
			}
		}
	}
	if (!unk_0x191BE1BC8F26F3C1(iLocal_223, 0))
	{
		if (unk_0xEBE499597C718EB8(iLocal_223, unk_0xFC1458A37D98B502(), 1))
		{
			bLocal_50 = true;
			unk_0xC1B1E9A034A63A62(0);
			unk_0xF96119FCCD4D1889(5, iLocal_267, joaat("player"));
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_223))
			{
				unk_0xD7F5B2902EBBD04E(iLocal_223, unk_0xFC1458A37D98B502(), 0, 16);
				unk_0xE9B3D12A64CC7C1A(iLocal_223, 1);
				unk_0x1EAF03DA3947BBC2(iLocal_223, unk_0xFC1458A37D98B502());
				unk_0x2A2AEB84A449E99E(iLocal_223, 1);
			}
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_222))
			{
				unk_0xD7F5B2902EBBD04E(iLocal_222, unk_0xFC1458A37D98B502(), 0, 16);
				unk_0xE9B3D12A64CC7C1A(iLocal_222, 1);
				unk_0x1EAF03DA3947BBC2(iLocal_222, unk_0xFC1458A37D98B502());
				unk_0x2A2AEB84A449E99E(iLocal_222, 1);
			}
			if (!bLocal_49)
			{
				func_3();
				unk_0x4EDE34FBADD967A6(0);
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_226[0]))
				{
					func_50(&uLocal_54, 4, iLocal_226[0], "RECSBCop1", 0, 1);
					func_38(&uLocal_54, "recsbau", "recsb_copsth", 4, 0, 0, 0);
				}
				else if (!unk_0x3AB6A1A9084FB0A4(iLocal_226[1]))
				{
					unk_0x350CEE66BDF90273(iLocal_226[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
					func_53(&uLocal_54, 4);
					func_50(&uLocal_54, 4, iLocal_226[1], "RECSBCop1", 0, 1);
					func_38(&uLocal_54, "recsbau", "recsb_copsth", 4, 0, 0, 0);
				}
				else if (!unk_0x3AB6A1A9084FB0A4(iLocal_226[2]))
				{
					unk_0x350CEE66BDF90273(iLocal_226[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
					func_53(&uLocal_54, 4);
					func_50(&uLocal_54, 4, iLocal_226[2], "RECSBCop1", 0, 1);
					func_38(&uLocal_54, "recsbau", "recsb_copsth", 4, 0, 0, 0);
				}
			}
		}
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_223))
		{
			if (!func_66() && unk_0xC931425E2B416A2F(unk_0xFC1458A37D98B502(), 4))
			{
				if (unk_0x7B46BDDD99441E94(unk_0x9EB17624F44A8DA4(), iLocal_223) || unk_0x50D92141AE141E39(unk_0x9EB17624F44A8DA4(), iLocal_223))
				{
					if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_223, 20f, 20f, 20f, 0, 1, 0) && unk_0xE56ACE711345F330(iLocal_223, unk_0xFC1458A37D98B502()))
					{
						if ((!iLocal_242 && !unk_0x3AB6A1A9084FB0A4(iLocal_222)) && !func_64("recsb_theaim"))
						{
							func_3();
							unk_0x4EDE34FBADD967A6(0);
							if (!unk_0x3AB6A1A9084FB0A4(iLocal_222))
							{
								func_38(&uLocal_54, "recsbau", "recsb_theaim", 4, 0, 0, 0);
							}
							else if (!unk_0x3AB6A1A9084FB0A4(iLocal_223))
							{
								func_53(&uLocal_54, 5);
								func_50(&uLocal_54, 5, iLocal_223, "RECSBRobber1", 0, 1);
								func_38(&uLocal_54, "recsbau", "recsb_theaim", 4, 0, 0, 0);
							}
							iLocal_242 = 1;
						}
						iLocal_239++;
						if (iLocal_239 > 45)
						{
							bLocal_50 = true;
							unk_0xC1B1E9A034A63A62(0);
							if (!bLocal_49)
							{
								func_3();
								unk_0x4EDE34FBADD967A6(0);
								if (!unk_0x3AB6A1A9084FB0A4(iLocal_226[0]))
								{
									func_50(&uLocal_54, 4, iLocal_226[0], "RECSBCop1", 0, 1);
									func_38(&uLocal_54, "recsbau", "recsb_copsth", 4, 0, 0, 0);
								}
								else if (!unk_0x3AB6A1A9084FB0A4(iLocal_226[1]))
								{
									unk_0x350CEE66BDF90273(iLocal_226[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
									func_53(&uLocal_54, 4);
									func_50(&uLocal_54, 4, iLocal_226[1], "RECSBCop1", 0, 1);
									func_38(&uLocal_54, "recsbau", "recsb_copsth", 4, 0, 0, 0);
								}
								else if (!unk_0x3AB6A1A9084FB0A4(iLocal_226[2]))
								{
									unk_0x350CEE66BDF90273(iLocal_226[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
									func_53(&uLocal_54, 4);
									func_50(&uLocal_54, 4, iLocal_226[2], "RECSBCop1", 0, 1);
									func_38(&uLocal_54, "recsbau", "recsb_copsth", 4, 0, 0, 0);
								}
							}
						}
					}
				}
				else if (iLocal_241 || iLocal_242)
				{
					iLocal_240 = 45;
				}
				else
				{
					iLocal_240 = 0;
				}
			}
		}
	}
	if (!iLocal_289 && bLocal_260)
	{
		if (unk_0x58786AA7A9E510C0(uLocal_292[0]))
		{
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_222))
			{
				if (unk_0xE56ACE711345F330(iLocal_222, unk_0xFC1458A37D98B502()) && unk_0x21B6FFFD04C9FF3A(iLocal_222, unk_0xFC1458A37D98B502(), 20f, 20f, 20f, 0, 1, 0))
				{
					bLocal_50 = true;
					func_3();
					unk_0x4EDE34FBADD967A6(0);
					func_38(&uLocal_54, "recsbau", "recsb_jack", 3, 0, 0, 0);
					iLocal_289 = 1;
				}
			}
			else if (!unk_0x3AB6A1A9084FB0A4(iLocal_223))
			{
				if (unk_0xE56ACE711345F330(iLocal_223, unk_0xFC1458A37D98B502()) && unk_0x21B6FFFD04C9FF3A(iLocal_223, unk_0xFC1458A37D98B502(), 20f, 20f, 20f, 0, 1, 0))
				{
					bLocal_50 = true;
					func_53(&uLocal_54, 5);
					func_50(&uLocal_54, 5, iLocal_223, "RECSBRobber1", 0, 1);
					func_3();
					unk_0x4EDE34FBADD967A6(0);
					func_38(&uLocal_54, "recsbau", "recsb_jack", 3, 0, 0, 0);
					iLocal_289 = 1;
				}
			}
		}
	}
	if (!iLocal_290 && bLocal_261)
	{
		if (unk_0x58786AA7A9E510C0(uLocal_292[1]))
		{
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_222))
			{
				if (unk_0xE56ACE711345F330(iLocal_222, unk_0xFC1458A37D98B502()) && unk_0x21B6FFFD04C9FF3A(iLocal_222, unk_0xFC1458A37D98B502(), 20f, 20f, 20f, 0, 1, 0))
				{
					bLocal_50 = true;
					func_3();
					unk_0x4EDE34FBADD967A6(0);
					func_38(&uLocal_54, "recsbau", "recsb_jack", 3, 0, 0, 0);
					iLocal_290 = 1;
				}
			}
			else if (!unk_0x3AB6A1A9084FB0A4(iLocal_223))
			{
				if (unk_0xE56ACE711345F330(iLocal_223, unk_0xFC1458A37D98B502()) && unk_0x21B6FFFD04C9FF3A(iLocal_223, unk_0xFC1458A37D98B502(), 20f, 20f, 20f, 0, 1, 0))
				{
					bLocal_50 = true;
					func_53(&uLocal_54, 5);
					func_50(&uLocal_54, 5, iLocal_223, "RECSBRobber1", 0, 1);
					func_3();
					unk_0x4EDE34FBADD967A6(0);
					func_38(&uLocal_54, "recsbau", "recsb_jack", 3, 0, 0, 0);
					iLocal_290 = 1;
				}
			}
		}
	}
	if (!unk_0x191BE1BC8F26F3C1(iLocal_236, 0))
	{
		if ((unk_0xEBE499597C718EB8(iLocal_236, unk_0xFC1458A37D98B502(), 1) || unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_236, 0)) || unk_0x4A54CB0F526FC86F(unk_0xFC1458A37D98B502(), iLocal_236, joaat("weapon_stickybomb"), -1))
		{
			bLocal_50 = true;
			unk_0xC1B1E9A034A63A62(0);
			unk_0xF96119FCCD4D1889(5, iLocal_267, joaat("player"));
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_222))
			{
				unk_0xD7F5B2902EBBD04E(iLocal_222, unk_0xFC1458A37D98B502(), 0, 16);
				unk_0xE9B3D12A64CC7C1A(iLocal_222, 1);
				unk_0x1EAF03DA3947BBC2(iLocal_222, unk_0xFC1458A37D98B502());
				unk_0x2A2AEB84A449E99E(iLocal_222, 1);
			}
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_223))
			{
				unk_0xD7F5B2902EBBD04E(iLocal_223, unk_0xFC1458A37D98B502(), 0, 16);
				unk_0xE9B3D12A64CC7C1A(iLocal_223, 1);
				unk_0x1EAF03DA3947BBC2(iLocal_223, unk_0xFC1458A37D98B502());
				unk_0x2A2AEB84A449E99E(iLocal_223, 1);
			}
			func_3();
			unk_0x4EDE34FBADD967A6(0);
			if (!unk_0x191BE1BC8F26F3C1(iLocal_236, 0))
			{
				if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_236, 0))
				{
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_222))
					{
						func_60(&uLocal_54, "recsbau", "recsb_deadcr", "recsb_deadcr_1", 4, 0, 0);
						unk_0x6F8C8278B7C06889(iLocal_222, iLocal_236, -1, -1, 2f, 524296, 0);
					}
					else if (!unk_0x3AB6A1A9084FB0A4(iLocal_223))
					{
						func_53(&uLocal_54, 5);
						func_50(&uLocal_54, 5, iLocal_223, "RECSBRobber1", 0, 1);
						func_60(&uLocal_54, "recsbau", "recsb_deadcr", "recsb_deadcr_1", 4, 0, 0);
						unk_0x6F8C8278B7C06889(iLocal_223, iLocal_236, -1, -1, 2f, 524296, 0);
					}
				}
				else if (!bLocal_49)
				{
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_226[0]))
					{
						func_50(&uLocal_54, 4, iLocal_226[0], "RECSBCop1", 0, 1);
						func_38(&uLocal_54, "recsbau", "recsb_copsth", 4, 0, 0, 0);
					}
					else if (!unk_0x3AB6A1A9084FB0A4(iLocal_226[1]))
					{
						unk_0x350CEE66BDF90273(iLocal_226[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
						func_53(&uLocal_54, 4);
						func_50(&uLocal_54, 4, iLocal_226[1], "RECSBCop1", 0, 1);
						func_38(&uLocal_54, "recsbau", "recsb_copsth", 4, 0, 0, 0);
					}
					else if (!unk_0x3AB6A1A9084FB0A4(iLocal_226[2]))
					{
						unk_0x350CEE66BDF90273(iLocal_226[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
						func_53(&uLocal_54, 4);
						func_50(&uLocal_54, 4, iLocal_226[2], "RECSBCop1", 0, 1);
						func_38(&uLocal_54, "recsbau", "recsb_copsth", 4, 0, 0, 0);
					}
				}
			}
		}
	}
}

int func_64(char* sParam0)
{
	var uVar0;
	
	if (func_36())
	{
		MemCopy(&uVar0, {func_65()}, 4);
		if (unk_0x74C475EB8E73D398(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

struct<6> func_65()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15756 == 4)
	{
		return Global_15375;
	}
	return Var0;
}

int func_66()
{
	if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
	{
		if (unk_0xB8DE76287EDC4957(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), 0))
		{
			if (unk_0xC53EE6374D41156D(unk_0xFC1458A37D98B502(), joaat("lazer")) || unk_0xC53EE6374D41156D(unk_0xFC1458A37D98B502(), joaat("buzzard")))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_67()
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!bLocal_286)
	{
		unk_0xF004845B6324D7F1(unk_0x9EB17624F44A8DA4(), &uLocal_270);
		if (unk_0x52C56492660097C7(uLocal_270))
		{
			iLocal_231 = unk_0x07F64790D10D1DB5(uLocal_270);
		}
		if ((iLocal_231 == iLocal_226[0] || iLocal_231 == iLocal_226[1]) || iLocal_231 == iLocal_226[2])
		{
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_231))
			{
				if (!func_66() && unk_0xC931425E2B416A2F(unk_0xFC1458A37D98B502(), 4))
				{
					if (unk_0x7B46BDDD99441E94(unk_0x9EB17624F44A8DA4(), iLocal_231) || unk_0x50D92141AE141E39(unk_0x9EB17624F44A8DA4(), iLocal_231))
					{
						if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_231, 20f, 20f, 20f, 0, 1, 0))
						{
							if (unk_0xE56ACE711345F330(iLocal_231, unk_0xFC1458A37D98B502()) || unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), iLocal_231, 8f, 8f, 8f, 0, 1, 0))
							{
								if (!bLocal_287)
								{
									if (!func_64("recsb_coppon"))
									{
										if (!unk_0x3AB6A1A9084FB0A4(iLocal_226[0]))
										{
											func_50(&uLocal_54, 4, iLocal_226[0], "RECSBCop1", 0, 1);
											func_3();
											unk_0x4EDE34FBADD967A6(0);
											func_38(&uLocal_54, "recsbau", "recsb_coppon", 4, 0, 0, 0);
											bLocal_287 = true;
										}
										else if (!unk_0x3AB6A1A9084FB0A4(iLocal_226[1]))
										{
											unk_0x350CEE66BDF90273(iLocal_226[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
											func_53(&uLocal_54, 4);
											func_50(&uLocal_54, 4, iLocal_226[1], "RECSBCop1", 0, 1);
											func_3();
											unk_0x4EDE34FBADD967A6(0);
											func_38(&uLocal_54, "recsbau", "recsb_coppon", 4, 0, 0, 0);
											bLocal_287 = true;
										}
										else if (!unk_0x3AB6A1A9084FB0A4(iLocal_226[2]))
										{
											unk_0x350CEE66BDF90273(iLocal_226[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
											func_53(&uLocal_54, 4);
											func_50(&uLocal_54, 4, iLocal_226[2], "RECSBCop1", 0, 1);
											func_3();
											unk_0x4EDE34FBADD967A6(0);
											func_38(&uLocal_54, "recsbau", "recsb_coppon", 4, 0, 0, 0);
											bLocal_287 = true;
										}
									}
								}
								iLocal_238++;
								if (iLocal_238 > 40)
								{
									bLocal_286 = true;
									bLocal_49 = true;
									if (!unk_0x191BE1BC8F26F3C1(uLocal_270, 0))
									{
										unk_0xF96119FCCD4D1889(5, iLocal_268, joaat("player"));
										iVar0 = 0;
										while (iVar0 < iLocal_226)
										{
											if (!unk_0x3AB6A1A9084FB0A4(iLocal_226[iVar0]))
											{
												unk_0xD7F5B2902EBBD04E(iLocal_226[iVar0], unk_0xFC1458A37D98B502(), 0, 16);
												unk_0xE9B3D12A64CC7C1A(iLocal_226[iVar0], 1);
												unk_0x1EAF03DA3947BBC2(iLocal_226[iVar0], unk_0xFC1458A37D98B502());
												unk_0x2A2AEB84A449E99E(iLocal_226[iVar0], 1);
											}
											iVar0++;
										}
									}
								}
							}
						}
					}
					else if (bLocal_287)
					{
						iLocal_238 = 40;
					}
					else
					{
						iLocal_238 = 0;
					}
				}
			}
		}
	}
	iVar1 = 0;
	while (iVar1 < iLocal_226)
	{
		if (unk_0x6ADD12BF4D6D2587(iLocal_226[iVar1]))
		{
			if (unk_0xEBE499597C718EB8(iLocal_226[iVar1], unk_0xFC1458A37D98B502(), 1))
			{
				bLocal_49 = true;
			}
			if (unk_0xB8DE76287EDC4957(unk_0xC733212BF9066BDF(), 0))
			{
				if (unk_0xEBE499597C718EB8(iLocal_226[iVar1], unk_0xC733212BF9066BDF(), 1))
				{
					bLocal_49 = true;
				}
			}
		}
		iVar1++;
	}
	if (bLocal_286)
	{
	}
	if (iLocal_266)
	{
		if (unk_0xC9D9444186B5A374() > 6000)
		{
			if (unk_0xC9D9444186B5A374() > 6000 && unk_0xC9D9444186B5A374() < 7000)
			{
				unk_0x49779D62887BC4A2(330.1744f, 2629.238f, 43.5056f, 30f);
			}
			if (!iLocal_262)
			{
				if (bLocal_50)
				{
					if (!func_36())
					{
						if (!unk_0x3AB6A1A9084FB0A4(iLocal_226[0]))
						{
							func_50(&uLocal_54, 4, iLocal_226[0], "RECSBCop1", 0, 1);
							func_38(&uLocal_54, "recsbau", "recsb_crooks", 4, 0, 0, 0);
						}
						else if (!unk_0x3AB6A1A9084FB0A4(iLocal_226[1]))
						{
							unk_0x350CEE66BDF90273(iLocal_226[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
							func_53(&uLocal_54, 4);
							func_50(&uLocal_54, 4, iLocal_226[1], "RECSBCop1", 0, 1);
							func_38(&uLocal_54, "recsbau", "recsb_crooks", 4, 0, 0, 0);
						}
						else if (!unk_0x3AB6A1A9084FB0A4(iLocal_226[2]))
						{
							unk_0x350CEE66BDF90273(iLocal_226[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
							func_53(&uLocal_54, 4);
							func_50(&uLocal_54, 4, iLocal_226[2], "RECSBCop1", 0, 1);
							func_38(&uLocal_54, "recsbau", "recsb_crooks", 4, 0, 0, 0);
						}
						iLocal_262 = 1;
					}
				}
				else if (!iLocal_264)
				{
					if (!func_36())
					{
						if (!unk_0x3AB6A1A9084FB0A4(iLocal_226[0]))
						{
							func_50(&uLocal_54, 4, iLocal_226[0], "RECSBCop1", 0, 1);
							func_38(&uLocal_54, "recsbau", "recsb_crooka", 4, 0, 0, 0);
						}
						else if (!unk_0x3AB6A1A9084FB0A4(iLocal_226[1]))
						{
							unk_0x350CEE66BDF90273(iLocal_226[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
							func_53(&uLocal_54, 4);
							func_50(&uLocal_54, 4, iLocal_226[1], "RECSBCop1", 0, 1);
							func_38(&uLocal_54, "recsbau", "recsb_crooka", 4, 0, 0, 0);
						}
						else if (!unk_0x3AB6A1A9084FB0A4(iLocal_226[2]))
						{
							unk_0x350CEE66BDF90273(iLocal_226[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
							func_53(&uLocal_54, 4);
							func_50(&uLocal_54, 4, iLocal_226[2], "RECSBCop1", 0, 1);
							func_38(&uLocal_54, "recsbau", "recsb_crooka", 4, 0, 0, 0);
						}
						iLocal_262 = 1;
					}
				}
			}
			if (unk_0x5574AE3F3C1123AD(unk_0xFC1458A37D98B502(), Vector(43.5005f, 2626.29f, 326.6079f) - Vector(50f, 50f, 50f), Vector(43.5005f, 2626.29f, 326.6079f) + Vector(50f, 50f, 50f), 0, 1))
			{
				bLocal_49 = true;
			}
			if (!unk_0x191BE1BC8F26F3C1(iLocal_236, 0))
			{
				if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_236, 0))
				{
					bLocal_49 = true;
					func_3();
					unk_0x4EDE34FBADD967A6(0);
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_226[0]))
					{
						func_50(&uLocal_54, 4, iLocal_226[0], "RECSBCop1", 0, 1);
						func_38(&uLocal_54, "recsbau", "recsb_stealc", 4, 0, 0, 0);
					}
					else if (!unk_0x3AB6A1A9084FB0A4(iLocal_226[1]))
					{
						unk_0x350CEE66BDF90273(iLocal_226[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
						func_53(&uLocal_54, 4);
						func_50(&uLocal_54, 4, iLocal_226[1], "RECSBCop1", 0, 1);
						func_38(&uLocal_54, "recsbau", "recsb_stealc", 4, 0, 0, 0);
					}
					else if (!unk_0x3AB6A1A9084FB0A4(iLocal_226[2]))
					{
						unk_0x350CEE66BDF90273(iLocal_226[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
						func_53(&uLocal_54, 4);
						func_50(&uLocal_54, 4, iLocal_226[2], "RECSBCop1", 0, 1);
						func_38(&uLocal_54, "recsbau", "recsb_stealc", 4, 0, 0, 0);
					}
				}
			}
		}
		iVar1 = 0;
		while (iVar1 < iLocal_226)
		{
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_226[iVar1]))
			{
				if (unk_0x58786AA7A9E510C0(uLocal_292[0]) || unk_0x58786AA7A9E510C0(uLocal_292[1]))
				{
					if (unk_0xE56ACE711345F330(iLocal_226[iVar1], unk_0xFC1458A37D98B502()) && unk_0x21B6FFFD04C9FF3A(iLocal_226[iVar1], unk_0xFC1458A37D98B502(), 20f, 20f, 20f, 0, 1, 0))
					{
						bLocal_49 = true;
						func_3();
						unk_0x4EDE34FBADD967A6(0);
						if (!unk_0x3AB6A1A9084FB0A4(iLocal_226[0]))
						{
							func_50(&uLocal_54, 4, iLocal_226[0], "RECSBCop1", 0, 1);
							func_38(&uLocal_54, "recsbau", "recsb_stealb", 4, 0, 0, 0);
						}
						else if (!unk_0x3AB6A1A9084FB0A4(iLocal_226[1]))
						{
							unk_0x350CEE66BDF90273(iLocal_226[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
							func_53(&uLocal_54, 4);
							func_50(&uLocal_54, 4, iLocal_226[1], "RECSBCop1", 0, 1);
							func_38(&uLocal_54, "recsbau", "recsb_stealb", 4, 0, 0, 0);
						}
						else if (!unk_0x3AB6A1A9084FB0A4(iLocal_226[2]))
						{
							unk_0x350CEE66BDF90273(iLocal_226[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
							func_53(&uLocal_54, 4);
							func_50(&uLocal_54, 4, iLocal_226[2], "RECSBCop1", 0, 1);
							func_38(&uLocal_54, "recsbau", "recsb_stealb", 4, 0, 0, 0);
						}
					}
				}
				if (unk_0x9A213A2345825783(unk_0xFC1458A37D98B502(), iLocal_226[iVar1]))
				{
					unk_0xF96119FCCD4D1889(3, iLocal_268, joaat("player"));
					bLocal_49 = true;
				}
			}
			iVar1++;
		}
		if (!unk_0x3AB6A1A9084FB0A4(iLocal_226[1]) && !unk_0x191BE1BC8F26F3C1(iLocal_232[2], 0))
		{
			if (!unk_0x21B6FFFD04C9FF3A(iLocal_226[1], unk_0xFC1458A37D98B502(), 100f, 100f, 100f, 0, 1, 0))
			{
				unk_0x486F346ADFE56674(&(iLocal_226[1]));
				unk_0x5380482A432E314E(&(iLocal_232[2]));
			}
		}
	}
	iVar1 = 0;
	while (iVar1 < iLocal_232)
	{
		if (!unk_0x191BE1BC8F26F3C1(iLocal_232[iVar1], 0))
		{
			if ((unk_0xEBE499597C718EB8(iLocal_232[iVar1], unk_0xFC1458A37D98B502(), 1) || unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_232[iVar1], 0)) || unk_0x4A54CB0F526FC86F(unk_0xFC1458A37D98B502(), iLocal_232[iVar1], joaat("weapon_stickybomb"), -1))
			{
				bLocal_49 = true;
			}
			if (unk_0xB8DE76287EDC4957(unk_0xC733212BF9066BDF(), 0))
			{
				if (unk_0xEBE499597C718EB8(iLocal_232[iVar1], unk_0xC733212BF9066BDF(), 1))
				{
					bLocal_49 = true;
				}
			}
		}
		iVar1++;
	}
	if (!unk_0x191BE1BC8F26F3C1(uLocal_237, 0))
	{
		if (unk_0xEBE499597C718EB8(iLocal_237, unk_0xFC1458A37D98B502(), 1) || unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_237, 0))
		{
			bLocal_49 = true;
		}
	}
	if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
	{
		if (unk_0xC53EE6374D41156D(unk_0xFC1458A37D98B502(), joaat("towtruck")) || unk_0xC53EE6374D41156D(unk_0xFC1458A37D98B502(), joaat("towtruck2")))
		{
			uVar2 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
			if (iLocal_266)
			{
				if (!unk_0x191BE1BC8F26F3C1(iLocal_236, 0))
				{
					if (unk_0x03760B63FE11B718(uVar2, iLocal_236))
					{
						bLocal_49 = true;
						func_3();
						unk_0x4EDE34FBADD967A6(0);
						if (!unk_0x3AB6A1A9084FB0A4(iLocal_226[0]))
						{
							func_50(&uLocal_54, 4, iLocal_226[0], "RECSBCop1", 0, 1);
							func_38(&uLocal_54, "recsbau", "recsb_stealc", 4, 0, 0, 0);
						}
						else if (!unk_0x3AB6A1A9084FB0A4(iLocal_226[1]))
						{
							unk_0x350CEE66BDF90273(iLocal_226[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
							func_53(&uLocal_54, 4);
							func_50(&uLocal_54, 4, iLocal_226[1], "RECSBCop1", 0, 1);
							func_38(&uLocal_54, "recsbau", "recsb_stealc", 4, 0, 0, 0);
						}
						else if (!unk_0x3AB6A1A9084FB0A4(iLocal_226[2]))
						{
							unk_0x350CEE66BDF90273(iLocal_226[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
							func_53(&uLocal_54, 4);
							func_50(&uLocal_54, 4, iLocal_226[2], "RECSBCop1", 0, 1);
							func_38(&uLocal_54, "recsbau", "recsb_stealc", 4, 0, 0, 0);
						}
					}
				}
			}
			iVar1 = 0;
			while (iVar1 < iLocal_232)
			{
				if (!unk_0x191BE1BC8F26F3C1(iLocal_232[iVar1], 0))
				{
					if (unk_0x03760B63FE11B718(uVar2, iLocal_232[iVar1]))
					{
						bLocal_49 = true;
					}
				}
				iVar1++;
			}
			if (!unk_0x191BE1BC8F26F3C1(iLocal_237, 0))
			{
				if (unk_0x03760B63FE11B718(uVar2, iLocal_237))
				{
					bLocal_49 = true;
				}
			}
		}
	}
	if (bLocal_49 || bLocal_286)
	{
		unk_0xC1B1E9A034A63A62(0);
		unk_0x9CE0B3CF7C1648DD(unk_0x9EB17624F44A8DA4(), 0);
		unk_0x1563F8C21480594F(unk_0x9EB17624F44A8DA4(), 1, 0);
		unk_0xCFB8D84F848CAA39(unk_0x9EB17624F44A8DA4(), 0);
		unk_0xFB19003EF06A954B(unk_0x9EB17624F44A8DA4(), 0f);
		unk_0x94BD6F0436473406(0.1f);
		unk_0x5EB6EABA5BFA56A3(350f);
		bLocal_49 = true;
		if (!unk_0x191BE1BC8F26F3C1(iLocal_236, 0) && unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_236, 0))
		{
		}
		else
		{
			func_3();
			unk_0x4EDE34FBADD967A6(0);
			if (!iLocal_266)
			{
				if (unk_0x3AB6A1A9084FB0A4(iLocal_222) && !unk_0x3AB6A1A9084FB0A4(iLocal_223))
				{
					func_53(&uLocal_54, 5);
					func_50(&uLocal_54, 5, iLocal_223, "RECSBRobber1", 0, 1);
				}
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_226[0]))
				{
					func_50(&uLocal_54, 4, iLocal_226[0], "RECSBCop1", 0, 1);
					func_38(&uLocal_54, "recsbau", "recsb_copsho", 4, 0, 0, 0);
				}
				else if (!unk_0x3AB6A1A9084FB0A4(iLocal_226[1]))
				{
					unk_0x350CEE66BDF90273(iLocal_226[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
					func_53(&uLocal_54, 4);
					func_50(&uLocal_54, 4, iLocal_226[1], "RECSBCop1", 0, 1);
					func_38(&uLocal_54, "recsbau", "recsb_copsho", 4, 0, 0, 0);
				}
				else if (!unk_0x3AB6A1A9084FB0A4(iLocal_226[2]))
				{
					unk_0x350CEE66BDF90273(iLocal_226[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
					func_53(&uLocal_54, 4);
					func_50(&uLocal_54, 4, iLocal_226[2], "RECSBCop1", 0, 1);
					func_38(&uLocal_54, "recsbau", "recsb_copsho", 4, 0, 0, 0);
				}
			}
			else if (!unk_0x3AB6A1A9084FB0A4(iLocal_226[0]))
			{
				func_50(&uLocal_54, 4, iLocal_226[0], "RECSBCop1", 0, 1);
				func_38(&uLocal_54, "recsbau", "recsb_sscen3", 4, 0, 0, 0);
			}
			else if (!unk_0x3AB6A1A9084FB0A4(iLocal_226[1]))
			{
				unk_0x350CEE66BDF90273(iLocal_226[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
				func_53(&uLocal_54, 4);
				func_50(&uLocal_54, 4, iLocal_226[1], "RECSBCop1", 0, 1);
				func_38(&uLocal_54, "recsbau", "recsb_sscen3", 4, 0, 0, 0);
			}
			else if (!unk_0x3AB6A1A9084FB0A4(iLocal_226[2]))
			{
				unk_0x350CEE66BDF90273(iLocal_226[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
				func_53(&uLocal_54, 4);
				func_50(&uLocal_54, 4, iLocal_226[2], "RECSBCop1", 0, 1);
				func_38(&uLocal_54, "recsbau", "recsb_sscen3", 4, 0, 0, 0);
			}
		}
		unk_0xF96119FCCD4D1889(5, iLocal_268, joaat("player"));
		if (!func_81())
		{
			unk_0xC1B1E9A034A63A62(0);
			if (!func_81())
			{
				func_68(1);
			}
		}
		if (iLocal_266)
		{
			iVar1 = 0;
			while (iVar1 < iLocal_226)
			{
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_226[iVar1]))
				{
					unk_0xD7F5B2902EBBD04E(iLocal_226[iVar1], unk_0xFC1458A37D98B502(), 0, 16);
					unk_0xE9B3D12A64CC7C1A(iLocal_226[iVar1], 1);
					unk_0x1EAF03DA3947BBC2(iLocal_226[iVar1], unk_0xFC1458A37D98B502());
					unk_0x730F5A4EC599BB13(iLocal_226[iVar1], 1, 1, 1, 0);
					unk_0x2A2AEB84A449E99E(iLocal_226[iVar1], 1);
					unk_0x4F9A62E773100FDC(iLocal_226[iVar1], 2);
					unk_0xAE6EBBBBD8B9FB30(iLocal_226[iVar1], 50, 1);
				}
				iVar1++;
			}
		}
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_224))
	{
		if (unk_0xEBE499597C718EB8(iLocal_224, unk_0xFC1458A37D98B502(), 1))
		{
			unk_0x9CE0B3CF7C1648DD(unk_0x9EB17624F44A8DA4(), 0);
			unk_0xF96119FCCD4D1889(5, iLocal_268, joaat("player"));
			bLocal_49 = true;
		}
	}
	if (unk_0x6ADD12BF4D6D2587(iLocal_225))
	{
		if (unk_0xEBE499597C718EB8(iLocal_225, unk_0xFC1458A37D98B502(), 1))
		{
			unk_0x9CE0B3CF7C1648DD(unk_0x9EB17624F44A8DA4(), 0);
			unk_0xF96119FCCD4D1889(5, iLocal_268, joaat("player"));
			bLocal_49 = true;
		}
	}
	if (unk_0xC308146F18B10A6F(unk_0x9EB17624F44A8DA4(), 0))
	{
		bLocal_49 = true;
		unk_0x9CE0B3CF7C1648DD(unk_0x9EB17624F44A8DA4(), 0);
		unk_0xF96119FCCD4D1889(5, iLocal_268, joaat("player"));
	}
}

int func_68(int iParam0)
{
	if (func_72())
	{
		Global_104545 = 1;
		Global_104542 = unk_0x53C562FD2B9E3AB0();
		if (func_19(Global_104544))
		{
			func_69(0);
		}
		unk_0x218409883979C46E(1, "RE_TITLE");
		if (iParam0 && func_19(Global_104544))
		{
			unk_0xE56ECFD267E53FC5();
		}
		return 1;
	}
	return 0;
}

void func_69(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_104555.f_24965.f_2 < 3)
			{
				if (!unk_0x0332D718DB2E6381())
				{
					func_70(func_71(iParam0), -1);
					Global_104555.f_24965.f_2++;
					unk_0x872F1C1F8587CCC7(&Global_104551, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0xC80D31E4B587871C(Global_104551, 1))
			{
				if (!unk_0x0332D718DB2E6381())
				{
					func_70(func_71(iParam0), -1);
					Global_104555.f_24965.f_3++;
					unk_0x872F1C1F8587CCC7(&Global_104551, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0xC80D31E4B587871C(Global_104551, 2))
			{
				if (!unk_0x0332D718DB2E6381())
				{
					func_70(func_71(iParam0), -1);
					Global_104555.f_24965.f_4++;
					unk_0x872F1C1F8587CCC7(&Global_104551, 2);
				}
			}
			break;
	}
}

void func_70(var uParam0, int iParam1)
{
	unk_0x67129637F30DEB3F(uParam0);
	unk_0x376CFA11DE0FE521(0, 0, 1, iParam1);
}

char* func_71(int iParam0)
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

int func_72()
{
	switch (func_73(&Global_25292, 0, 5, 0, unk_0xBBA15366508D1BDE()))
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

int func_73(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_90456.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_77(0))
		{
			return 0;
		}
		Global_35825++;
		*uParam0 = Global_35825;
		unk_0x8FA21D9CF7681249(unk_0x98EC0789D9F0703B(), 0);
		Global_17162.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0xE6ABE74AEC92281D(8);
		}
		Global_35861 = iParam2;
		Global_35823 = *uParam0;
		Global_35824 = iParam4;
		Global_35822 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_35822 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_35822)
			{
				if (Global_35828[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_35823 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_75(iParam2))
		{
			return 0;
		}
		if (Global_35822 == 8)
		{
			return 0;
		}
		Global_35825++;
		*uParam0 = Global_35825;
		Global_35828[Global_35822 /*4*/] = Global_35825;
		Global_35828[Global_35822 /*4*/].f_1 = iParam1;
		Global_35828[Global_35822 /*4*/].f_2 = iParam2;
		Global_35828[Global_35822 /*4*/].f_3 = 0;
		Global_35822++;
		if (iParam4 != 0)
		{
			func_74(uParam0, iParam4);
		}
	}
	return 2;
}

void func_74(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_35822 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_35822)
	{
		if (Global_35828[iVar0 /*4*/] == *uParam0)
		{
			Global_35828[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_75(int iParam0)
{
	return func_76(iParam0, Global_35861);
}

int func_76(int iParam0, int iParam1)
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

int func_77(int iParam0)
{
	if (Global_35861 == 15)
	{
		return 0;
	}
	if (func_75(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_78()
{
	int iVar0;
	
	if ((!unk_0x3AB6A1A9084FB0A4(iLocal_226[0]) && !unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502())) && !unk_0x3AB6A1A9084FB0A4(iLocal_222))
	{
	}
	if ((unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 220.6075f, 2615.145f, 35.8465f, 440.8339f, 2684.23f, 72.6324f, 183.125f, 0, 1, 0) && unk_0x9E06F0EE20F58CED(Local_219, 1f)) || unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), 325.6556f, 2647.021f, 43.6289f, 30f, 30f, 30f, 0, 1, 0))
	{
		iVar0 = 0;
		while (iVar0 < iLocal_226)
		{
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_226[iVar0]))
			{
				unk_0x94FD10E25FEED948(iLocal_226[iVar0], 1, iLocal_267);
				if (!unk_0xA6DECE14FC9A8C51(uLocal_297[iVar0]))
				{
					uLocal_297[iVar0] = func_79(iLocal_226[iVar0], 0, 145);
					unk_0x9C27373CC69ECF87(uLocal_297[iVar0], 0);
				}
			}
			iVar0++;
		}
		if (!unk_0x191BE1BC8F26F3C1(iLocal_222, 0) || (!unk_0x3AB6A1A9084FB0A4(iLocal_222) && !iLocal_277))
		{
			unk_0x94FD10E25FEED948(iLocal_222, 1, iLocal_268);
			uLocal_295 = func_79(iLocal_222, 0, 145);
			unk_0x9C27373CC69ECF87(uLocal_295, 0);
			iLocal_276 = 0;
			iLocal_277 = 1;
		}
		if (!unk_0x191BE1BC8F26F3C1(iLocal_223, 0) || (!unk_0x3AB6A1A9084FB0A4(iLocal_223) && !iLocal_278))
		{
			unk_0x94FD10E25FEED948(iLocal_223, 1, iLocal_268);
			uLocal_296 = func_79(iLocal_223, 0, 145);
			unk_0x9C27373CC69ECF87(uLocal_296, 0);
			iLocal_275 = 0;
			iLocal_278 = 1;
		}
		unk_0xC1B1E9A034A63A62(0);
		if (!func_81())
		{
			func_68(1);
		}
	}
}

var func_79(var uParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_80(uParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xA6DECE14FC9A8C51(uVar0)) && unk_0xA1800C71952C596F(&(Global_104555.f_28020[iParam2 /*29*/].f_3)))
	{
		unk_0x62BD54E491535B76(uVar0, &(Global_104555.f_28020[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_80(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x6ADD12BF4D6D2587(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0xCA43F0FC44D9B846(iParam0);
	if (unk_0x8A3FF8E81B40BB75(iParam0))
	{
		unk_0xA5D25D3F884FF516(uVar0, func_52(unk_0x3A711520F83BAE98(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xDB6E56C09E5CF0AA(uVar0, bParam1);
		}
		else
		{
			unk_0x0C71C8E276E3EC54(uVar0, 2);
		}
	}
	else if (unk_0x52C56492660097C7(iParam0))
	{
		unk_0xA5D25D3F884FF516(uVar0, func_52(unk_0x3A711520F83BAE98(), 0.7f, 0.7f));
		unk_0xDB6E56C09E5CF0AA(uVar0, bParam1);
	}
	else if (unk_0x0423B20CB20B7901(iParam0))
	{
		unk_0xA5D25D3F884FF516(uVar0, func_52(unk_0x3A711520F83BAE98(), 0.7f, 0.7f));
	}
	return uVar0;
}

int func_81()
{
	if ((Global_104544 == func_33() && unk_0x17E356AF4F930A2C()) && Global_104545)
	{
		return 1;
	}
	return 0;
}

void func_82()
{
	int iVar0;
	
	if (!iLocal_280)
	{
		if (!bLocal_49 && !iLocal_266)
		{
			if (unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), 325.6556f, 2647.021f, 43.6289f, 30f, 30f, 30f, 0, 1, 0))
			{
				iVar0 = 0;
				while (iVar0 < iLocal_226)
				{
					if (unk_0xA6DECE14FC9A8C51(uLocal_297[iVar0]))
					{
						unk_0x9C27373CC69ECF87(uLocal_297[iVar0], 1);
					}
					iVar0++;
				}
				if (unk_0xA6DECE14FC9A8C51(uLocal_295))
				{
					unk_0x9C27373CC69ECF87(uLocal_295, 1);
				}
				if (unk_0xA6DECE14FC9A8C51(uLocal_296))
				{
					unk_0x9C27373CC69ECF87(uLocal_296, 1);
				}
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_226[0]))
				{
					func_50(&uLocal_54, 4, iLocal_226[0], "RECSBCop1", 0, 1);
					func_38(&uLocal_54, "recsbau", "recsb_copswa", 4, 0, 0, 0);
				}
				else if (!unk_0x3AB6A1A9084FB0A4(iLocal_226[1]))
				{
					unk_0x350CEE66BDF90273(iLocal_226[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
					func_53(&uLocal_54, 4);
					func_50(&uLocal_54, 4, iLocal_226[1], "RECSBCop1", 0, 1);
					func_38(&uLocal_54, "recsbau", "recsb_copswa", 4, 0, 0, 0);
				}
				else if (!unk_0x3AB6A1A9084FB0A4(iLocal_226[2]))
				{
					unk_0x350CEE66BDF90273(iLocal_226[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
					func_53(&uLocal_54, 4);
					func_50(&uLocal_54, 4, iLocal_226[2], "RECSBCop1", 0, 1);
					func_38(&uLocal_54, "recsbau", "recsb_copswa", 4, 0, 0, 0);
				}
				iLocal_280 = 1;
			}
		}
	}
	if ((func_81() && !iLocal_264) && !iLocal_266)
	{
		if (iLocal_283 == 0 && !func_36())
		{
			unk_0xC1B1E9A034A63A62(0);
			if (func_45() == 0)
			{
				func_38(&uLocal_54, "recsbau", "recsb_comm", 4, 0, 0, 0);
			}
			else if (func_45() == 1)
			{
				func_38(&uLocal_54, "recsbau", "recsb_comf", 4, 0, 0, 0);
			}
			else if (func_45() == 2)
			{
				func_38(&uLocal_54, "recsbau", "recsb_comt", 4, 0, 0, 0);
			}
			iLocal_283++;
			unk_0xC1B1E9A034A63A62(0);
		}
		if (iLocal_283 == 1 && !func_36())
		{
			unk_0xC1B1E9A034A63A62(0);
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_226[0]))
			{
				func_50(&uLocal_54, 4, iLocal_226[0], "RECSBCop1", 0, 1);
				func_38(&uLocal_54, "recsbau", "recsb_banteb", 4, 0, 0, 0);
			}
			else if (!unk_0x3AB6A1A9084FB0A4(iLocal_226[1]))
			{
				unk_0x350CEE66BDF90273(iLocal_226[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
				func_53(&uLocal_54, 4);
				func_50(&uLocal_54, 4, iLocal_226[1], "RECSBCop1", 0, 1);
				func_38(&uLocal_54, "recsbau", "recsb_banteb", 4, 0, 0, 0);
			}
			else if (!unk_0x3AB6A1A9084FB0A4(iLocal_226[2]))
			{
				unk_0x350CEE66BDF90273(iLocal_226[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
				func_53(&uLocal_54, 4);
				func_50(&uLocal_54, 4, iLocal_226[2], "RECSBCop1", 0, 1);
				func_38(&uLocal_54, "recsbau", "recsb_banteb", 4, 0, 0, 0);
			}
			iLocal_283++;
			unk_0xC1B1E9A034A63A62(0);
		}
		if ((iLocal_283 == 2 && unk_0x83666F9FB8FEBD4B() > 2000) && !func_36())
		{
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_222))
			{
				func_38(&uLocal_54, "recsbau", "recsb_bantea", 4, 0, 0, 0);
			}
			else if (!unk_0x3AB6A1A9084FB0A4(iLocal_223))
			{
				func_53(&uLocal_54, 5);
				func_50(&uLocal_54, 5, iLocal_223, "RECSBRobber1", 0, 1);
				func_38(&uLocal_54, "recsbau", "recsb_bantea", 4, 0, 0, 0);
			}
			unk_0xC1B1E9A034A63A62(0);
			iLocal_283++;
		}
		if ((iLocal_283 == 3 && unk_0x83666F9FB8FEBD4B() > 2000) && !func_36())
		{
			if (!bLocal_50)
			{
				if (!iLocal_263)
				{
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_222))
					{
						func_38(&uLocal_54, "recsbau", "recsb_croclo", 4, 0, 0, 0);
					}
					else if (!unk_0x3AB6A1A9084FB0A4(iLocal_223))
					{
						func_53(&uLocal_54, 5);
						func_50(&uLocal_54, 5, iLocal_223, "RECSBRobber1", 0, 1);
						func_38(&uLocal_54, "recsbau", "recsb_croclo", 4, 0, 0, 0);
					}
					iLocal_263 = 1;
				}
			}
			if (!bLocal_49)
			{
				func_83(&(iLocal_226[0]), "recsb_copclo");
				func_83(&(iLocal_226[1]), "recsb_copclo");
				func_83(&(iLocal_226[2]), "recsb_copclo");
			}
		}
		if (iLocal_283 == 4 && unk_0x83666F9FB8FEBD4B() > 5000)
		{
			unk_0xC1B1E9A034A63A62(0);
			iLocal_283++;
		}
	}
}

void func_83(var uParam0, char* sParam1)
{
	if (!unk_0x3AB6A1A9084FB0A4(*uParam0))
	{
		if (unk_0x21B6FFFD04C9FF3A(unk_0xFC1458A37D98B502(), *uParam0, 4f, 4f, 4f, 0, 1, 0))
		{
			if (!bLocal_49)
			{
				func_50(&uLocal_54, 4, *uParam0, "RECSBCop1", 0, 1);
				func_38(&uLocal_54, "recsbau", sParam1, 4, 0, 0, 0);
				unk_0x60C06BFD037BB7CF(*uParam0, unk_0xFC1458A37D98B502(), 10000, 48, 4);
			}
			unk_0xC1B1E9A034A63A62(0);
			iLocal_283++;
		}
	}
}

void func_84()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_226)
	{
		if (unk_0x3AB6A1A9084FB0A4(iLocal_226[iVar0]))
		{
			if (unk_0xA6DECE14FC9A8C51(uLocal_297[iVar0]))
			{
				unk_0xE30CF11C0EE14316(&(uLocal_297[iVar0]));
			}
		}
		iVar0++;
	}
	if (unk_0x3AB6A1A9084FB0A4(iLocal_222))
	{
		if (unk_0xA6DECE14FC9A8C51(uLocal_295))
		{
			unk_0xE30CF11C0EE14316(&uLocal_295);
		}
	}
	if (unk_0x3AB6A1A9084FB0A4(iLocal_223))
	{
		if (unk_0xA6DECE14FC9A8C51(uLocal_296))
		{
			unk_0xE30CF11C0EE14316(&uLocal_296);
		}
	}
	iVar0 = 0;
	while (iVar0 < iLocal_232)
	{
		if (!unk_0x191BE1BC8F26F3C1(iLocal_232[iVar0], 0))
		{
			if (unk_0xA8D0477084E86A92(unk_0xFC1458A37D98B502(), iLocal_232[iVar0], 0))
			{
				unk_0xBE4F24A336BFDEEC(iLocal_232[iVar0], 0);
			}
		}
		iVar0++;
	}
	if (bLocal_50)
	{
		if (!iLocal_52)
		{
			unk_0xF96119FCCD4D1889(5, iLocal_267, joaat("player"));
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_222))
			{
				if (unk_0xA6DECE14FC9A8C51(uLocal_295))
				{
					unk_0xE30CF11C0EE14316(&uLocal_295);
				}
				if (!unk_0xA6DECE14FC9A8C51(uLocal_295))
				{
					uLocal_295 = func_79(iLocal_222, 1, 145);
					unk_0x5C5D33A1B2711D21(iLocal_222, 1);
				}
				unk_0xD7F5B2902EBBD04E(iLocal_222, unk_0xFC1458A37D98B502(), 0, 16);
				unk_0xE9B3D12A64CC7C1A(iLocal_222, 1);
				unk_0x1EAF03DA3947BBC2(iLocal_222, unk_0xFC1458A37D98B502());
				unk_0x2A2AEB84A449E99E(iLocal_222, 1);
			}
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_223))
			{
				if (unk_0xA6DECE14FC9A8C51(uLocal_296))
				{
					unk_0xE30CF11C0EE14316(&uLocal_296);
				}
				if (!unk_0xA6DECE14FC9A8C51(uLocal_296))
				{
					uLocal_296 = func_79(iLocal_223, 1, 145);
					unk_0x5C5D33A1B2711D21(iLocal_223, 1);
				}
				unk_0xD7F5B2902EBBD04E(iLocal_223, unk_0xFC1458A37D98B502(), 0, 16);
				unk_0xE9B3D12A64CC7C1A(iLocal_223, 1);
				unk_0x1EAF03DA3947BBC2(iLocal_223, unk_0xFC1458A37D98B502());
				unk_0x2A2AEB84A449E99E(iLocal_223, 1);
			}
			iLocal_52 = 1;
		}
		if (bLocal_49)
		{
			if (!iLocal_53)
			{
				unk_0xF96119FCCD4D1889(5, iLocal_268, joaat("player"));
				iVar0 = 0;
				while (iVar0 < iLocal_226)
				{
					if (!unk_0x3AB6A1A9084FB0A4(iLocal_226[iVar0]))
					{
						unk_0x5C5D33A1B2711D21(iLocal_226[iVar0], 1);
						if (unk_0xA6DECE14FC9A8C51(uLocal_297[iVar0]))
						{
							unk_0xE30CF11C0EE14316(&(uLocal_297[iVar0]));
						}
						unk_0xD7F5B2902EBBD04E(iLocal_226[iVar0], unk_0xFC1458A37D98B502(), 0, 16);
						unk_0xE9B3D12A64CC7C1A(iLocal_226[iVar0], 1);
						unk_0x1EAF03DA3947BBC2(iLocal_226[iVar0], unk_0xFC1458A37D98B502());
						unk_0x2A2AEB84A449E99E(iLocal_226[iVar0], 1);
					}
					iVar0++;
				}
				iLocal_53 = 1;
			}
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < iLocal_226)
			{
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_226[iVar0]))
				{
					unk_0x5C5D33A1B2711D21(iLocal_226[iVar0], 0);
				}
				iVar0++;
			}
		}
	}
	else if (bLocal_49)
	{
		if (!iLocal_51)
		{
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_222))
			{
				unk_0x5C5D33A1B2711D21(iLocal_222, 0);
			}
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_223))
			{
				unk_0x5C5D33A1B2711D21(iLocal_223, 0);
			}
			iLocal_51 = 1;
		}
		if (!iLocal_53)
		{
			unk_0xF96119FCCD4D1889(5, iLocal_268, joaat("player"));
			iVar0 = 0;
			while (iVar0 < iLocal_226)
			{
				if (!unk_0x3AB6A1A9084FB0A4(iLocal_226[iVar0]))
				{
					unk_0x5C5D33A1B2711D21(iLocal_226[iVar0], 1);
					unk_0x4674F4B9917A0F72(iLocal_226[iVar0]);
					if (unk_0xA6DECE14FC9A8C51(uLocal_297[iVar0]))
					{
						unk_0xE30CF11C0EE14316(&(uLocal_297[iVar0]));
					}
					if (!unk_0xA6DECE14FC9A8C51(uLocal_297[iVar0]))
					{
						uLocal_297[iVar0] = func_79(iLocal_226[iVar0], 1, 145);
					}
					unk_0xD7F5B2902EBBD04E(iLocal_226[iVar0], unk_0xFC1458A37D98B502(), 0, 16);
					unk_0xE9B3D12A64CC7C1A(iLocal_226[iVar0], 1);
					unk_0x1EAF03DA3947BBC2(iLocal_226[iVar0], unk_0xFC1458A37D98B502());
					unk_0x2A2AEB84A449E99E(iLocal_226[iVar0], 1);
				}
				iVar0++;
			}
			iLocal_53 = 1;
		}
	}
}

void func_85()
{
	unk_0x6FF834D85E2DD4C6(joaat("s_m_y_ranger_01"));
	unk_0x6FF834D85E2DD4C6(joaat("a_m_y_genstreet_01"));
	unk_0x6FF834D85E2DD4C6(joaat("s_m_m_paramedic_01"));
	unk_0x6FF834D85E2DD4C6(joaat("sheriff"));
	unk_0x6FF834D85E2DD4C6(joaat("phoenix"));
	if ((((unk_0x9A0B2ED5055D3F0B(joaat("s_m_y_ranger_01")) && unk_0x9A0B2ED5055D3F0B(joaat("a_m_y_genstreet_01"))) && unk_0x9A0B2ED5055D3F0B(joaat("s_m_m_paramedic_01"))) && unk_0x9A0B2ED5055D3F0B(joaat("sheriff"))) && unk_0x9A0B2ED5055D3F0B(joaat("phoenix")))
	{
		unk_0x2E4932E63763FE26(joaat("phoenix"), 1);
		unk_0x9CE0B3CF7C1648DD(unk_0x9EB17624F44A8DA4(), 1);
		unk_0x94BD6F0436473406(0f);
		unk_0xCB389937EDB1519A(Vector(44.49f, 2630.83f, 335.22f) - Vector(20f, 50f, 50f), Vector(44.49f, 2630.83f, 335.22f) + Vector(20f, 50f, 50f), 0, 1, 1, 1);
		unk_0xA846A937885EB977(418.2996f, 2650.597f, 42.84723f, 297.8981f, 2617.968f, 53.6412f, 49.6875f, 0, 0, 1);
		unk_0x4C15495E88D71C61(Vector(43.4932f, 2612.694f, 328.0555f) - Vector(10f, 10f, 10f), Vector(43.4932f, 2612.694f, 328.0555f) + Vector(10f, 10f, 10f), 0, 1);
		unk_0x9B8406983378711E(328.0555f, 2612.694f, 43.4932f, 5f, 0, 0, 0, 0, 0, 0);
		iLocal_236 = unk_0xEA60F3B426BB095B(joaat("phoenix"), 326.78f, 2626.56f, 43.5081f, 45.21f, 1, 1, 0);
		iLocal_232[0] = unk_0xEA60F3B426BB095B(joaat("sheriff"), 314.1008f, 2641.67f, 43.5055f, 258.9436f, 1, 1, 0);
		iLocal_232[1] = unk_0xEA60F3B426BB095B(joaat("sheriff"), 330.7097f, 2646.913f, 43.685f, 120.9436f, 1, 1, 0);
		iLocal_232[2] = unk_0xEA60F3B426BB095B(joaat("sheriff"), 321.4496f, 2649.388f, 43.5706f, 105.9436f, 1, 1, 0);
		unk_0x4AC93B6A8825F105(iLocal_232[2], 1);
		unk_0x4AC93B6A8825F105(iLocal_232[1], 1);
		unk_0x4AC93B6A8825F105(iLocal_232[0], 1);
		unk_0xBB4910CCAB2BEDFA(iLocal_232[2], 1);
		unk_0xBB4910CCAB2BEDFA(iLocal_232[1], 1);
		unk_0xBB4910CCAB2BEDFA(iLocal_232[0], 1);
		unk_0xBE4F24A336BFDEEC(iLocal_232[0], 1);
		unk_0xBE4F24A336BFDEEC(iLocal_232[2], 1);
		unk_0xBE4F24A336BFDEEC(iLocal_232[1], 1);
		unk_0x55B1BF6B77028A46(iLocal_236, 1);
		unk_0x55B1BF6B77028A46(iLocal_232[0], 1);
		unk_0x55B1BF6B77028A46(iLocal_232[1], 1);
		unk_0x55B1BF6B77028A46(iLocal_232[2], 1);
		iLocal_222 = unk_0xAC992EFAD62C33BF(19, joaat("a_m_y_genstreet_01"), 321.31f, 2615.66f, 43.4963f, 346f, 1, 1);
		iLocal_223 = unk_0xAC992EFAD62C33BF(19, joaat("a_m_y_genstreet_01"), 326.25f, 2624.51f, 43.4846f, 341f, 1, 1);
		iLocal_230 = unk_0xAC992EFAD62C33BF(6, joaat("s_m_y_ranger_01"), 325.3731f, 2631.16f, 43.5248f, 87f, 1, 1);
		iLocal_226[0] = unk_0xAC992EFAD62C33BF(6, joaat("s_m_y_ranger_01"), 310.6203f, 2642.854f, 43.5173f, 226f, 1, 1);
		iLocal_226[1] = unk_0xAC992EFAD62C33BF(6, joaat("s_m_y_ranger_01"), 319.5652f, 2650.067f, 43.5411f, 189f, 1, 1);
		iLocal_226[2] = unk_0xAC992EFAD62C33BF(6, joaat("s_m_y_ranger_01"), 324.0396f, 2650.964f, 43.5983f, 214f, 1, 1);
		unk_0x296D39391436DC64(iLocal_226[0], "ped_cops[0]");
		unk_0x296D39391436DC64(iLocal_226[1], "ped_cops[1]");
		unk_0x296D39391436DC64(iLocal_226[2], "ped_cops[2]");
		unk_0xD0A6028E561242DA(iLocal_226[0], 1, -1, 0);
		unk_0xD0A6028E561242DA(iLocal_226[1], 1, -1, 0);
		unk_0xD0A6028E561242DA(iLocal_226[2], 1, -1, 0);
		unk_0x4EC2D0046891F1C5(iLocal_223, 326.25f, 2624.51f, 43.4846f, 3.5f, 0, 0);
		unk_0x4EC2D0046891F1C5(iLocal_222, 321.31f, 2615.66f, 43.4963f, 3.5f, 0, 0);
		unk_0x4EC2D0046891F1C5(iLocal_226[0], 310.6203f, 2642.854f, 43.5173f, 3.5f, 0, 0);
		unk_0x4EC2D0046891F1C5(iLocal_226[1], 319.5652f, 2650.067f, 43.5411f, 3.5f, 0, 0);
		unk_0x4EC2D0046891F1C5(iLocal_226[2], 324.0396f, 2650.964f, 43.5983f, 3.5f, 0, 0);
		unk_0x4E0F66531BFA3A51(iLocal_226[0]);
		unk_0x4E0F66531BFA3A51(iLocal_226[1]);
		unk_0x4E0F66531BFA3A51(iLocal_226[2]);
		unk_0xAE6EBBBBD8B9FB30(iLocal_226[0], 0, 1);
		unk_0xAE6EBBBBD8B9FB30(iLocal_226[1], 0, 1);
		unk_0xAE6EBBBBD8B9FB30(iLocal_226[2], 0, 1);
		unk_0xAE6EBBBBD8B9FB30(iLocal_226[0], 1, 1);
		unk_0xAE6EBBBBD8B9FB30(iLocal_226[1], 1, 1);
		unk_0xAE6EBBBBD8B9FB30(iLocal_226[2], 1, 1);
		unk_0xBB3CC641B6AED5E5(iLocal_226[0], 13);
		unk_0xBB3CC641B6AED5E5(iLocal_226[1], 13);
		unk_0xBB3CC641B6AED5E5(iLocal_226[2], 13);
		unk_0xAE6EBBBBD8B9FB30(iLocal_223, 0, 1);
		unk_0xAE6EBBBBD8B9FB30(iLocal_222, 0, 1);
		unk_0xAE6EBBBBD8B9FB30(iLocal_223, 1, 1);
		unk_0xAE6EBBBBD8B9FB30(iLocal_222, 1, 1);
		unk_0x6D4A70E9DE82B24B(iLocal_232[0], 0, 0, 0);
		unk_0x6D4A70E9DE82B24B(iLocal_232[0], 1, 0, 0);
		unk_0x6D4A70E9DE82B24B(iLocal_232[1], 1, 0, 0);
		unk_0x6D4A70E9DE82B24B(iLocal_232[1], 0, 0, 0);
		unk_0x6D4A70E9DE82B24B(iLocal_232[2], 1, 0, 0);
		unk_0x6D4A70E9DE82B24B(iLocal_232[2], 0, 0, 0);
		unk_0x6D4A70E9DE82B24B(iLocal_236, 1, 0, 0);
		unk_0x6D4A70E9DE82B24B(iLocal_236, 0, 0, 0);
		unk_0xCFF0CD14B439821D(iLocal_236, 1, 1);
		unk_0x4DE114E3C7F8B7C2("robbers", &iLocal_267);
		unk_0x4DE114E3C7F8B7C2("cops", &iLocal_268);
		unk_0xE01CE1EBCD7EE551(iLocal_230, 0, 0);
		unk_0xCE93FCB8A8D8DF0B(iLocal_223, iLocal_267);
		unk_0x94FD10E25FEED948(iLocal_223, 0, iLocal_268);
		unk_0xE01CE1EBCD7EE551(iLocal_223, 300, 0);
		unk_0x9E058151726E58DE(iLocal_223, joaat("weapon_pistol"), 200, 1, 1);
		unk_0x253DB96AF5D6551B(iLocal_223, 100f);
		unk_0x41613433DA018B46(iLocal_223, 100f);
		unk_0x906AA68500286472(iLocal_223, 35f, 35f, 1);
		unk_0xBB3CC641B6AED5E5(iLocal_223, 13);
		unk_0xCE93FCB8A8D8DF0B(iLocal_222, iLocal_267);
		unk_0x94FD10E25FEED948(iLocal_222, 0, iLocal_268);
		unk_0xE01CE1EBCD7EE551(iLocal_222, 300, 0);
		unk_0x9E058151726E58DE(iLocal_222, joaat("weapon_pistol"), 200, 1, 1);
		unk_0x253DB96AF5D6551B(iLocal_222, 100f);
		unk_0x41613433DA018B46(iLocal_222, 100f);
		unk_0x906AA68500286472(iLocal_222, 35f, 35f, 1);
		unk_0xBB3CC641B6AED5E5(iLocal_222, 13);
		unk_0x94FD10E25FEED948(iLocal_226[0], 0, iLocal_267);
		unk_0x94FD10E25FEED948(iLocal_226[1], 0, iLocal_267);
		unk_0x94FD10E25FEED948(iLocal_226[2], 0, iLocal_267);
		unk_0x9E058151726E58DE(iLocal_226[0], joaat("weapon_pumpshotgun"), 200, 1, 1);
		unk_0x9E058151726E58DE(iLocal_226[1], joaat("weapon_pistol"), 200, 1, 1);
		unk_0x9E058151726E58DE(iLocal_226[2], joaat("weapon_pumpshotgun"), 200, 1, 1);
		unk_0x253DB96AF5D6551B(iLocal_226[0], 100f);
		unk_0x41613433DA018B46(iLocal_226[0], 100f);
		unk_0x253DB96AF5D6551B(iLocal_226[1], 100f);
		unk_0x41613433DA018B46(iLocal_226[1], 100f);
		unk_0x253DB96AF5D6551B(iLocal_226[2], 100f);
		unk_0x41613433DA018B46(iLocal_226[2], 100f);
		unk_0xCE93FCB8A8D8DF0B(iLocal_226[0], iLocal_268);
		unk_0xCE93FCB8A8D8DF0B(iLocal_226[1], iLocal_268);
		unk_0xCE93FCB8A8D8DF0B(iLocal_226[2], iLocal_268);
		unk_0x1D29C781A978C4FB(5, 0);
		unk_0x1D29C781A978C4FB(3, 0);
		unk_0xF96119FCCD4D1889(1, iLocal_268, joaat("COP"));
		unk_0xF96119FCCD4D1889(1, joaat("COP"), iLocal_268);
		unk_0xF96119FCCD4D1889(1, iLocal_268, joaat("player"));
		unk_0xF96119FCCD4D1889(1, iLocal_267, joaat("player"));
		unk_0xF96119FCCD4D1889(5, iLocal_268, iLocal_267);
		unk_0xF96119FCCD4D1889(5, joaat("COP"), iLocal_267);
		unk_0xF96119FCCD4D1889(5, iLocal_267, iLocal_268);
		unk_0x8702B5F35BDDD0C1(iLocal_226[0], iLocal_222, 3000, 0);
		unk_0x8702B5F35BDDD0C1(iLocal_226[1], iLocal_222, 3000, 0);
		unk_0x8702B5F35BDDD0C1(iLocal_226[2], iLocal_222, 3000, 0);
		if (func_45() == 0)
		{
			func_50(&uLocal_54, 0, unk_0xFC1458A37D98B502(), "MICHAEL", 0, 1);
		}
		else if (func_45() == 1)
		{
			func_50(&uLocal_54, 0, unk_0xFC1458A37D98B502(), "FRANKLIN", 0, 1);
		}
		else if (func_45() == 2)
		{
			func_50(&uLocal_54, 0, unk_0xFC1458A37D98B502(), "TREVOR", 0, 1);
		}
		func_50(&uLocal_54, 4, iLocal_226[0], "RECSBCop1", 0, 1);
		func_50(&uLocal_54, 5, iLocal_222, "RECSBRobber1", 0, 1);
		unk_0x350CEE66BDF90273(iLocal_226[0], "S_M_Y_RANGER_01_WHITE_FULL_01");
		unk_0x350CEE66BDF90273(iLocal_222, "G_M_Y_ArmGoon_02_White_Armenian_MINI_01");
		unk_0x350CEE66BDF90273(iLocal_222, "G_M_Y_ArmGoon_02_White_Armenian_MINI_01");
		iLocal_47 = 1;
	}
}

void func_86(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_33();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_88(iParam0);
	unk_0x51B813700F855144(0);
	unk_0x980C42B833D07BB4(1);
	Global_104541 = 0;
	func_87();
}

void func_87()
{
	if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
	{
		if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
		{
			unk_0x2E4932E63763FE26(unk_0x82FF3DFBC3965CC0(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0)), 1);
		}
		unk_0xAE01EF4BC84AFE7C(unk_0xFC1458A37D98B502(), 32, 0);
	}
}

void func_88(int iParam0)
{
	Global_104544 = iParam0;
}

int func_89(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_142819)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_33();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_141())
		{
			return 0;
		}
	}
	Local_43 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()) && !unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
		{
			Var1 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
			if (unk_0xA8CEACB4F35AE058(unk_0x8FD9FCCB6E4BD999(unk_0xFC1458A37D98B502())) > 1369f && !func_140())
			{
				return 0;
			}
		}
		if (!Global_104555.f_9055)
		{
			return 0;
		}
		if (func_10(0))
		{
			return 0;
		}
		if (func_136())
		{
			return 0;
		}
		if (func_135())
		{
			return 0;
		}
		if (Global_104544 != -1)
		{
			return 0;
		}
		if (func_27(func_45()))
		{
			if (func_129(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()) && !bParam6)
		{
			if ((Var1.f_2 - Local_43.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_128(iParam3))
		{
			return 0;
		}
		if (func_27(func_45()))
		{
			if (func_127(func_45()) == 4 || func_127(func_45()) == 5)
			{
				return 0;
			}
		}
		if (func_27(func_45()))
		{
			if (!func_126(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_125(Global_104555.f_24965.f_43[iParam3]))
		{
			return 0;
		}
		if ((unk_0x53C562FD2B9E3AB0() - Global_104546) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_124())
		{
			return 0;
		}
		if (unk_0x5A0744D504CC705F())
		{
			return 0;
		}
		if (unk_0x17E356AF4F930A2C())
		{
			return 0;
		}
		if (!func_115(4))
		{
			return 0;
		}
		if (!func_75(5))
		{
			return 0;
		}
		if (func_114(iParam3, iParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_3 && iParam3 != 10)
		{
			return 0;
		}
		if (unk_0x2C2E1E35924B9FF2(unk_0x1ACD6691B9C9AA46(unk_0xFC1458A37D98B502())))
		{
			if ((unk_0x1ACD6691B9C9AA46(unk_0xFC1458A37D98B502()) == unk_0xD3BB1A515B0A47F3(377.153f, -717.567f, 10.0536f) || unk_0x1ACD6691B9C9AA46(unk_0xFC1458A37D98B502()) == unk_0xD3BB1A515B0A47F3(320.9934f, 265.2515f, 82.1221f)) || unk_0x1ACD6691B9C9AA46(unk_0xFC1458A37D98B502()) == unk_0xD3BB1A515B0A47F3(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_114(0, 0))
		{
			return 0;
		}
		if (Global_25379)
		{
			return 0;
		}
		if (func_128(30) && !func_114(30, 0))
		{
			if (iParam3 != 30)
			{
				if (unk_0xB7A628320EFF8E47(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_27(func_45()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_104555.f_2353.f_539.f_2280[iVar4 /*3*/] };
				iVar8 = Global_104555.f_2353.f_539.f_2276[iVar4];
				if (func_113(iVar8))
				{
					if (func_91(iVar4))
					{
						if (!func_90(Var5, 0f, 0f, 0f, 0))
						{
							if (unk_0xB7A628320EFF8E47(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0), Var5) < (210f * 210f))
							{
								if (func_45() != iVar4)
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

bool func_90(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_91(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_104555.f_2353.f_539.f_2276[iParam0];
	return func_92(iVar0);
}

int func_92(int iParam0)
{
	return func_93(iParam0, 1);
}

int func_93(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_113(iParam0))
	{
		return 0;
	}
	func_94(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_94(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_95(func_106(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_95(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_105(iParam0, iParam1))
	{
		iVar0 = func_104(iParam1);
		iVar1 = func_102(iParam0);
		iVar2 = (func_102(iParam0) - func_102(iParam1));
		iVar3 = (func_104(iParam0) - func_104(iParam1));
		iVar4 = (func_101(iParam0) - func_101(iParam1));
		iVar5 = (func_100(iParam0) - func_100(iParam1));
		iVar6 = (func_99(iParam0) - func_99(iParam1));
		iVar7 = (func_98(iParam0) - func_98(iParam1));
	}
	else
	{
		iVar0 = func_104(iParam0);
		iVar1 = func_102(iParam1);
		iVar2 = (func_102(iParam1) - func_102(iParam0));
		iVar3 = (func_104(iParam1) - func_104(iParam0));
		iVar4 = (func_101(iParam1) - func_101(iParam0));
		iVar5 = (func_100(iParam1) - func_100(iParam0));
		iVar6 = (func_99(iParam1) - func_99(iParam0));
		iVar7 = (func_98(iParam1) - func_98(iParam0));
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
		iVar4 = (iVar4 + func_97(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = unk_0xF2DB717A73826179(func_96(unk_0xBBDA792448DB5A89(iVar0 + 1), 0f, 12f));
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

float func_96(float fParam0, float fParam1, float fParam2)
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

int func_97(int iParam0, int iParam1)
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

int func_98(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_99(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_100(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_101(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_102(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_103(unk_0xC80D31E4B587871C(iParam0, 31), -1, 1)) + 2011;
}

int func_103(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_104(int iParam0)
{
	return iParam0 & 15;
}

int func_105(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_113(iParam1) || !func_113(iParam0))
	{
		return 1;
	}
	iVar0 = func_102(iParam0);
	iVar1 = func_102(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_104(iParam0);
	iVar1 = func_104(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_101(iParam0);
	iVar1 = func_101(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_100(iParam0);
	iVar1 = func_100(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_99(iParam0);
	iVar1 = func_99(iParam1);
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
	return 0;
}

int func_106()
{
	var uVar0;
	
	func_112(&uVar0, unk_0x2F31FD7674CB6CD3());
	func_111(&uVar0, unk_0x95327550F0F2BE7C());
	func_110(&uVar0, unk_0x674C9438180770FE());
	func_109(&uVar0, unk_0xD3ECC7A5C90D3AA4());
	func_108(&uVar0, unk_0xEAF455949B108589());
	func_107(&uVar0, unk_0x93F322D6E98835CC());
	return uVar0;
}

void func_107(var uParam0, int iParam1)
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

void func_108(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_109(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_104(*uParam0);
	iVar1 = func_102(*uParam0);
	if (iParam1 < 1 || iParam1 > func_97(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_110(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_111(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_112(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_113(int iParam0)
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
	iVar0 = func_98(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_99(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_100(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_102(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_104(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_101(iParam0);
	if (iVar5 < 1 || iVar5 > func_97(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_114(int iParam0, int iParam1)
{
	if (unk_0xC80D31E4B587871C(Global_104555.f_24965.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_115(int iParam0)
{
	int iVar0;
	
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
		{
			if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
			{
				iVar0 = func_45();
				if (!func_27(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x85C9285BFFF225F4(unk_0x9EB17624F44A8DA4()) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x0F299BBD0DC14B18(unk_0xFC1458A37D98B502())) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x5EDC8E26D8E9BD2A(unk_0x9EB17624F44A8DA4())) || unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0)) || func_123()) || Global_103602) || Global_25235) || func_122()) || func_47(8, -1)) || func_121()) || func_120()) || func_119()) || func_118()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1) || func_123()) || Global_25235) || func_122()) || func_47(8, -1)) || func_119()) || func_121()) || func_120()) || func_118()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x85C9285BFFF225F4(unk_0x9EB17624F44A8DA4()) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x0F299BBD0DC14B18(unk_0xFC1458A37D98B502())) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x5EDC8E26D8E9BD2A(unk_0x9EB17624F44A8DA4())) || unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0)) || func_123()) || Global_103602) || Global_25235) || func_122()) || func_47(8, -1)) || func_119()) || func_121()) || func_120()) || func_118()) || Global_104555.f_7658.f_919[iVar0] == 5) || Global_36408 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502()) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0)) || func_123()) || Global_103602) || Global_25235) || func_122()) || func_47(8, -1)) || func_121()) || func_120()) || func_118()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_123() || unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) > 0) || func_47(8, -1)) || func_118()) || func_117()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_47(8, -1) || func_121()) || func_120()) || func_117()) || func_116())
						{
							return 0;
						}
						if ((unk_0x1E06D00B67177A18() && unk_0x950AEA4C7FFF9EA4() != 3) && unk_0x70522E2561AD22FE() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
						{
							if ((((((((((((((unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0) || unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) > 0) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x5EDC8E26D8E9BD2A(unk_0x9EB17624F44A8DA4())) || func_123()) || Global_25235) || func_122()) || func_47(8, -1)) || func_120()) || func_119()) || func_118()) || Global_104555.f_7658.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0) || !unk_0x036D7C18EE783AB5(unk_0x9EB17624F44A8DA4())) || !unk_0x85C9285BFFF225F4(unk_0x9EB17624F44A8DA4())) || !unk_0x9F7B586A14398C40()) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || func_123()) || func_120()) || Global_103602) || Global_25235) || func_122()) || Global_36993) || func_47(8, -1)) || func_119()) || func_117()) || func_118()) || Global_104555.f_7658.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0x7ED4D0E480A6EC43(unk_0xFC1458A37D98B502(), 0) || !unk_0x036D7C18EE783AB5(unk_0x9EB17624F44A8DA4())) || !unk_0x85C9285BFFF225F4(unk_0x9EB17624F44A8DA4())) || !unk_0x9F7B586A14398C40()) || unk_0xC308146F18B10A6F(unk_0x9EB17624F44A8DA4(), 0)) || unk_0x0ACC2116170FA204(unk_0xFC1458A37D98B502())) || unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 1)) || unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502())) || unk_0x81FE9C1618BDF46B(unk_0xFC1458A37D98B502())) || unk_0x8CA785582569CE6C(unk_0xFC1458A37D98B502())) || unk_0xEA18004FB7FEACF1(unk_0x9EB17624F44A8DA4(), 1)) || unk_0x5EDC8E26D8E9BD2A(unk_0x9EB17624F44A8DA4())) || func_123()) || Global_103602) || Global_25235) || func_122()) || func_47(8, -1)) || func_119()) || func_117()) || func_121()) || func_120()) || func_118())
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

var func_116()
{
	return Global_92872.f_1;
}

int func_117()
{
	if (Global_89900 != -1)
	{
		return unk_0xC80D31E4B587871C(Global_83766[Global_89900 /*34*/].f_15, 13);
	}
	return 0;
}

int func_118()
{
	if (unk_0x8F38E94BBF3404CD(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_119()
{
	if (Global_71116)
	{
		return 1;
	}
	else if (Global_55897 && !Global_55903)
	{
		return 1;
	}
	return 0;
}

bool func_120()
{
	return Global_92885.f_316 > 0;
}

bool func_121()
{
	return Global_92885.f_315 > 0;
}

var func_122()
{
	return Global_1312854;
}

int func_123()
{
	if (!unk_0x3A711520F83BAE98())
	{
		return Global_90456.f_44 == 1;
	}
	return 0;
}

int func_124()
{
	func_44();
	if (Global_3128[Global_14453 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_125(int iParam0)
{
	return func_105(func_106(), iParam0);
}

int func_126(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_45();
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

int func_127(int iParam0)
{
	if (!func_27(iParam0))
	{
		return 7;
	}
	return Global_104555.f_7658.f_919[iParam0];
}

bool func_128(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_141())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = unk_0xC80D31E4B587871C(Global_104555.f_24965, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0xC80D31E4B587871C(Global_104555.f_24965.f_1, iVar0);
	}
	return bVar1;
}

int func_129(float fParam0, bool bParam1)
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
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		if (func_27(func_45()))
		{
			iVar36 = func_24();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (unk_0xC80D31E4B587871C(Global_104555.f_18544[iVar32 /*6*/], 2) && !unk_0xC80D31E4B587871C(Global_104555.f_18544[iVar32 /*6*/], 3))
				{
					func_130(iVar32, &Var0);
					fVar35 = unk_0xBE3C4023003180FC(unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0), Var0.f_6, 1);
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

void func_130(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_131(uParam1, "Abigail1", func_133(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_132(iParam0), 1, 0);
			break;
		
		case 1:
			func_131(uParam1, "Abigail2", func_133(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_132(iParam0), 1, 0);
			break;
		
		case 2:
			func_131(uParam1, "Barry1", func_133(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_132(iParam0), 1, 0);
			break;
		
		case 3:
			func_131(uParam1, "Barry2", func_133(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_132(iParam0), 1, 1);
			break;
		
		case 4:
			func_131(uParam1, "Barry3", func_133(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_132(iParam0), 0, 0);
			break;
		
		case 5:
			func_131(uParam1, "Barry3A", func_133(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		case 6:
			func_131(uParam1, "Barry3C", func_133(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		case 7:
			func_131(uParam1, "Barry4", func_133(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_132(iParam0), 0, 0);
			break;
		
		case 8:
			func_131(uParam1, "Dreyfuss1", func_133(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_132(iParam0), 0, 0);
			break;
		
		case 9:
			func_131(uParam1, "Epsilon1", func_133(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_132(iParam0), 0, 0);
			break;
		
		case 10:
			func_131(uParam1, "Epsilon2", func_133(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_132(iParam0), 1, 0);
			break;
		
		case 11:
			func_131(uParam1, "Epsilon3", func_133(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_132(iParam0), 0, 0);
			break;
		
		case 12:
			func_131(uParam1, "Epsilon4", func_133(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_132(iParam0), 0, 0);
			break;
		
		case 13:
			func_131(uParam1, "Epsilon5", func_133(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_132(iParam0), 1, 0);
			break;
		
		case 14:
			func_131(uParam1, "Epsilon6", func_133(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		case 15:
			func_131(uParam1, "Epsilon7", func_133(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_132(iParam0), 0, 0);
			break;
		
		case 16:
			func_131(uParam1, "Epsilon8", func_133(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_132(iParam0), 1, 0);
			break;
		
		case 17:
			func_131(uParam1, "Extreme1", func_133(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		case 18:
			func_131(uParam1, "Extreme2", func_133(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		case 19:
			func_131(uParam1, "Extreme3", func_133(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		case 20:
			func_131(uParam1, "Extreme4", func_133(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_132(iParam0), 0, 0);
			break;
		
		case 21:
			func_131(uParam1, "Fanatic1", func_133(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_132(iParam0), 1, 0);
			break;
		
		case 22:
			func_131(uParam1, "Fanatic2", func_133(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_132(iParam0), 1, 0);
			break;
		
		case 23:
			func_131(uParam1, "Fanatic3", func_133(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_132(iParam0), 0, 1);
			break;
		
		case 24:
			func_131(uParam1, "Hao1", func_133(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_132(iParam0), 0, 1);
			break;
		
		case 25:
			func_131(uParam1, "Hunting1", func_133(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		case 26:
			func_131(uParam1, "Hunting2", func_133(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		case 27:
			func_131(uParam1, "Josh1", func_133(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_132(iParam0), 1, 0);
			break;
		
		case 28:
			func_131(uParam1, "Josh2", func_133(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_132(iParam0), 1, 1);
			break;
		
		case 29:
			func_131(uParam1, "Josh3", func_133(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_132(iParam0), 1, 1);
			break;
		
		case 30:
			func_131(uParam1, "Josh4", func_133(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_132(iParam0), 1, 0);
			break;
		
		case 31:
			func_131(uParam1, "Maude1", func_133(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		case 32:
			func_131(uParam1, "Minute1", func_133(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		case 33:
			func_131(uParam1, "Minute2", func_133(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		case 34:
			func_131(uParam1, "Minute3", func_133(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		case 35:
			func_131(uParam1, "MrsPhilips1", func_133(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_132(iParam0), 0, 0);
			break;
		
		case 36:
			func_131(uParam1, "MrsPhilips2", func_133(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_132(iParam0), 0, 0);
			break;
		
		case 37:
			func_131(uParam1, "Nigel1", func_133(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_132(iParam0), 1, 0);
			break;
		
		case 38:
			func_131(uParam1, "Nigel1A", func_133(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_132(iParam0), 1, 1);
			break;
		
		case 39:
			func_131(uParam1, "Nigel1B", func_133(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_132(iParam0), 1, 1);
			break;
		
		case 40:
			func_131(uParam1, "Nigel1C", func_133(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_132(iParam0), 1, 1);
			break;
		
		case 41:
			func_131(uParam1, "Nigel1D", func_133(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_132(iParam0), 1, 1);
			break;
		
		case 42:
			func_131(uParam1, "Nigel2", func_133(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_132(iParam0), 1, 1);
			break;
		
		case 43:
			func_131(uParam1, "Nigel3", func_133(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_132(iParam0), 1, 1);
			break;
		
		case 44:
			func_131(uParam1, "Omega1", func_133(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_132(iParam0), 0, 0);
			break;
		
		case 45:
			func_131(uParam1, "Omega2", func_133(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_132(iParam0), 0, 0);
			break;
		
		case 46:
			func_131(uParam1, "Paparazzo1", func_133(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		case 47:
			func_131(uParam1, "Paparazzo2", func_133(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		case 48:
			func_131(uParam1, "Paparazzo3", func_133(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_132(iParam0), 0, 0);
			break;
		
		case 49:
			func_131(uParam1, "Paparazzo3A", func_133(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		case 50:
			func_131(uParam1, "Paparazzo3B", func_133(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		case 51:
			func_131(uParam1, "Paparazzo4", func_133(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_132(iParam0), 0, 0);
			break;
		
		case 52:
			func_131(uParam1, "Rampage1", func_133(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_132(iParam0), 0, 0);
			break;
		
		case 54:
			func_131(uParam1, "Rampage3", func_133(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_132(iParam0), 1, 0);
			break;
		
		case 55:
			func_131(uParam1, "Rampage4", func_133(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_132(iParam0), 1, 0);
			break;
		
		case 56:
			func_131(uParam1, "Rampage5", func_133(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_132(iParam0), 0, 0);
			break;
		
		case 53:
			func_131(uParam1, "Rampage2", func_133(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_132(iParam0), 1, 0);
			break;
		
		case 57:
			func_131(uParam1, "TheLastOne", func_133(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		case 58:
			func_131(uParam1, "Tonya1", func_133(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		case 59:
			func_131(uParam1, "Tonya2", func_133(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		case 60:
			func_131(uParam1, "Tonya3", func_133(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		case 61:
			func_131(uParam1, "Tonya4", func_133(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		case 62:
			func_131(uParam1, "Tonya5", func_133(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_132(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_131(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_132(int iParam0)
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

struct<2> func_133(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_134(iParam0) };
	if (unk_0xAB019B170BF1309C(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_134(int iParam0)
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

int func_135()
{
	var uVar0;
	
	if (Global_25383)
	{
		if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
		{
			uVar0 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
			if (unk_0xB8DE76287EDC4957(uVar0, 0))
			{
				if (!unk_0x3AB6A1A9084FB0A4(unk_0x317536BCEA8FA6B0(iVar0, 0, 0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
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
	return Global_104273 > 0;
}

int func_138()
{
	if (Global_89900 != -1)
	{
		return 1;
	}
	return 0;
}

int func_139()
{
	if (Global_89900 != -1)
	{
		return unk_0xC80D31E4B587871C(Global_83766[Global_89900 /*34*/].f_15, 20);
	}
	return 0;
}

int func_140()
{
	if (unk_0xB9D80B12FE4456A5())
	{
		if (unk_0x19E08ED08C79C477() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_141()
{
	var uVar0;
	
	if (unk_0x4CAC17F5502E6EEB())
	{
		if (unk_0xE9F0A7BEA240607F())
		{
			if (unk_0x9881A219FD811741())
			{
				unk_0xFA3CE529DBB66C85(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0x872F1C1F8587CCC7(&uVar0, 2);
				unk_0x872F1C1F8587CCC7(&uVar0, 4);
				unk_0x872F1C1F8587CCC7(&uVar0, 6);
				unk_0x872F1C1F8587CCC7(&Global_25, 2);
				unk_0x872F1C1F8587CCC7(&Global_25, 4);
				unk_0x872F1C1F8587CCC7(&Global_25, 6);
				unk_0xBFFF62F75445099D(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0x2E68557F22711FDA())
				{
					iVar0 = unk_0x496616BFA56C89EB(866);
					unk_0x872F1C1F8587CCC7(&iVar0, 0);
					unk_0xDDFB38BD8B59BBB9(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_143074 == 2)
	{
		return 1;
	}
	else if (Global_143074 == 3)
	{
		return 0;
	}
	if (unk_0x2E68557F22711FDA())
	{
		if (unk_0xC80D31E4B587871C(unk_0x496616BFA56C89EB(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_142()
{
	int iVar0;
	
	if (iLocal_48)
	{
		unk_0xE30CF11C0EE14316(&uLocal_295);
		unk_0xE30CF11C0EE14316(&uLocal_296);
		unk_0x9CE0B3CF7C1648DD(unk_0x9EB17624F44A8DA4(), 0);
		unk_0x94BD6F0436473406(1f);
		unk_0x2F07051DB79A59FB();
		unk_0xBD88542932C8F3A2(unk_0x9EB17624F44A8DA4());
		unk_0x8A4311269B560FDF(418.2996f, 2650.597f, 42.84723f, 297.8981f, 2617.968f, 53.6412f, 49.6875f, 1);
		unk_0x3CDDC4760DBA4651();
		unk_0x4C15495E88D71C61(Vector(43.4932f, 2612.694f, 328.0555f) - Vector(10f, 10f, 10f), Vector(43.4932f, 2612.694f, 328.0555f) + Vector(10f, 10f, 10f), 1, 1);
		iVar0 = 0;
		while (iVar0 < iLocal_226)
		{
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_226[iVar0]))
			{
				unk_0x771A86309E0CA47B(iLocal_226[iVar0], 0);
				if (unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
				{
					unk_0x4E0F66531BFA3A51(iLocal_226[iVar0]);
					unk_0xE9B3D12A64CC7C1A(iLocal_226[iVar0], 1);
				}
			}
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_222))
			{
				unk_0xAE01EF4BC84AFE7C(iLocal_222, 317, 1);
				unk_0x771A86309E0CA47B(iLocal_222, 0);
				if (!unk_0xB8DE76287EDC4957(iLocal_236, 0))
				{
					if (unk_0xA8D0477084E86A92(iLocal_222, iLocal_236, 0))
					{
						unk_0xC7ED915AB706A5D8(iLocal_236, 1);
					}
				}
			}
			if (!unk_0x3AB6A1A9084FB0A4(iLocal_223))
			{
				unk_0xAE01EF4BC84AFE7C(iLocal_223, 317, 1);
				unk_0x771A86309E0CA47B(iLocal_223, 0);
				if (!unk_0xB8DE76287EDC4957(iLocal_236, 0))
				{
					if (unk_0xA8D0477084E86A92(iLocal_223, iLocal_236, 0))
					{
						unk_0xC7ED915AB706A5D8(iLocal_236, 1);
					}
				}
			}
			iVar0++;
		}
	}
	func_143(-1);
	unk_0x96A3D9A8A4C7AFD4();
}

void func_143(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_33();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_81())
	{
		func_147(iParam0);
		unk_0x218409883979C46E(0, 0);
		Global_104546 = unk_0x53C562FD2B9E3AB0();
		func_146(30000);
		StringCopy(&cVar0, func_145(Global_104544, 1), 64);
		if (func_32(Global_104544) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_104543, 64);
		}
		unk_0xACD55E1AD7FB6CB0(&cVar0, Global_104541, (unk_0x53C562FD2B9E3AB0() - Global_104542), 0);
	}
	else if (unk_0xC80D31E4B587871C(Global_104551, 0) && Global_104555.f_24965.f_2 < 3)
	{
		unk_0x0EE72DB1CD8A3B86(&Global_104551, 0);
	}
	func_144(&Global_25292);
	Global_104545 = 0;
	func_88(-1);
}

void func_144(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_35823)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_35822 = 0;
	Global_35824 = 0;
	Global_35861 = 15;
	Global_55900 = 0;
	Global_55901 = 0;
}

char* func_145(int iParam0, bool bParam1)
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

void func_146(int iParam0)
{
	Global_36412 = (unk_0x53C562FD2B9E3AB0() + iParam0);
}

void func_147(int iParam0)
{
	func_148(iParam0, 0, func_153(iParam0));
}

void func_148(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_106();
	func_151(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_150(iParam0, &uVar0);
	Var1 = { func_149(&uVar0) };
}

struct<16> func_149(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_100(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_99(*uParam0);
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
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_101(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_104(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_102(*uParam0), 64);
	return Var0;
}

void func_150(int iParam0, var uParam1)
{
	Global_104555.f_24965.f_43[iParam0] = *uParam1;
}

void func_151(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_102(*uParam0);
	iVar1 = func_104(*uParam0);
	iVar2 = func_101(*uParam0);
	iVar3 = func_100(*uParam0);
	iVar4 = func_99(*uParam0);
	iVar5 = func_98(*uParam0);
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
	iVar6 = func_97(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_97(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_152(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_152(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_112(uParam0, iParam1);
	func_111(uParam0, iParam2);
	func_110(uParam0, iParam3);
	func_108(uParam0, iParam5);
	func_109(uParam0, iParam4);
	func_107(uParam0, iParam6);
}

int func_153(int iParam0)
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

