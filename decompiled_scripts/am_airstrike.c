#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	float fLocal_15 = 0f;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
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
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	bool bLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	bool bLocal_57 = 0;
	int iLocal_58 = 0;
	struct<3> Local_59 = { 0, 0, 0 } ;
	struct<3> Local_62 = { 0, 0, 0 } ;
	float fLocal_65 = 0f;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 16;
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
	int iLocal_237 = 0;
	int iLocal_238 = 0;
	int iLocal_239 = 0;
	var uLocal_240 = 0;
	struct<57> Local_241 = { 0, 0, 0, -1281684762, 0, 0, -163714847, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<5> Local_298[2];
	struct<20> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1 } ;
#endregion

void __EntryFunction__()
{
	iLocal_0 = 3;
	iLocal_3 = 1;
	iLocal_4 = 134;
	iLocal_5 = 134;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 134;
	iLocal_10 = 1;
	iLocal_11 = 12;
	iLocal_12 = 12;
	fLocal_15 = 0.001f;
	sLocal_20 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	if (unk_0x1DAD7CE53BEE7710())
	{
		func_98(ScriptParam_0);
	}
	while (true)
	{
		func_97();
		if (func_87())
		{
			func_82();
		}
		if (unk_0x1DAD7CE53BEE7710())
		{
			func_81();
			switch (func_80(unk_0x044A481E863E2F6B()))
			{
				case 0:
					if (func_79() > 0)
					{
						Local_298[unk_0x044A481E863E2F6B() /*5*/] = 2;
					}
					break;
				
				case 2:
					if (func_79() == 3)
					{
						Local_298[unk_0x044A481E863E2F6B() /*5*/] = 3;
					}
					break;
				
				case 3:
					func_82();
					break;
			}
			if (unk_0xE9849174628A9C50())
			{
				switch (func_79())
				{
					case 0:
						Local_241.f_0 = 2;
						break;
					
					case 2:
						func_1();
						break;
					
					case 3:
						break;
					}
				}
		}
	}
}

void func_1()
{
	switch (Local_241.f_1)
	{
		case 0:
			func_25();
			break;
		
		case 1:
			func_24();
			break;
	}
	if (Local_241.f_2.f_2 == 3 && iLocal_56 == 0)
	{
		Local_241.f_0 = 3;
	}
	func_17();
	if (Local_241.f_53 && Local_241.f_50 < 10)
	{
		func_12();
	}
	if (Local_241.f_50 >= 10)
	{
		if (!func_11(&uLocal_68))
		{
			func_10(&uLocal_68, 0, 0);
		}
		else if (func_9(&uLocal_68, 10000, 0))
		{
			Local_241.f_0 = 3;
		}
	}
	if (func_8())
	{
		Local_241.f_0 = 3;
	}
	if (Local_241.f_55 == 1)
	{
		if (!Local_241.f_56)
		{
			if (((!unk_0x11A809BBE3889742() || func_7("AIRSTRIKE_1")) || func_7("AIRSTRIKE_2")) || func_7("AIRSTRIKE_4"))
			{
				func_6("AIRSTRIKE_3", -1);
				Local_241.f_56 = 1;
			}
		}
	}
	if (bLocal_51)
	{
		if (!func_3(unk_0x1788E93557766241(), 1))
		{
			Local_241.f_0 = 3;
		}
	}
	else if (func_3(unk_0x1788E93557766241(), 1) || func_2())
	{
		Local_241.f_0 = 3;
	}
	if (unk_0xEC35DAD55FA4EEF2())
	{
		Local_241.f_0 = 3;
	}
}

bool func_2()
{
	return unk_0x889D01384B54BCE3(Global_1583725[unk_0x1788E93557766241() /*334*/].f_39.f_18, 0);
}

int func_3(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_4(iParam0))
		{
			return 1;
		}
	}
	if (Global_1583725[iParam0 /*334*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_4(int iParam0)
{
	return func_5(iParam0);
}

bool func_5(int iParam0)
{
	return unk_0x889D01384B54BCE3(Global_1583725[iParam0 /*334*/].f_13.f_1, 0);
}

void func_6(char* sParam0, int iParam1)
{
	unk_0x5B4A49EA799C667F(sParam0);
	unk_0x644558F3AB755120(0, 0, 1, iParam1);
}

bool func_7(char* sParam0)
{
	unk_0x38DB30583B2DE025(sParam0);
	return unk_0x2DB019D515966DF9(0);
}

bool func_8()
{
	return Global_1312416;
}

int func_9(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_10(uParam0, bParam2, 0);
	if (unk_0x1DAD7CE53BEE7710() && !bParam2)
	{
		if (unk_0x045E73D0141F51B4(unk_0xF001CC441E445DFD(unk_0x519586565311459B(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x045E73D0141F51B4(unk_0xF001CC441E445DFD(unk_0x09560C7DE2A384BD(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_10(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x1DAD7CE53BEE7710() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x519586565311459B();
			}
			else
			{
				*uParam0 = unk_0x4EAB1171B13C220B();
			}
		}
		else
		{
			*uParam0 = unk_0x09560C7DE2A384BD();
		}
		uParam0->f_1 = 1;
	}
}

bool func_11(var uParam0)
{
	return uParam0->f_1;
}

void func_12()
{
	struct<3> Var0;
	struct<3> Var3;
	int iVar6;
	
	iVar6 = 200;
	if (func_16(Local_62))
	{
		if (func_14(Local_241.f_2))
		{
			Local_62 = { unk_0xBF8499F46AD9093A(unk_0x8CB435AA1E25DA51(Local_241.f_2), 1) };
			Local_62.f_2 = (Local_62.f_2 - 5f);
		}
	}
	switch (Local_241.f_50)
	{
		case 0:
			if (!func_11(&(Local_241.f_51)))
			{
				if (!unk_0x889D01384B54BCE3(uLocal_240, Local_241.f_50))
				{
					Var0 = { Local_298[unk_0x044A481E863E2F6B() /*5*/].f_2 };
					Var0.f_2 = Local_62.f_2;
					Var3 = { Local_298[unk_0x044A481E863E2F6B() /*5*/].f_2 };
					Var3 = { Var3 + Vector(0f, 0.1f, 0.1f) };
					unk_0x21B0D803C4C9C45E(Var3 + Vector(10f, 0f, 0f), &(Var3.f_2), 0);
					Var3.f_2 = (Var3.f_2 - 25f);
					unk_0x241E862E11F993DB(Var0, Var3, iVar6, 1, joaat("weapon_airstrike_rocket"), unk_0xA16EC202D9D35357(), 1, 0, -1f, unk_0xA16EC202D9D35357(), 1, 1, 0, 0);
					func_10(&(Local_241.f_51), 0, 0);
					iLocal_56 = 1;
					unk_0xD0E2BFCE93AE3ABD(&uLocal_240, Local_241.f_50);
				}
			}
			else if (func_9(&(Local_241.f_51), 750, 0))
			{
				func_13(&(Local_241.f_51));
				Local_241.f_50++;
			}
			break;
		
		case 1:
			if (!func_11(&(Local_241.f_51)))
			{
				if (!unk_0x889D01384B54BCE3(uLocal_240, Local_241.f_50))
				{
					Var0 = { Local_298[unk_0x044A481E863E2F6B() /*5*/].f_2 + Vector(0f, 5f, 5f) };
					Var0.f_2 = Local_62.f_2;
					Var3 = { Local_298[unk_0x044A481E863E2F6B() /*5*/].f_2 + Vector(0f, 5f, 5f) };
					Var3 = { Var3 + Vector(0f, 0.1f, 0.1f) };
					unk_0x21B0D803C4C9C45E(Var3 + Vector(10f, 0f, 0f), &(Var3.f_2), 0);
					Var3.f_2 = (Var3.f_2 - 25f);
					unk_0x241E862E11F993DB(Var0, Var3, iVar6, 1, joaat("weapon_airstrike_rocket"), unk_0x7A16A8A755F44481(Local_241.f_2.f_3), 1, 0, -1f, unk_0xA16EC202D9D35357(), 1, 0, 0, 0);
					func_10(&(Local_241.f_51), 0, 0);
					unk_0xD0E2BFCE93AE3ABD(&uLocal_240, Local_241.f_50);
				}
			}
			else if (func_9(&(Local_241.f_51), 500, 0))
			{
				func_13(&(Local_241.f_51));
				Local_241.f_50++;
			}
			break;
		
		case 2:
			if (!func_11(&(Local_241.f_51)))
			{
				if (!unk_0x889D01384B54BCE3(uLocal_240, Local_241.f_50))
				{
					Var0 = { Local_298[unk_0x044A481E863E2F6B() /*5*/].f_2 + Vector(0f, -5f, -5f) };
					Var0.f_2 = Local_62.f_2;
					Var3 = { Local_298[unk_0x044A481E863E2F6B() /*5*/].f_2 + Vector(0f, -5f, -5f) };
					Var3 = { Var3 + Vector(0f, 0.1f, 0.1f) };
					unk_0x21B0D803C4C9C45E(Var3 + Vector(10f, 0f, 0f), &(Var3.f_2), 0);
					Var3.f_2 = (Var3.f_2 - 25f);
					unk_0x241E862E11F993DB(Var0, Var3, iVar6, 1, joaat("weapon_airstrike_rocket"), unk_0x7A16A8A755F44481(Local_241.f_2.f_3), 1, 0, -1f, unk_0xA16EC202D9D35357(), 1, 0, 0, 0);
					func_10(&(Local_241.f_51), 0, 0);
					unk_0xD0E2BFCE93AE3ABD(&uLocal_240, Local_241.f_50);
				}
			}
			else if (func_9(&(Local_241.f_51), 500, 0))
			{
				func_13(&(Local_241.f_51));
				Local_241.f_50++;
			}
			break;
		
		case 3:
			if (!func_11(&(Local_241.f_51)))
			{
				if (!unk_0x889D01384B54BCE3(uLocal_240, Local_241.f_50))
				{
					Var0 = { Local_298[unk_0x044A481E863E2F6B() /*5*/].f_2 + Vector(0f, 5f, -5f) };
					Var0.f_2 = Local_62.f_2;
					Var3 = { Local_298[unk_0x044A481E863E2F6B() /*5*/].f_2 + Vector(0f, 5f, -5f) };
					Var3 = { Var3 + Vector(0f, 0.1f, 0.1f) };
					unk_0x21B0D803C4C9C45E(Var3 + Vector(10f, 0f, 0f), &(Var3.f_2), 0);
					Var3.f_2 = (Var3.f_2 - 25f);
					unk_0x241E862E11F993DB(Var0, Var3, iVar6, 1, joaat("weapon_airstrike_rocket"), unk_0x7A16A8A755F44481(Local_241.f_2.f_3), 1, 0, -1f, unk_0xA16EC202D9D35357(), 1, 0, 0, 0);
					func_10(&(Local_241.f_51), 0, 0);
					unk_0xD0E2BFCE93AE3ABD(&uLocal_240, Local_241.f_50);
				}
			}
			else if (func_9(&(Local_241.f_51), 750, 0))
			{
				func_13(&(Local_241.f_51));
				Local_241.f_50++;
			}
			break;
		
		case 4:
			if (!func_11(&(Local_241.f_51)))
			{
				if (!unk_0x889D01384B54BCE3(uLocal_240, Local_241.f_50))
				{
					Var0 = { Local_298[unk_0x044A481E863E2F6B() /*5*/].f_2 + Vector(0f, -5f, 5f) };
					Var0.f_2 = Local_62.f_2;
					Var3 = { Local_298[unk_0x044A481E863E2F6B() /*5*/].f_2 + Vector(0f, -5f, 5f) };
					Var3 = { Var3 + Vector(0f, 0.1f, 0.1f) };
					unk_0x21B0D803C4C9C45E(Var3 + Vector(10f, 0f, 0f), &(Var3.f_2), 0);
					Var3.f_2 = (Var3.f_2 - 25f);
					unk_0x241E862E11F993DB(Var0, Var3, iVar6, 1, joaat("weapon_airstrike_rocket"), unk_0x7A16A8A755F44481(Local_241.f_2.f_3), 1, 0, -1f, unk_0xA16EC202D9D35357(), 1, 0, 0, 0);
					func_10(&(Local_241.f_51), 0, 0);
					unk_0xD0E2BFCE93AE3ABD(&uLocal_240, Local_241.f_50);
				}
			}
			else if (func_9(&(Local_241.f_51), 500, 0))
			{
				func_13(&(Local_241.f_51));
				Local_241.f_50++;
			}
			break;
		
		case 5:
			if (!func_11(&(Local_241.f_51)))
			{
				if (!unk_0x889D01384B54BCE3(uLocal_240, Local_241.f_50))
				{
					Var0 = { Local_298[unk_0x044A481E863E2F6B() /*5*/].f_2 + Vector(0f, 5f, 10f) };
					Var0.f_2 = Local_62.f_2;
					Var3 = { Local_298[unk_0x044A481E863E2F6B() /*5*/].f_2 + Vector(0f, 5f, 10f) };
					Var3 = { Var3 + Vector(0f, 0.1f, 0.1f) };
					unk_0x21B0D803C4C9C45E(Var3 + Vector(10f, 0f, 0f), &(Var3.f_2), 0);
					Var3.f_2 = (Var3.f_2 - 25f);
					unk_0x241E862E11F993DB(Var0, Var3, iVar6, 1, joaat("weapon_airstrike_rocket"), unk_0x7A16A8A755F44481(Local_241.f_2.f_3), 1, 0, -1f, unk_0xA16EC202D9D35357(), 1, 0, 0, 0);
					func_10(&(Local_241.f_51), 0, 0);
					unk_0xD0E2BFCE93AE3ABD(&uLocal_240, Local_241.f_50);
				}
			}
			else if (func_9(&(Local_241.f_51), 750, 0))
			{
				func_13(&(Local_241.f_51));
				Local_241.f_50++;
			}
			break;
		
		case 6:
			if (!func_11(&(Local_241.f_51)))
			{
				if (!unk_0x889D01384B54BCE3(uLocal_240, Local_241.f_50))
				{
					Var0 = { Local_298[unk_0x044A481E863E2F6B() /*5*/].f_2 + Vector(0f, 10f, 10f) };
					Var0.f_2 = Local_62.f_2;
					Var3 = { Local_298[unk_0x044A481E863E2F6B() /*5*/].f_2 + Vector(0f, 10f, 10f) };
					Var3 = { Var3 + Vector(0f, 0.1f, 0.1f) };
					unk_0x21B0D803C4C9C45E(Var3 + Vector(10f, 0f, 0f), &(Var3.f_2), 0);
					Var3.f_2 = (Var3.f_2 - 25f);
					unk_0x241E862E11F993DB(Var0, Var3, iVar6, 1, joaat("weapon_airstrike_rocket"), unk_0x7A16A8A755F44481(Local_241.f_2.f_3), 1, 0, -1f, unk_0xA16EC202D9D35357(), 1, 0, 0, 0);
					func_10(&(Local_241.f_51), 0, 0);
					unk_0xD0E2BFCE93AE3ABD(&uLocal_240, Local_241.f_50);
				}
			}
			else if (func_9(&(Local_241.f_51), 500, 0))
			{
				func_13(&(Local_241.f_51));
				Local_241.f_50++;
			}
			break;
		
		case 7:
			if (!func_11(&(Local_241.f_51)))
			{
				if (!unk_0x889D01384B54BCE3(uLocal_240, Local_241.f_50))
				{
					Var0 = { Local_298[unk_0x044A481E863E2F6B() /*5*/].f_2 + Vector(0f, -10f, -10f) };
					Var0.f_2 = Local_62.f_2;
					Var3 = { Local_298[unk_0x044A481E863E2F6B() /*5*/].f_2 + Vector(0f, -10f, -10f) };
					Var3 = { Var3 + Vector(0f, 0.1f, 0.1f) };
					unk_0x21B0D803C4C9C45E(Var3 + Vector(10f, 0f, 0f), &(Var3.f_2), 0);
					Var3.f_2 = (Var3.f_2 - 25f);
					unk_0x241E862E11F993DB(Var0, Var3, iVar6, 1, joaat("weapon_airstrike_rocket"), unk_0x7A16A8A755F44481(Local_241.f_2.f_3), 1, 0, -1f, unk_0xA16EC202D9D35357(), 1, 0, 0, 0);
					func_10(&(Local_241.f_51), 0, 0);
					unk_0xD0E2BFCE93AE3ABD(&uLocal_240, Local_241.f_50);
				}
			}
			else if (func_9(&(Local_241.f_51), 500, 0))
			{
				func_13(&(Local_241.f_51));
				Local_241.f_50++;
			}
			break;
		
		case 8:
			if (!func_11(&(Local_241.f_51)))
			{
				if (!unk_0x889D01384B54BCE3(uLocal_240, Local_241.f_50))
				{
					Var0 = { Local_298[unk_0x044A481E863E2F6B() /*5*/].f_2 + Vector(0f, 10f, -10f) };
					Var0.f_2 = Local_62.f_2;
					Var3 = { Local_298[unk_0x044A481E863E2F6B() /*5*/].f_2 + Vector(0f, 10f, -10f) };
					Var3 = { Var3 + Vector(0f, 0.1f, 0.1f) };
					unk_0x21B0D803C4C9C45E(Var3 + Vector(10f, 0f, 0f), &(Var3.f_2), 0);
					Var3.f_2 = (Var3.f_2 - 25f);
					unk_0x241E862E11F993DB(Var0, Var3, iVar6, 1, joaat("weapon_airstrike_rocket"), unk_0x7A16A8A755F44481(Local_241.f_2.f_3), 1, 0, -1f, unk_0xA16EC202D9D35357(), 1, 0, 0, 0);
					func_10(&(Local_241.f_51), 0, 0);
					unk_0xD0E2BFCE93AE3ABD(&uLocal_240, Local_241.f_50);
				}
			}
			else if (func_9(&(Local_241.f_51), 500, 0))
			{
				func_13(&(Local_241.f_51));
				Local_241.f_50++;
			}
			break;
		
		case 9:
			if (!func_11(&(Local_241.f_51)))
			{
				if (!unk_0x889D01384B54BCE3(uLocal_240, Local_241.f_50))
				{
					Var0 = { Local_298[unk_0x044A481E863E2F6B() /*5*/].f_2 + Vector(0f, -10f, 10f) };
					Var0.f_2 = Local_62.f_2;
					Var3 = { Local_298[unk_0x044A481E863E2F6B() /*5*/].f_2 + Vector(0f, -10f, 10f) };
					Var3 = { Var3 + Vector(0f, 0.1f, 0.1f) };
					unk_0x21B0D803C4C9C45E(Var3 + Vector(10f, 0f, 0f), &(Var3.f_2), 0);
					Var3.f_2 = (Var3.f_2 - 25f);
					unk_0x241E862E11F993DB(Var0, Var3, iVar6, 1, joaat("weapon_airstrike_rocket"), unk_0x7A16A8A755F44481(Local_241.f_2.f_3), 1, 0, -1f, unk_0xA16EC202D9D35357(), 1, 0, 0, 0);
					Local_241.f_50++;
					iLocal_56 = 0;
					unk_0xD0E2BFCE93AE3ABD(&uLocal_240, Local_241.f_50);
				}
			}
			break;
	}
}

void func_13(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_14(var uParam0)
{
	if (unk_0x86CB59A6776A7C27(uParam0))
	{
		return !func_15(unk_0x8CB435AA1E25DA51(uParam0));
	}
	return 0;
}

int func_15(int iParam0)
{
	if (unk_0x538DF9E5B1DF01EB(uParam0))
	{
		if (unk_0xE44A580B551C3645(iParam0))
		{
			return 1;
		}
		else if (!unk_0xECFECDAD51A6184F(iParam0, 0))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_16(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_17()
{
	var uVar0;
	struct<3> Var1;
	struct<3> Var4;
	int iVar7;
	int iVar8;
	
	if (func_14(Local_241.f_2))
	{
		uVar0 = unk_0x8CB435AA1E25DA51(Local_241.f_2);
		Var4 = { unk_0xBF8499F46AD9093A(uVar0, 1) };
	}
	if (!iLocal_58)
	{
		if (!func_16(Local_298[unk_0x044A481E863E2F6B() /*5*/].f_2))
		{
			Var1 = { Local_298[unk_0x044A481E863E2F6B() /*5*/].f_2 };
		}
		else if (func_23(unk_0x1788E93557766241(), 1, 1))
		{
			Var1 = { unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1) };
		}
	}
	if (bLocal_57)
	{
		if (!iLocal_58)
		{
			if (func_14(Local_241.f_2))
			{
				if (!unk_0x965556ACF6A83973(iVar0, Local_59, 75f, 75f, 1000f, 0, 1, 0))
				{
					fLocal_65 = unk_0x4970185D4CC64616(Var4, Var1, 0);
				}
				else
				{
					iLocal_58 = 1;
				}
			}
			else
			{
				iLocal_58 = 1;
			}
		}
		else
		{
			fLocal_65 = (fLocal_65 - 3.75f);
		}
		iVar7 = unk_0xF34EE736CF047844(fLocal_65);
		if (fLocal_65 <= 200f)
		{
			iVar8 = 6;
		}
		else
		{
			iVar8 = 1;
		}
		if (fLocal_65 >= 0f)
		{
			func_18(iVar7, "AIRSTRIKE_2", -1, iVar8, 2, 0, "AIRSTRIKE_6", 0, 0f, 0, 0, iVar8, 0, 0, 0, 0, 0, 0);
		}
	}
}

void func_18(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_22(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1328903.f_1 = 1;
		func_21(6, iVar0);
		Global_1328903.f_3370[iVar0] = iParam0;
		StringCopy(&(Global_1328903.f_3370.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1328903.f_3370.f_183[iVar0] = iParam3;
		Global_1328903.f_3370.f_172[iVar0] = iParam2;
		Global_1328903.f_3370.f_260[iVar0] = iParam4;
		Global_1328903.f_3370.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1328903.f_3370.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1328903.f_3370.f_443[iVar0] = iParam7;
		Global_1328903.f_3370.f_454[iVar0] = fParam8;
		Global_1328903.f_3370.f_497[iVar0] = iParam9;
		Global_1328903.f_3370.f_508[iVar0] = iParam10;
		Global_1328903.f_3370.f_205[iVar0] = iParam11;
		Global_1328903.f_3370.f_216[iVar0] = iParam12;
		Global_1328903.f_3370.f_227[iVar0] = iParam13;
		Global_1328903.f_3370.f_238[iVar0] = iParam14;
		Global_1328903.f_3370.f_249[iVar0] = iParam15;
		Global_1328903.f_3370.f_519[iVar0] = iParam16;
		Global_1328903.f_3370.f_530[iVar0] = iParam17;
		if (iParam15 == 4 && func_20())
		{
			Global_1328903.f_941 = 1;
		}
		if (unk_0xF6BAF9F0C2863FFE())
		{
			iVar2 = 0;
			unk_0x8C31DEE1FBBA2653(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1328903.f_945 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1328903.f_944 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1328903.f_941 = 1;
			}
			if (func_19())
			{
				Global_1328903.f_945 = 1;
			}
		}
	}
}

int func_19()
{
	int iVar0;
	var uVar1;
	
	if (unk_0xF6BAF9F0C2863FFE())
	{
		unk_0x8C31DEE1FBBA2653(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_20()
{
	if ((unk_0x9BB5B38BEC8FE00F() == 8 || unk_0x9BB5B38BEC8FE00F() == 9) || unk_0x9BB5B38BEC8FE00F() == 10)
	{
		return 1;
	}
	return 0;
}

void func_21(int iParam0, int iParam1)
{
	unk_0xD0E2BFCE93AE3ABD(&(Global_1328903.f_4506[iParam0]), iParam1);
}

bool func_22(int iParam0, int iParam1)
{
	return unk_0x889D01384B54BCE3(Global_1328903.f_4506[iParam0], iParam1);
}

int func_23(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (unk_0x38FA37FE3518BA38(iParam0))
	{
		if (bParam1)
		{
			if (!unk_0x2AF80829930084FD(iParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2422491.f_3[iVar0])
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

void func_24()
{
}

void func_25()
{
	struct<3> Var0;
	bool bVar3;
	
	func_77();
	if (unk_0x538DF9E5B1DF01EB(unk_0xA16EC202D9D35357()))
	{
		if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
		{
			if (!iLocal_55)
			{
				if (unk_0x16CDA1894CFE0781(joaat("cellphone_flashhand")) <= 0)
				{
					bVar3 = !func_76();
					unk_0x39272B2594E03395(unk_0xA16EC202D9D35357(), joaat("weapon_flare"), 1, bVar3, bVar3);
					unk_0xB4E8D4EA104CA059(unk_0xA16EC202D9D35357(), joaat("weapon_flare"), bVar3);
					iLocal_55 = 1;
				}
			}
			else if (unk_0xD79A4FBC0134F519(unk_0xA16EC202D9D35357(), joaat("weapon_flare"), 100f, &(Local_298[unk_0x044A481E863E2F6B() /*5*/].f_2), 1))
			{
				if (func_75(Local_298[unk_0x044A481E863E2F6B() /*5*/].f_2, 0f, 0f, 0f, 0))
				{
					Local_298[unk_0x044A481E863E2F6B() /*5*/].f_2 = { Var0 };
				}
				if (func_7("AIRSTRIKE_1"))
				{
					unk_0xFD1E0AEC770DAF2E(1);
				}
				if (!iLocal_54)
				{
					if (!func_74(Local_241.f_2.f_3))
					{
						if (func_14(Local_241.f_2))
						{
							func_73();
							unk_0x937785D9C1929236(unk_0x7A16A8A755F44481(Local_241.f_2.f_3));
							unk_0x0891776D0327B77A(unk_0x7A16A8A755F44481(Local_241.f_2.f_3), uLocal_48);
							unk_0xDC3ABF0F9634F1C8(unk_0x8CB435AA1E25DA51(Local_241.f_2), unk_0xF2DB717A73826179(50f));
							iLocal_54 = 1;
						}
					}
				}
			}
			else if (!iLocal_53)
			{
				if (!unk_0x11A809BBE3889742())
				{
					if (func_72(unk_0xA16EC202D9D35357()))
					{
						func_6("AIRSTRIKE_4", -1);
					}
					else
					{
						func_6("AIRSTRIKE_1", -1);
					}
					iLocal_53 = 1;
				}
			}
		}
	}
	func_49();
	func_26();
}

void func_26()
{
	var uVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	
	switch (Local_241.f_2.f_2)
	{
		case 0:
			func_48();
			break;
		
		case 1:
			func_48();
			break;
		
		case 2:
			if (func_14(Local_241.f_2))
			{
				bLocal_57 = true;
				uVar0 = unk_0x8CB435AA1E25DA51(Local_241.f_2);
				if (!unk_0x5660C8AFDD9C1721(uLocal_46))
				{
					uLocal_46 = unk_0xDF78B7F06503567E(uVar0);
					unk_0x2025496D9184D312(uLocal_46, 16);
					unk_0xFDA1FE98ECD75505(uLocal_46, "AIRSTRIKE_5");
					unk_0xAF9E05E1AFA9F45F(uLocal_46, 0);
				}
				else
				{
					unk_0xBA7FD1A3CC7A28A5(uLocal_46, unk_0x11E019C8F43ACC8A(unk_0xD1613577C809E98B(uVar0)));
				}
				if (!iLocal_52)
				{
					if (!func_16(Local_298[unk_0x044A481E863E2F6B() /*5*/].f_2))
					{
						Var7 = { Local_298[unk_0x044A481E863E2F6B() /*5*/].f_2 };
					}
					else
					{
						Var7 = { Local_59 };
					}
					if (unk_0x4970185D4CC64616(Var7, unk_0xBF8499F46AD9093A(uVar0, 1), 1) <= (60f * 5f))
					{
						unk_0x9DD03008A0F71F06(unk_0x8CB435AA1E25DA51(Local_241.f_2));
						iLocal_52 = 1;
					}
				}
				if (!iLocal_238)
				{
					if (!Local_241.f_54)
					{
						if (!func_74(Local_241.f_2.f_3))
						{
							if (!func_16(Local_298[unk_0x044A481E863E2F6B() /*5*/].f_2))
							{
								if (unk_0x4970185D4CC64616(func_47(unk_0x1788E93557766241()), unk_0xBF8499F46AD9093A(unk_0x8CB435AA1E25DA51(Local_241.f_2.f_3), 1), 0) <= 250f)
								{
									if (unk_0x4970185D4CC64616(Var7, unk_0xBF8499F46AD9093A(iVar0, 1), 1) >= (60f * 2.5f))
									{
										func_30(&uLocal_72, "CT_AUD", "MPCT_ASarr", 12, 0, 0, 0);
										iLocal_238 = 1;
									}
								}
							}
						}
					}
				}
				if (Local_241.f_50 < 10)
				{
					if (!Local_241.f_53)
					{
						if (!func_16(Local_298[unk_0x044A481E863E2F6B() /*5*/].f_2))
						{
							if (func_29() == 2)
							{
								if (!func_11(&uLocal_66))
								{
									func_10(&uLocal_66, 0, 0);
								}
								else if (func_9(&uLocal_66, 7500, 0))
								{
									Local_241.f_53 = 1;
								}
								Var1 = { Local_298[unk_0x044A481E863E2F6B() /*5*/].f_2 - Vector(1000f, 25f, 25f) };
								Var4 = { Local_298[unk_0x044A481E863E2F6B() /*5*/].f_2 + Vector(1000f, 25f, 25f) };
								Var1.f_2 = -200f;
								Var4.f_2 = 1500f;
								if (unk_0x965556ACF6A83973(iVar0, Local_298[unk_0x044A481E863E2F6B() /*5*/].f_2, 75f, 75f, 1000f, 0, 1, 0) && unk_0xFDD5856D25C0CEE2(Var1, Var4, joaat("weapon_flare"), 0))
								{
									Local_241.f_53 = 1;
								}
							}
							else if (func_29() == 1)
							{
								Local_241.f_53 = 1;
								Local_241.f_50 = 100;
							}
						}
						else if (unk_0x965556ACF6A83973(iVar0, Local_59, 75f, 75f, 1000f, 0, 1, 0))
						{
							Local_241.f_53 = 1;
							Local_241.f_50 = 100;
							Local_241.f_54 = 1;
							if (!iLocal_239)
							{
								func_30(&uLocal_72, "CT_AUD", "MPCT_ASflr", 12, 0, 0, 0);
								iLocal_239 = 1;
							}
						}
					}
				}
			}
			if (!func_14(Local_241.f_2) || func_74(Local_241.f_2.f_3))
			{
				func_27();
			}
			break;
		
		case 3:
			func_48();
			break;
	}
}

void func_27()
{
	var uVar0;
	
	if (!func_74(Local_241.f_2.f_3))
	{
		if (func_28(Local_241.f_2.f_3))
		{
			if (unk_0x428E17610BCE75C2(Local_241.f_2.f_3))
			{
				uVar0 = unk_0x7A16A8A755F44481(Local_241.f_2.f_3);
				unk_0x4C31C3561F937348(uVar0, 0);
			}
		}
	}
}

int func_28(var uParam0)
{
	if (unk_0x3D7D0EF6EB39605F(uParam0))
	{
		return 1;
	}
	if (unk_0xE9849174628A9C50())
	{
		unk_0x9B863F3140F59B7F(uParam0);
	}
	return 0;
}

int func_29()
{
	if (Local_241.f_55 == 1)
	{
		return Local_241.f_55;
	}
	else if (Local_241.f_55 == 2)
	{
		return Local_241.f_55;
	}
	if (!unk_0xCF993CC55171C8A0(Local_298[unk_0x044A481E863E2F6B() /*5*/].f_2 + Vector(0.5f, 0f, 0f)))
	{
		Local_241.f_55 = 1;
		return Local_241.f_55;
	}
	Local_241.f_55 = 2;
	return Local_241.f_55;
}

int func_30(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_46(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15700 = 0;
	Global_15702 = 0;
	Global_15707 = 0;
	Global_16684 = 0;
	Global_16686 = 0;
	Global_16690 = 0;
	Global_2621441 = 1;
	return func_31(sParam2, iParam3, 0);
}

int func_31(char* sParam0, int iParam1, bool bParam2)
{
	Global_15694 = 0;
	if (Global_15693 == 0 || Global_15695 == 2)
	{
		if (Global_15693 != 0)
		{
			if (iParam1 > Global_15695)
			{
				if (Global_15700 == 0)
				{
					unk_0x0D68C13151B68364(0);
					Global_14394.f_1 = 3;
					Global_15693 = 0;
					Global_15694 = 1;
					Global_15746 = 0;
					Global_15689 = 0;
					Global_15690 = 0;
					Global_15704 = 0;
					Global_15703 = 0;
					Global_14393 = 0;
				}
				else
				{
					func_45();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0xD47B332729054512())
		{
			return 0;
		}
		if (func_44(8, -1))
		{
			return 0;
		}
		Global_15769 = { Global_15763 };
		func_43();
		Global_14982 = { Global_15147 };
		Global_15699 = Global_15700;
		Global_15706 = Global_15707;
		Global_2621442 = Global_2621441;
		Global_15708 = { Global_15724 };
		Global_15701 = Global_15702;
		Global_16683 = Global_16684;
		Global_16691 = { Global_16697 };
		Global_16685 = Global_16686;
		Global_16687 = Global_16688;
		Global_16689 = Global_16690;
		Global_15312.f_370 = Global_16682;
		Global_15312.f_368 = Global_16680;
		Global_15312.f_369 = Global_16681;
		Global_15689 = Global_15690;
		if (Global_15699)
		{
			unk_0x29DB79DD4D939B38(&Global_2264, 20);
			unk_0x29DB79DD4D939B38(&Global_2265, 17);
			unk_0x29DB79DD4D939B38(&Global_2266, 0);
			if (bParam2)
			{
				func_36();
				if (Global_3069[Global_14394 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14394.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14360 == 1)
			{
				return 0;
			}
			if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
			{
				if (unk_0x15383F5EDB73B6BB(unk_0xA16EC202D9D35357()))
				{
					return 0;
				}
				if (func_35())
				{
					return 0;
				}
				if (unk_0xD7708B5D68A32CA0(unk_0xA16EC202D9D35357()))
				{
					return 0;
				}
				if (unk_0xEAABEAE1DB589285(unk_0xA16EC202D9D35357()))
				{
					return 0;
				}
				if (unk_0xD630B5603A1AED89(unk_0xA16EC202D9D35357()))
				{
					return 0;
				}
				if (unk_0x262A8E62D7274A0B(unk_0xA16EC202D9D35357(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_68325)
				{
					if (unk_0x21FF064386DC6A0A(unk_0xA16EC202D9D35357()))
					{
						return 0;
					}
					if (unk_0x6CA3764368FA4573(unk_0x1788E93557766241()))
					{
						return 0;
					}
					if (unk_0x24C7291CDBC023F1(unk_0xA16EC202D9D35357()))
					{
						return 0;
					}
					if (unk_0x8ECFC7D353C3F775(unk_0x1788E93557766241()))
					{
						return 0;
					}
				}
			}
			if (func_34())
			{
				return 0;
			}
			else
			{
				switch (Global_14394.f_1)
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
				if (unk_0x889D01384B54BCE3(Global_2264, 9))
				{
					return 0;
				}
			}
			func_33();
			Global_15703 = bParam2;
		}
		Global_15695 = iParam1;
		StringCopy(&Global_15312, sParam0, 24);
		Global_14559 = 0;
		func_32();
		return 1;
	}
	if (Global_15693 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15695 || iParam1 == Global_15695)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_45();
	}
	return 0;
}

void func_32()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14561[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x0D68C13151B68364(0);
	Global_15693 = 1;
}

void func_33()
{
	Global_15746 = Global_15745;
	Global_15740 = Global_15741;
	Global_15787 = { Global_15775 };
	Global_15793 = { Global_15781 };
	Global_15748 = Global_15747;
	Global_15817 = { Global_15799 };
	Global_15823 = { Global_15805 };
	Global_15829 = { Global_15811 };
	Global_15835 = { Global_15841 };
	Global_1579 = Global_1580;
	Global_1581 = Global_1582;
	Global_15704 = Global_15705;
	Global_15706 = Global_15707;
	Global_15708 = { Global_15724 };
	Global_15697 = Global_15698;
	Global_16709 = 0;
	Global_15742 = 0;
	Global_15743 = 0;
	unk_0x29DB79DD4D939B38(&Global_2265, 16);
}

int func_34()
{
	if (Global_14394.f_1 == 1 || Global_14394.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_35()
{
	int iVar0;
	int iVar1;
	
	if (Global_68325)
	{
		iVar0 = 0;
		unk_0xC00D643B16552C4D(unk_0xA16EC202D9D35357(), &iVar1, 1);
		if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x76F7F25F198388A1() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
	{
		if (unk_0xFCCDE3C4E11113D7(unk_0xA16EC202D9D35357(), 78, 1))
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

void func_36()
{
	if (func_42(14))
	{
		if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
		{
			if (unk_0xA609E58449080951(unk_0xA16EC202D9D35357()) == Global_97439.f_29795[0 /*29*/])
			{
				Global_14394 = 0;
			}
			else if (unk_0xA609E58449080951(unk_0xA16EC202D9D35357()) == Global_97439.f_29795[1 /*29*/])
			{
				Global_14394 = 1;
			}
			else if (unk_0xA609E58449080951(unk_0xA16EC202D9D35357()) == Global_97439.f_29795[2 /*29*/])
			{
				Global_14394 = 2;
			}
			else
			{
				Global_14394 = 0;
			}
		}
	}
	else
	{
		Global_14394 = func_37();
		if (Global_14394 == 145)
		{
			Global_14394 = 3;
		}
		if (Global_68325)
		{
			Global_14394 = 3;
		}
		if (Global_14394 > 3)
		{
			Global_14394 = 3;
		}
	}
}

var func_37()
{
	func_38();
	return Global_97439.f_1729.f_539.f_3213;
}

void func_38()
{
	int iVar0;
	
	if (unk_0x538DF9E5B1DF01EB(unk_0xA16EC202D9D35357()))
	{
		if (func_41(Global_97439.f_1729.f_539.f_3213) != unk_0xA609E58449080951(unk_0xA16EC202D9D35357()))
		{
			iVar0 = func_40(unk_0xA16EC202D9D35357());
			if (func_39(iVar0) && (!func_42(14) || Global_96391))
			{
				if (Global_97439.f_1729.f_539.f_3213 != iVar0 && func_39(Global_97439.f_1729.f_539.f_3213))
				{
					Global_97439.f_1729.f_539.f_3214 = Global_97439.f_1729.f_539.f_3213;
				}
				Global_97439.f_1729.f_539.f_3215 = iVar0;
				Global_97439.f_1729.f_539.f_3213 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_97439.f_1729.f_539.f_3213 != 145)
			{
				Global_97439.f_1729.f_539.f_3215 = Global_97439.f_1729.f_539.f_3213;
			}
			return;
		}
	}
	Global_97439.f_1729.f_539.f_3213 = 145;
}

bool func_39(int iParam0)
{
	return iParam0 < 3;
}

int func_40(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x538DF9E5B1DF01EB(iParam0))
	{
		iVar1 = unk_0xA609E58449080951(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_41(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_41(int iParam0)
{
	if (func_39(iParam0))
	{
		return Global_97439.f_29795[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_42(int iParam0)
{
	return Global_34915 == iParam0;
}

void func_43()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_14982[iVar0 /*10*/] = 0;
		StringCopy(&(Global_14982[iVar0 /*10*/].f_1), "", 24);
		Global_14982[iVar0 /*10*/].f_7 = 0;
		Global_14982[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_14982.f_161 = -99;
	Global_14982.f_162 = { 0f, 0f, 0f };
}

bool func_44(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1327587.f_203[iParam1];
			}
			break;
	}
	return unk_0x889D01384B54BCE3(Global_1327587.f_949, iParam0);
}

void func_45()
{
	unk_0xD01024485E7AB68C();
	Global_16704 = 0;
	if ((unk_0xBE029393332523D7() || Global_14394.f_1 == 9) || Global_14393 == 1)
	{
		unk_0x0D68C13151B68364(0);
		Global_15693 = 6;
		Global_14394.f_1 = 3;
		return;
	}
	if (unk_0xD47B332729054512())
	{
		unk_0x0D68C13151B68364(1);
		Global_15693 = 6;
		return;
	}
}

void func_46(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_15147 = { *uParam0 };
	Global_1580 = iParam1;
	StringCopy(&Global_15763, sParam2, 24);
	Global_16682 = uParam5;
	if (iParam3 == 0)
	{
		Global_16680 = 1;
		Global_16678 = 0;
	}
	else
	{
		Global_16680 = 0;
		Global_16678 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16681 = 1;
		Global_16679 = 0;
	}
	else
	{
		Global_16681 = 0;
		Global_16679 = 1;
	}
}

Vector3 func_47(int iParam0)
{
	return unk_0xBF8499F46AD9093A(unk_0xFF34D923BFB5E9FB(iParam0), 0);
}

void func_48()
{
	if (unk_0x5660C8AFDD9C1721(uLocal_46))
	{
		unk_0xB6FB9702660D84F6(&uLocal_46);
	}
}

void func_49()
{
	switch (Local_241.f_2.f_2)
	{
		case 0:
			func_71(1);
			break;
		
		case 1:
			if (func_50())
			{
				func_71(2);
			}
			break;
		
		case 2:
			if (!func_14(Local_241.f_2))
			{
				if (func_74(Local_241.f_2.f_3))
				{
					func_71(3);
				}
			}
			else if (func_74(Local_241.f_2.f_3))
			{
				func_71(3);
			}
			break;
		
		case 3:
			break;
	}
}

int func_50()
{
	if (!func_11(&uLocal_70))
	{
		func_10(&uLocal_70, 0, 0);
	}
	else if (func_70(Local_241.f_2.f_1) && func_70(Local_241.f_2.f_3.f_1))
	{
		if (func_9(&uLocal_70, 3000, 0))
		{
			if (func_54() && func_51())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_51()
{
	if ((!unk_0x86CB59A6776A7C27(Local_241.f_2.f_3) && func_70(Local_241.f_2.f_3.f_1)) && unk_0x86CB59A6776A7C27(Local_241.f_2))
	{
		if (func_14(Local_241.f_2))
		{
			if (func_53(&(Local_241.f_2.f_3), Local_241.f_2, 22, Local_241.f_2.f_3.f_1, -1, 1, 1, 1))
			{
				unk_0x2C4E82CF88213975(unk_0x7A16A8A755F44481(Local_241.f_2.f_3), 1);
				unk_0xA9465591B42213AE(unk_0x7A16A8A755F44481(Local_241.f_2.f_3), Global_1574081);
				unk_0x6F12B0DE0D6D7E2F(unk_0x7A16A8A755F44481(Local_241.f_2.f_3), 0);
				unk_0x2686393074E14730(unk_0x7A16A8A755F44481(Local_241.f_2.f_3), 1);
				func_52();
				unk_0x0891776D0327B77A(unk_0x7A16A8A755F44481(Local_241.f_2.f_3), uLocal_47);
				unk_0xDC3ABF0F9634F1C8(unk_0x8CB435AA1E25DA51(Local_241.f_2), unk_0xF2DB717A73826179(50f));
			}
		}
	}
	if (!unk_0x86CB59A6776A7C27(Local_241.f_2.f_3))
	{
		return 0;
	}
	unk_0xEA054561294AEC10(Local_241.f_2.f_3.f_1);
	return 1;
}

void func_52()
{
	if (!iLocal_49)
	{
		if (func_14(Local_241.f_2))
		{
			unk_0x6D98AA46076A68BE(&uLocal_47);
			unk_0x21A3553D368D632F(0, unk_0x8CB435AA1E25DA51(Local_241.f_2), 0, 0, Local_59 + Vector((50f + 5f), 0f, 0f), 4, 60f, 15f, -1f, unk_0x11E019C8F43ACC8A((50f + 5f)), 20);
			unk_0x21A3553D368D632F(0, unk_0x8CB435AA1E25DA51(Local_241.f_2), 0, 0, Local_241.f_2.f_14, 4, 60f, 25f, -1f, unk_0x11E019C8F43ACC8A((50f + 5f)), 20);
			unk_0x963BB7C99350D827(uLocal_47);
			iLocal_49 = 1;
		}
	}
}

int func_53(var uParam0, var uParam1, int iParam2, var uParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!unk_0x2013F7257D076F89(1))
	{
		return 0;
	}
	if (!unk_0x86CB59A6776A7C27(uParam1))
	{
		return 0;
	}
	if (!unk_0xECFECDAD51A6184F(unk_0x8CB435AA1E25DA51(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0x6F85672CC2397A57(unk_0x793482A351850A4F(unk_0x8CB435AA1E25DA51(uParam1), iParam2, uParam3, iParam4, iParam6, bParam5));
	if (unk_0x86CB59A6776A7C27(*uParam0))
	{
		unk_0x940C6B8BF42B190B(unk_0x7A16A8A755F44481(*uParam0), iParam7);
		if (unk_0xF5F2A2EAFEFB36D2(unk_0x7A16A8A755F44481(*uParam0)))
		{
			if (bParam5)
			{
				unk_0x59262222326E6883(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_54()
{
	struct<3> Var0;
	var uVar3;
	
	if (!unk_0x86CB59A6776A7C27(Local_241.f_2))
	{
		if (func_70(Local_241.f_2.f_1))
		{
			if (unk_0x3C840FC9E5B1E098("AIRSTRIKE_FLYOVER", 0))
			{
				func_66(&Var0, &uVar3);
				if (func_56(Var0, 6f, 1f, 1f, 5f, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0))
				{
					if (func_55(&(Local_241.f_2), Local_241.f_2.f_1, Var0, uVar3, 1, 1, 1, 0, 1, 1))
					{
						Local_241.f_2.f_14 = { Var0 * Vector(0f, -1f, -1f) };
						unk_0x542B8BF5C21F2470(unk_0x8CB435AA1E25DA51(Local_241.f_2), 2);
						unk_0x3CC3106305C40A28(unk_0x8CB435AA1E25DA51(Local_241.f_2), 0);
						unk_0xC3C39B8BA6AC5807(unk_0x8CB435AA1E25DA51(Local_241.f_2), 1);
						unk_0xC4A1ED516488C8FC(unk_0x8CB435AA1E25DA51(Local_241.f_2));
						unk_0x213AEEC6A495123F(unk_0x8CB435AA1E25DA51(Local_241.f_2), 60f);
						unk_0x6EBB9B0E214CCF0F(unk_0x8CB435AA1E25DA51(Local_241.f_2), 1, 1);
						unk_0x13DD29D9663E8105(unk_0x8CB435AA1E25DA51(Local_241.f_2), 1000);
						unk_0x940C6B8BF42B190B(unk_0x8CB435AA1E25DA51(Local_241.f_2), 0);
						unk_0x4083C1A376E65B51(unk_0x8CB435AA1E25DA51(Local_241.f_2), 3);
						unk_0x69EBDC8E0CF71F5D(unk_0x8CB435AA1E25DA51(Local_241.f_2));
						unk_0xEA054561294AEC10(Local_241.f_2.f_1);
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_55(var uParam0, var uParam1, struct<3> Param2, var uParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11)
{
	var uVar0;
	
	if (!unk_0x6B2CA196CD4C58D1(1))
	{
		return 0;
	}
	if (bParam11)
	{
		unk_0x597CB55BA0825820(Param2, 1f, 0, 0, 1, 1, 1);
	}
	uVar0 = unk_0x9BB6F54E415071A1(uParam1, Param2, uParam5, iParam7, iParam6);
	*uParam0 = unk_0x16645C5D9329E9F2(uVar0);
	if (unk_0x86CB59A6776A7C27(*uParam0))
	{
		unk_0x940C6B8BF42B190B(uVar0, iParam10);
		if (unk_0xF5F2A2EAFEFB36D2(uVar0))
		{
			if (bParam8)
			{
				unk_0x59262222326E6883(*uParam0, 1);
			}
			else
			{
				unk_0x59262222326E6883(*uParam0, 0);
			}
		}
		unk_0x4852ECC2C24A1A6C(uVar0, iParam9);
		return 1;
	}
	return 0;
}

int func_56(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17)
{
	Global_2404570 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0x233BBF4CAB603F14(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0xB04974FC0ED6E892(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0xB04974FC0ED6E892(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0x2F82A7CF030B6A1D(Param0, fParam5, 0))
		{
			return 0;
		}
	}
	Global_2404570++;
	if (bParam13)
	{
		if (unk_0xDBC834909DE748A2(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2404570++;
	if (fParam14 > 0f)
	{
		if (func_62(Param0, fParam14, 1, 1, bParam15, bParam17, 0, bParam15))
		{
			return 0;
		}
	}
	Global_2404570++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_57(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2404570++;
	return 1;
}

int func_57(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_23(unk_0x1788E93557766241(), 1, 1))
		{
			if (!unk_0xF4C685E933068D23())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0x4970185D4CC64616(func_47(unk_0x1788E93557766241()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0x7A98E0DD2E6FAB7A(Param0, fParam3))
					{
						return 1;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_23(iVar1, 1, 1))
		{
			if (!func_59(iVar1, 0) && unk_0x6871380D51134D0D(unk_0x1788E93557766241(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0x1788E93557766241()))
				{
					if ((func_58(iVar1) || !bParam10) && !Global_2414327[iVar1 /*255*/].f_253)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0xA2D6C1E24AF2E058(iVar1) == -1)
							{
								if (unk_0xA2D6C1E24AF2E058(iVar1) == unk_0xA2D6C1E24AF2E058(unk_0x1788E93557766241()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0xA2D6C1E24AF2E058(iVar1) != unk_0xA2D6C1E24AF2E058(unk_0x1788E93557766241()))) || unk_0xA2D6C1E24AF2E058(iVar1) == -1)
							{
								if (unk_0x4970185D4CC64616(func_47(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0x0FC608B6B212C0E5(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0xA2D6C1E24AF2E058(iVar1) != iParam8 || unk_0xA2D6C1E24AF2E058(iVar1) == -1)
						{
							if (unk_0x4970185D4CC64616(func_47(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0x0FC608B6B212C0E5(iVar1, Param0, fParam3))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_58(int iParam0)
{
	if (unk_0x14D5064869773C21(unk_0xFF34D923BFB5E9FB(iParam0)) || Global_2414327[iParam0 /*255*/].f_239)
	{
		return 1;
	}
	return 0;
}

bool func_59(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x1788E93557766241())
	{
		bVar0 = func_60(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1583725[iParam0 /*334*/].f_188 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x38FA37FE3518BA38(iParam0))
		{
			bVar0 = unk_0xA2D6C1E24AF2E058(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_60(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_61();
	}
	if (Global_1315869[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312723[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_61()
{
	return Global_1312729;
}

int func_62(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, var uParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && unk_0x1788E93557766241() != iVar1) || iParam8 == 0)
		{
			if (func_23(iVar1, bParam4, bParam5))
			{
				if (unk_0x6871380D51134D0D(unk_0x1788E93557766241(), iVar1))
				{
					if (!bParam7 || (!unk_0x2DE0B96E966FD817(unk_0xFF34D923BFB5E9FB(iVar1)) && func_58(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0xA2D6C1E24AF2E058(unk_0x1788E93557766241()) != unk_0xA2D6C1E24AF2E058(iVar1))) || unk_0xA2D6C1E24AF2E058(unk_0x1788E93557766241()) == -1)
						{
							if (((unk_0xA2D6C1E24AF2E058(unk_0x1788E93557766241()) == -1 && uParam9) && bParam6) && func_63(iVar1))
							{
							}
							else if (unk_0x538DF9E5B1DF01EB(unk_0xFF34D923BFB5E9FB(iVar1)))
							{
								if (unk_0x4970185D4CC64616(func_47(iVar1), Param0, 1) < fParam3)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_63(int iParam0)
{
	if (func_65(unk_0x1788E93557766241(), iParam0))
	{
		return 1;
	}
	Global_2446020 = { func_64(iParam0) };
	if (unk_0x765DD998E5AD03DC(&Global_2446020))
	{
		return 1;
	}
	return 0;
}

struct<13> func_64(var uParam0)
{
	struct<13> Var0;
	
	unk_0xBE9A3F2CD3728669(uParam0, &Var0, 13);
	return Var0;
}

int func_65(int iParam0, var uParam1)
{
	if (unk_0x70443014BEB6B15D())
	{
		Global_2446020 = { func_64(iParam0) };
		Global_2446033 = { func_64(uParam1) };
		if (unk_0x9A6FFB0772343488(&Global_2446020))
		{
			if (unk_0x9A6FFB0772343488(&Global_2446033))
			{
				unk_0x55FB44C9EE7B72D8(&Global_2445950, 35, &Global_2446020);
				unk_0x55FB44C9EE7B72D8(&Global_2445985, 35, &Global_2446033);
				if (Global_2445950 == Global_2445985)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_66(var uParam0, var uParam1)
{
	float fVar0;
	
	*uParam0 = { func_68(Local_59 + Vector(200f, 0f, 0f), 600f, 600f, (200f / 2f)) };
	fVar0 = unk_0x569813B1FAF7D289((*uParam0 - 600f), (uParam0->f_1 - 600f), (*uParam0 + 600f), (uParam0->f_1 + 600f));
	if (uParam0->f_2 < fVar0)
	{
		uParam0->f_2 = fVar0;
	}
	*uParam1 = func_67(*uParam0, Local_59);
}

var func_67(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	return unk_0x3C616B96B92181C5((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

Vector3 func_68(struct<3> Param0, float fParam3, float fParam4, float fParam5)
{
	struct<3> Var0;
	float fVar3;
	
	Var0 = { unk_0x1E253A1A83763D22(-1f, 1f), unk_0x1E253A1A83763D22(-1f, 1f), 0f };
	fVar3 = (fParam5 / 2f);
	Var0 = { func_69(Var0, unk_0x1E253A1A83763D22(fParam3, fParam4)) };
	Var0.f_2 = unk_0x1E253A1A83763D22(-fVar3, fVar3);
	return Param0 + Var0;
}

Vector3 func_69(struct<3> Param0, float fParam3)
{
	float fVar0;
	
	if (fParam3 == 0f)
	{
		return 0f, 0f, 0f;
	}
	fVar0 = unk_0x652D2EEEF1D3E62C(Param0);
	if (fVar0 != 0f)
	{
		return Param0 * FtoV((fParam3 / fVar0));
	}
	return 0f, 0f, 0f;
}

int func_70(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x939DA7EBCC6588FF(iParam0);
	return unk_0x5494F37F35C1D7D7(iParam0);
}

void func_71(int iParam0)
{
	Local_241.f_2.f_2 = iParam0;
}

int func_72(int iParam0)
{
	var uVar0;
	
	if (unk_0x3FE7F56EBD3E8BCB(iParam0))
	{
		uVar0 = unk_0x6ADAC08D70C79DE5(iParam0, 0);
		if (unk_0xECFECDAD51A6184F(uVar0, 0))
		{
			if (unk_0xD8A521688BDBE867(iVar0, -1) == iParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_73()
{
	if (!iLocal_50)
	{
		if (func_14(Local_241.f_2))
		{
			unk_0x6D98AA46076A68BE(&uLocal_48);
			unk_0x21A3553D368D632F(0, unk_0x8CB435AA1E25DA51(Local_241.f_2), 0, 0, Local_298[unk_0x044A481E863E2F6B() /*5*/].f_2 + Vector((50f + 5f), 0f, 0f), 4, 60f, 15f, -1f, unk_0x11E019C8F43ACC8A((50f + 5f)), 20);
			unk_0x21A3553D368D632F(0, unk_0x8CB435AA1E25DA51(Local_241.f_2), 0, 0, Local_241.f_2.f_14, 4, 60f, 25f, -1f, unk_0x11E019C8F43ACC8A((50f + 5f)), 20);
			unk_0x963BB7C99350D827(uLocal_48);
			iLocal_50 = 1;
		}
	}
}

int func_74(var uParam0)
{
	if (unk_0x86CB59A6776A7C27(uParam0))
	{
		return unk_0x2DE0B96E966FD817(unk_0x7A16A8A755F44481(uParam0));
	}
	return 1;
}

bool func_75(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_76()
{
	return Global_90094.f_290 > 0;
}

void func_77()
{
	if (!iLocal_237)
	{
		if (!func_74(Local_241.f_2.f_3))
		{
			func_78(&uLocal_72, 3, unk_0x7A16A8A755F44481(Local_241.f_2.f_3), "FM_Pilot_Air", 1, 1);
			iLocal_237 = 1;
		}
	}
}

void func_78(var uParam0, int iParam1, var uParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_68325)
	{
		if (!unk_0x2DE0B96E966FD817(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x54CA1F435E64266A(uParam2, 0);
			}
			else
			{
				unk_0x54CA1F435E64266A(uParam2, 1);
			}
		}
		if (!unk_0x2DE0B96E966FD817(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xA7FFC0AE4D5A08F6(uParam2, 0);
			}
			else
			{
				unk_0xA7FFC0AE4D5A08F6(uParam2, 1);
			}
		}
	}
}

int func_79()
{
	return Local_241.f_0;
}

int func_80(int iParam0)
{
	return Local_298[iParam0 /*5*/];
}

void func_81()
{
}

void func_82()
{
	if (unk_0x86CB59A6776A7C27(Local_241.f_2.f_3) && unk_0x86CB59A6776A7C27(Local_241.f_2))
	{
		if (func_14(Local_241.f_2) && !func_74(Local_241.f_2.f_3))
		{
			unk_0x21A3553D368D632F(unk_0x7A16A8A755F44481(Local_241.f_2.f_3), unk_0x8CB435AA1E25DA51(Local_241.f_2), 0, unk_0xA16EC202D9D35357(), 1f, 1f, 1f, 8, 60f, 1000f, -1f, 400, 400);
		}
	}
	func_84(func_86(1, 1), 11, func_85());
	func_83();
}

void func_83()
{
	unk_0x82706E6C897B0FA1();
}

void func_84(int iParam0, int iParam1, var uParam2)
{
	struct<4> Var0;
	
	Var0.f_0 = 294;
	Var0.f_1 = unk_0x1788E93557766241();
	Var0.f_3 = iParam1;
	Var0.f_2 = uParam2;
	if (!iParam0 == 0)
	{
		unk_0xD311A006D41D0704(1, &Var0, 6, iParam0);
	}
}

int func_85()
{
	return -1;
}

int func_86(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x42C0B50857BF923B(iVar1);
		if (func_23(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x1788E93557766241() || iParam0)
			{
				if (bParam1)
				{
					unk_0xD0E2BFCE93AE3ABD(&uVar0, iVar1);
				}
				else if (!func_59(iVar2, 0))
				{
					unk_0xD0E2BFCE93AE3ABD(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_87()
{
	bool bVar0;
	
	func_94(&bVar0);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315866 == 0)
	{
		if (!unk_0x1DAD7CE53BEE7710())
		{
			return 1;
		}
	}
	if (func_93())
	{
		return 1;
	}
	if (Global_2437386)
	{
		return 1;
	}
	if (func_92())
	{
		return 1;
	}
	if (func_91(157))
	{
		if (!func_90())
		{
			return 1;
		}
	}
	if (func_91(155))
	{
		return 1;
	}
	if (!unk_0x54CE0989F263D8A3())
	{
		return 1;
	}
	if (func_88() != 0)
	{
		if (unk_0x16CDA1894CFE0781(func_88()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_88()
{
	switch (func_89())
	{
		case 0:
			return joaat("freemode");
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_89()
{
	return Global_24446;
}

bool func_90()
{
	return Global_2428577.f_572;
}

int func_91(int iParam0)
{
	if (unk_0xA519E4AC66148E87(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_92()
{
	return Global_2435556;
}

bool func_93()
{
	return Global_2428577.f_567;
}

void func_94(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x2C15B7979450724C(1))
	{
		iVar1 = unk_0x8B6CEAB2AD1BD1CD(1, iVar0);
		if (iVar1 == 168)
		{
			unk_0x6A4B863200ABAA44(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 307:
					func_95(iVar0);
					break;
				
				case 2:
					unk_0x6A4B863200ABAA44(1, iVar0, &Var4, 3);
					if (Var4.f_2 == 53)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_95(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x6A4B863200ABAA44(1, iParam0, &Var0, 3))
	{
		if (func_23(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0xFF34D923BFB5E9FB(Var0.f_1);
			if (unk_0x538DF9E5B1DF01EB(uVar3))
			{
				if (unk_0x202EF5D8203705EF(iVar3, 0))
				{
					uVar4 = unk_0x6ADAC08D70C79DE5(iVar3, 0);
					if (unk_0xA7FB2A2F471A969B(uVar4, Var0.f_2) && unk_0x93C72DAC35C5D38C())
					{
						if (func_96(uVar4, &bVar5))
						{
							unk_0x2FC1F6BC6D0D9D77(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x3A3C5A6572B3C611(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_96(int iParam0, var uParam1)
{
	if (unk_0x538DF9E5B1DF01EB(uParam0))
	{
		if (!unk_0x22349EC06EA5B08B(iParam0))
		{
			if (unk_0xFD9706CAB35EA810(iParam0))
			{
				unk_0x7B9576B4E099FB1F(iParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0xD8233CB95CB48A7C(iParam0, 0))
		{
			if (unk_0xC7402AE8FD6AACA2(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_97()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_98(struct<20> Param0)
{
	func_104(func_105(Param0.f_0), Param0);
	unk_0x1EB75D4128DBB6C4(1);
	unk_0x29AA9A92BCC0F8E3(1);
	func_102(0, -1, 0);
	unk_0x241F80BF72379478(&Local_241, 57);
	unk_0x51FC2B81A21C009A(&Local_298, 11);
	unk_0xFF9F94FD851C212A(0);
	if (!func_101())
	{
		func_82();
	}
	if (unk_0x538DF9E5B1DF01EB(unk_0xA16EC202D9D35357()))
	{
		Local_59 = { unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 0) };
	}
	if (func_3(unk_0x1788E93557766241(), 1))
	{
		bLocal_51 = true;
	}
	func_99(64, 1);
	Local_298[unk_0x044A481E863E2F6B() /*5*/] = 0;
}

void func_99(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (bParam1)
	{
		iVar0 = -1;
	}
	switch (iParam0)
	{
		case 59:
			Global_2097152[func_100() /*8064*/].f_5756.f_18 = iVar0;
			break;
		
		case 19:
			Global_2097152[func_100() /*8064*/].f_5756.f_17 = iVar0;
			break;
		
		case 74:
			Global_2097152[func_100() /*8064*/].f_5756.f_11 = iVar0;
			break;
		
		case 20:
			Global_2097152[func_100() /*8064*/].f_5756.f_12 = iVar0;
			break;
		
		case 29:
			Global_2097152[func_100() /*8064*/].f_5756.f_13 = iVar0;
			break;
		
		case 8:
			Global_2097152[func_100() /*8064*/].f_5756.f_14 = iVar0;
			break;
		
		case 31:
			Global_2097152[func_100() /*8064*/].f_5756.f_15 = iVar0;
			break;
		
		case 3:
			Global_2097152[func_100() /*8064*/].f_5756.f_19 = iVar0;
			break;
		
		case 6:
			Global_2097152[func_100() /*8064*/].f_5756.f_16 = iVar0;
			break;
		
		case 103:
		case 104:
		case 98:
		case 105:
			Global_2097152[func_100() /*8064*/].f_5756.f_22 = iVar0;
			break;
		
		case 76:
			Global_2097152[func_100() /*8064*/].f_5756.f_23 = iVar0;
			break;
		
		case 93:
			Global_2097152[func_100() /*8064*/].f_5756.f_24 = iVar0;
			break;
		
		case 61:
		case 62:
		case 63:
		case 64:
		case 77:
		case 81:
			Global_2097152[func_100() /*8064*/].f_5756.f_25 = iVar0;
			break;
		
		case 65:
		case 75:
		case 95:
			Global_2097152[func_100() /*8064*/].f_5756.f_26 = iVar0;
			break;
			break;
		
		case 97:
			Global_2097152[func_100() /*8064*/].f_5756.f_28 = iVar0;
			break;
		
		case 88:
			Global_2097152[func_100() /*8064*/].f_5756.f_27 = iVar0;
			break;
		
		case 100:
			Global_2097152[func_100() /*8064*/].f_5756.f_30 = iVar0;
			break;
		
		case 106:
			Global_2097152[func_100() /*8064*/].f_5756.f_31 = iVar0;
			break;
		
		case 99:
			Global_2097152[func_100() /*8064*/].f_5756.f_29 = iVar0;
			break;
	}
}

int func_100()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_101()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x1DAD7CE53BEE7710())
		{
			return 0;
		}
		if (unk_0x5D0D85F8A1CCEE45())
		{
			return 1;
		}
		if (func_93())
		{
			return 0;
		}
		if (func_91(155))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	return 0;
}

int func_102(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x92078BBBAEFC7998();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_83();
			}
			else
			{
				return 0;
			}
		}
		if (!func_103())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x1DAD7CE53BEE7710())
				{
					if (!bParam2)
					{
						func_83();
					}
					else
					{
						return 0;
					}
				}
				if (func_93())
				{
					if (!bParam2)
					{
						func_83();
					}
					else
					{
						return 0;
					}
				}
				if (func_91(155))
				{
					if (!bParam2)
					{
						func_83();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0x0987AD2F87AA4427())
			{
				if (!bParam2)
				{
					func_83();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0x92078BBBAEFC7998();
	}
	if (iParam1 > -1)
	{
		Global_1312502 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x1DAD7CE53BEE7710())
		{
			if (!bParam2)
			{
				func_83();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0x0987AD2F87AA4427())
	{
		if (!bParam2)
		{
			func_83();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_103()
{
	return Global_1315866;
}

void func_104(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0x1DAD7CE53BEE7710())
	{
		func_83();
	}
	unk_0x3005435C0CFEEE94(uParam0, 0, Param1.f_16);
}

int func_105(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 2:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 50:
			return 32;
		
		case 51:
			return 32;
		
		case 55:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 56:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 32;
		
		case 65:
			return 2;
		
		case 70:
			return 1;
		
		case 66:
			return 2;
		
		case 67:
			return 4;
		
		case 68:
			return 2;
		
		case 69:
			return 2;
		
		case 52:
			return 1;
		
		case 71:
			return 2;
		
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
			return 0;
		
		case 78:
			return 1;
		
		default:
	}
	return 0;
}

